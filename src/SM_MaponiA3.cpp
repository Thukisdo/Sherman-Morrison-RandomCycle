// SM-MaponiA3_f.cpp
// Algorithm 3 from P. Maponi,
// p. 283, doi:10.1016/j.laa.2006.07.007
#include "SM_MaponiA3.hpp"
#include "Helpers.hpp"

void selectBestUpdate(unsigned int l, unsigned int N_updates, 
                      unsigned int *Updates_index, unsigned int *p, 
                      double ***ylk) {
  unsigned int lbar = l+1;
  unsigned int max = 0;
  unsigned int component = 0;
  unsigned int index = 0;
  unsigned int tmp = 0;
  double breakdown = 0;
  for (unsigned int j = lbar; j < N_updates + 1; j++) {
    index = p[j];
    component = Updates_index[index - 1];
    breakdown = abs(1 + ylk[l][index][component]);
    #ifdef DEBUG
    cout << "Inside selectBestUpdate()" << endl;
    cout << "breakdown = abs(1 + ylk[" << l << "][" << index << "][" << component << "])" << endl;
    cout << endl;
    #endif
    if (breakdown > max) {
      max = breakdown;
      lbar = j;
    }
  }
  tmp = p[l+1];
  p[l+1] = p[lbar];
  p[lbar] = tmp; 
}

void MaponiA3(double *Slater_inv, unsigned int Dim,
              unsigned int N_updates, double *Updates,
              unsigned int *Updates_index) {

  /*
  DECLARE AND INITIALISE ARRAYS
  */

  unsigned int k, l, i, j, component;
  unsigned int *p = new unsigned int[N_updates + 1] {0};
  double alpha, beta;
  double *Al = new double[Dim * Dim];
 
  // Populate update-order vector
  for (i = 0; i < N_updates; i++) {
    p[i + 1] = i + 1;
  }

  // Declare auxiliary solution matrix ylk
  double ***ylk = new double **[N_updates];
  for (l = 0; l < N_updates; l++) {
    ylk[l] = new double *[N_updates + 1];
    for (k = 0; k < N_updates + 1; k++) {
      ylk[l][k] = new double[Dim + 1] {0};
    }
  }
  
  /*
  START THE ALGORITHM
  */

  // Calculate the y0k
  for (k = 1; k < N_updates + 1; k++) {
    #ifdef DEBUG
    cout << "Compute y0k: " << endl;
    cout << "ylk[0][" << k << "][:]" << endl;
    cout << endl;
    #endif
    for (i = 1; i < Dim + 1; i++) {
      for (j = 1; j < Dim + 1; j++) {
        ylk[0][k][i] += Slater_inv[(i-1)*Dim + (j-1)]
                      * Updates[(k-1)*Dim + (j-1)];
      }
    }
  }

  // Calculate all the ylk from the y0k
  for (l = 0; l < N_updates; l++) {

    // Select lk-update with largest break-down val
    selectBestUpdate(l, N_updates, Updates_index, p, ylk);

    // Select component and comp. bd-condition.
    component = Updates_index[p[l+1] - 1];
    beta = 1 + ylk[l][p[l+1]][component];
    #ifdef DEBUG
    cout << "In outer compute-ylk-loop:" << endl; 
    cout << "beta = 1 + ylk[" << l << "][" << p[l+1] << "][" << component << "]" << endl;
    cout << endl;
    #endif
    if (fabs(beta) < 1e-6) {
      cout << "Break-down occured. Exiting..." << endl;
      exit(1);
    }

    // Compute ylk
    for (k = l+2; k < N_updates+1; k++) {
      alpha = ylk[l][p[k]][component] / beta;
      #ifdef DEBUG
      cout << "Inside k-loop of ylk-loop:" << endl;
      cout << "ylk[" << l+1 << "][" << p[k] << "][:]" << endl;
      cout << endl;
      #endif
      for (i = 1; i < Dim + 1; i++) {
        ylk[l+1][p[k]][i] = ylk[l][p[k]][i]
                        - alpha * ylk[l][p[l+1]][i];
      }
    }
  }
  
  // Construct A-inverse from A0-inverse and the ylk
  double *last = Slater_inv;
  double *next = new double[Dim*Dim] {0};
  for (l = 0; l < N_updates; l++) {
    k = l + 1;
    component = Updates_index[p[k] - 1];
    beta = 1 + ylk[l][p[k]][component];
    #ifdef DEBUG
    cout << "Compute inverse. Inside l-loop: l = " << l << endl;
    cout << "component = Updates_index[p[" << k << "] - 1] = Updates_index[" << p[k] - 1 << "] = " << Updates_index[p[k] - 1] << endl;
    cout << "beta = 1 + ylk[" << l << "][" << p[k] << "][" << component << "]" << endl;
    cout << "ylk[l][p[k]][:] = ylk[" << l << "][" << p[k] << "][:]" << endl;
    cout << endl;
    #endif  
    for (i = 0; i < Dim; i++) {
      for (j = 0; j < Dim; j++) {
        Al[i*Dim + j] = (i == j) - (j == component-1)
                      * ylk[l][p[k]][i + 1] / beta;
      }
    }
    matMul(Al, last, next, Dim);
    double *tmp = next;
    next = last;
    last = tmp;
  }
  memcpy(Slater_inv, last, Dim*Dim*sizeof(double));
 
  /*
  CLEANUP MEMORY
  */
  
  for (l = 0; l < N_updates; l++) {
    for (k = 0; k < N_updates + 1; k++) {
      delete[] ylk[l][k];
    }
    delete[] ylk[l];
  }
  delete[] Al, next, p;
}

extern "C" {
  void MaponiA3_f(double **linSlater_inv, unsigned int *Dim,
                  unsigned int *N_updates, double **linUpdates,
                  unsigned int **Updates_index) {
    MaponiA3(*linSlater_inv, *Dim,
             *N_updates, *linUpdates,
             *Updates_index);
  }
}
