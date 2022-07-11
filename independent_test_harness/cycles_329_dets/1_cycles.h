const uint32_t n_cycles = 3116;
uint32_t cycles[n_cycles] = {1,2,4,5,9,13,15,17,18,20,21,25,30,33,34,35,36,37,38,39,43,48,49,52,53,54,55,56,58,61,64,74,79,82,84,85,86,87,96,98,104,106,113,114,115,117,118,124,125,126,128,129,130,138,140,141,142,146,147,148,149,151,157,161,162,171,177,181,185,187,188,195,196,199,209,210,212,214,224,225,228,229,231,241,249,250,257,262,267,275,283,288,299,300,305,312,317,320,330,331,333,334,338,342,344,346,347,349,350,354,359,362,363,364,365,366,367,368,372,377,378,381,382,383,384,385,387,390,393,403,408,411,413,414,415,416,425,427,433,435,442,443,444,446,447,453,454,455,457,458,459,467,469,470,471,475,476,477,478,480,486,490,491,500,506,510,514,516,517,524,525,528,538,539,541,543,553,554,557,558,560,570,578,579,586,591,596,604,612,617,628,629,634,641,646,649,659,660,662,663,667,671,673,675,676,678,679,683,688,691,692,693,694,695,696,697,701,706,707,710,711,712,713,714,716,719,722,732,737,740,742,743,744,745,754,756,762,764,771,772,773,775,776,782,783,784,786,787,788,796,798,799,800,804,805,806,807,809,815,819,820,829,835,839,843,845,846,853,854,857,867,868,870,872,882,883,886,887,889,899,907,908,915,920,925,933,941,946,957,958,963,970,975,978,988,989,991,992,996,1000,1002,1004,1005,1007,1008,1012,1017,1020,1021,1022,1023,1024,1025,1026,1030,1035,1036,1039,1040,1041,1042,1043,1045,1048,1051,1061,1066,1069,1071,1072,1073,1074,1083,1085,1091,1093,1100,1101,1102,1104,1105,1111,1112,1113,1115,1116,1117,1125,1127,1128,1129,1133,1134,1135,1136,1138,1144,1148,1149,1158,1164,1168,1172,1174,1175,1182,1183,1186,1196,1197,1199,1201,1211,1212,1215,1216,1218,1228,1236,1237,1244,1249,1254,1262,1270,1275,1286,1287,1292,1299,1304,1307,1317,1318,1320,1321,1325,1329,1331,1333,1334,1336,1337,1341,1346,1349,1350,1351,1352,1353,1354,1355,1359,1364,1365,1368,1369,1370,1371,1372,1374,1377,1380,1390,1395,1398,1400,1401,1402,1403,1412,1414,1420,1422,1429,1430,1431,1433,1434,1440,1441,1442,1444,1445,1446,1454,1456,1457,1458,1462,1463,1464,1465,1467,1473,1477,1478,1487,1493,1497,1501,1503,1504,1511,1512,1515,1525,1526,1528,1530,1540,1541,1544,1545,1547,1557,1565,1566,1573,1578,1583,1591,1599,1604,1615,1616,1621,1628,1633,1636,1646,1647,1649,1650,1654,1658,1660,1662,1663,1665,1666,1670,1675,1678,1679,1680,1681,1682,1683,1684,1688,1693,1694,1697,1698,1699,1700,1701,1703,1706,1709,1719,1724,1727,1729,1730,1731,1732,1741,1743,1749,1751,1758,1759,1760,1762,1763,1769,1770,1771,1773,1774,1775,1783,1785,1786,1787,1791,1792,1793,1794,1796,1802,1806,1807,1816,1822,1826,1830,1832,1833,1840,1841,1844,1854,1855,1857,1859,1869,1870,1873,1874,1876,1886,1894,1895,1902,1907,1912,1920,1928,1933,1944,1945,1950,1957,1962,1965,1975,1976,1978,1979,1983,1987,1989,1991,1992,1994,1995,1999,2004,2007,2008,2009,2010,2011,2012,2013,2017,2022,2023,2026,2027,2028,2029,2030,2032,2035,2038,2048,2053,2056,2058,2059,2060,2061,2070,2072,2078,2080,2087,2088,2089,2091,2092,2098,2099,2100,2102,2103,2104,2112,2114,2115,2116,2120,2121,2122,2123,2125,2131,2135,2136,2145,2151,2155,2159,2161,2162,2169,2170,2173,2183,2184,2186,2188,2198,2199,2202,2203,2205,2215,2223,2224,2231,2236,2241,2249,2257,2262,2273,2274,2279,2286,2291,2294,2304,2305,2307,2308,2312,2316,2318,2320,2321,2323,2324,2328,2333,2336,2337,2338,2339,2340,2341,2342,2346,2351,2352,2355,2356,2357,2358,2359,2361,2364,2367,2377,2382,2385,2387,2388,2389,2390,2399,2401,2407,2409,2416,2417,2418,2420,2421,2427,2428,2429,2431,2432,2433,2441,2443,2444,2445,2449,2450,2451,2452,2454,2460,2464,2465,2474,2480,2484,2488,2490,2491,2498,2499,2502,2512,2513,2515,2517,2527,2528,2531,2532,2534,2544,2552,2553,2560,2565,2570,2578,2586,2591,2602,2603,2608,2615,2620,2623,2633,2634,2636,2637,2641,2645,2647,2649,2650,2652,2653,2657,2662,2665,2666,2667,2668,2669,2670,2671,2675,2680,2681,2684,2685,2686,2687,2688,2690,2693,2696,2706,2711,2714,2716,2717,2718,2719,2728,2730,2736,2738,2745,2746,2747,2749,2750,2756,2757,2758,2760,2761,2762,2770,2772,2773,2774,2778,2779,2780,2781,2783,2789,2793,2794,2803,2809,2813,2817,2819,2820,2827,2828,2831,2841,2842,2844,2846,2856,2857,2860,2861,2863,2873,2881,2882,2889,2894,2899,2907,2915,2920,2931,2932,2937,2944,2949,2952,2962,2963,2965,2966,2970,2974,2976,2978,2979,2981,2982,2986,2991,2994,2995,2996,2997,2998,2999,3000,3004,3009,3010,3013,3014,3015,3016,3017,3019,3022,3025,3035,3040,3043,3045,3046,3047,3048,3057,3059,3065,3067,3074,3075,3076,3078,3079,3085,3086,3087,3089,3090,3091,3099,3101,3102,3103,3107,3108,3109,3110,3112,3118,3122,3123,3132,3138,3142,3146,3148,3149,3156,3157,3160,3170,3171,3173,3175,3185,3186,3189,3190,3192,3202,3210,3211,3218,3223,3228,3236,3244,3249,3260,3261,3266,3273,3278,3281,3291,3292,3294,3295,3299,3303,3305,3307,3308,3310,3311,3315,3320,3323,3324,3325,3326,3327,3328,3329,3333,3338,3339,3342,3343,3344,3345,3346,3348,3351,3354,3364,3369,3372,3374,3375,3376,3377,3386,3388,3394,3396,3403,3404,3405,3407,3408,3414,3415,3416,3418,3419,3420,3428,3430,3431,3432,3436,3437,3438,3439,3441,3447,3451,3452,3461,3467,3471,3475,3477,3478,3485,3486,3489,3499,3500,3502,3504,3514,3515,3518,3519,3521,3531,3539,3540,3547,3552,3557,3565,3573,3578,3589,3590,3595,3602,3607,3610,3620,3621,3623,3624,3628,3632,3634,3636,3637,3639,3640,3644,3649,3652,3653,3654,3655,3656,3657,3658,3662,3667,3668,3671,3672,3673,3674,3675,3677,3680,3683,3693,3698,3701,3703,3704,3705,3706,3715,3717,3723,3725,3732,3733,3734,3736,3737,3743,3744,3745,3747,3748,3749,3757,3759,3760,3761,3765,3766,3767,3768,3770,3776,3780,3781,3790,3796,3800,3804,3806,3807,3814,3815,3818,3828,3829,3831,3833,3843,3844,3847,3848,3850,3860,3868,3869,3876,3881,3886,3894,3902,3907,3918,3919,3924,3931,3936,3939,3949,3950,3952,3953,3957,3961,3963,3965,3966,3968,3969,3973,3978,3981,3982,3983,3984,3985,3986,3987,3991,3996,3997,4000,4001,4002,4003,4004,4006,4009,4012,4022,4027,4030,4032,4033,4034,4035,4044,4046,4052,4054,4061,4062,4063,4065,4066,4072,4073,4074,4076,4077,4078,4086,4088,4089,4090,4094,4095,4096,4097,4099,4105,4109,4110,4119,4125,4129,4133,4135,4136,4143,4144,4147,4157,4158,4160,4162,4172,4173,4176,4177,4179,4189,4197,4198,4205,4210,4215,4223,4231,4236,4247,4248,4253,4260,4265,4268,4278,4279,4281,4282,4286,4290,4292,4294,4295,4297,4298,4302,4307,4310,4311,4312,4313,4314,4315,4316,4320,4325,4326,4329,4330,4331,4332,4333,4335,4338,4341,4351,4356,4359,4361,4362,4363,4364,4373,4375,4381,4383,4390,4391,4392,4394,4395,4401,4402,4403,4405,4406,4407,4415,4417,4418,4419,4423,4424,4425,4426,4428,4434,4438,4439,4448,4454,4458,4462,4464,4465,4472,4473,4476,4486,4487,4489,4491,4501,4502,4505,4506,4508,4518,4526,4527,4534,4539,4544,4552,4560,4565,4576,4577,4582,4589,4594,4597,4607,4608,4610,4611,4615,4619,4621,4623,4624,4626,4627,4631,4636,4639,4640,4641,4642,4643,4644,4645,4649,4654,4655,4658,4659,4660,4661,4662,4664,4667,4670,4680,4685,4688,4690,4691,4692,4693,4702,4704,4710,4712,4719,4720,4721,4723,4724,4730,4731,4732,4734,4735,4736,4744,4746,4747,4748,4752,4753,4754,4755,4757,4763,4767,4768,4777,4783,4787,4791,4793,4794,4801,4802,4805,4815,4816,4818,4820,4830,4831,4834,4835,4837,4847,4855,4856,4863,4868,4873,4881,4889,4894,4905,4906,4911,4918,4923,4926,4936,4937,4939,4940,4944,4948,4950,4952,4953,4955,4956,4960,4965,4968,4969,4970,4971,4972,4973,4974,4978,4983,4984,4987,4988,4989,4990,4991,4993,4996,4999,5009,5014,5017,5019,5020,5021,5022,5031,5033,5039,5041,5048,5049,5050,5052,5053,5059,5060,5061,5063,5064,5065,5073,5075,5076,5077,5081,5082,5083,5084,5086,5092,5096,5097,5106,5112,5116,5120,5122,5123,5130,5131,5134,5144,5145,5147,5149,5159,5160,5163,5164,5166,5176,5184,5185,5192,5197,5202,5210,5218,5223,5234,5235,5240,5247,5252,5255,5265,5266,5268,5269,5273,5277,5279,5281,5282,5284,5285,5289,5294,5297,5298,5299,5300,5301,5302,5303,5307,5312,5313,5316,5317,5318,5319,5320,5322,5325,5328,5338,5343,5346,5348,5349,5350,5351,5360,5362,5368,5370,5377,5378,5379,5381,5382,5388,5389,5390,5392,5393,5394,5402,5404,5405,5406,5410,5411,5412,5413,5415,5421,5425,5426,5435,5441,5445,5449,5451,5452,5459,5460,5463,5473,5474,5476,5478,5488,5489,5492,5493,5495,5505,5513,5514,5521,5526,5531,5539,5547,5552,5563,5564,5569,5576,5581,5584,5594,5595,5597,5598,5602,5606,5608,5610,5611,5613,5614,5618,5623,5626,5627,5628,5629,5630,5631,5632,5636,5641,5642,5645,5646,5647,5648,5649,5651,5654,5657,5667,5672,5675,5677,5678,5679,5680,5689,5691,5697,5699,5706,5707,5708,5710,5711,5717,5718,5719,5721,5722,5723,5731,5733,5734,5735,5739,5740,5741,5742,5744,5750,5754,5755,5764,5770,5774,5778,5780,5781,5788,5789,5792,5802,5803,5805,5807,5817,5818,5821,5822,5824,5834,5842,5843,5850,5855,5860,5868,5876,5881,5892,5893,5898,5905,5910,5913,5923,5924,5926,5927,5931,5935,5937,5939,5940,5942,5943,5947,5952,5955,5956,5957,5958,5959,5960,5961,5965,5970,5971,5974,5975,5976,5977,5978,5980,5983,5986,5996,6001,6004,6006,6007,6008,6009,6018,6020,6026,6028,6035,6036,6037,6039,6040,6046,6047,6048,6050,6051,6052,6060,6062,6063,6064,6068,6069,6070,6071,6073,6079,6083,6084,6093,6099,6103,6107,6109,6110,6117,6118,6121,6131,6132,6134,6136,6146,6147,6150,6151,6153,6163,6171,6172,6179,6184,6189,6197,6205,6210,6221,6222,6227,6234,6239,6242,6252,6253,6255,6256,6260,6264,6266,6268,6269,6271,6272,6276,6281,6284,6285,6286,6287,6288,6289,6290,6294,6299,6300,6303,6304,6305,6306,6307,6309,6312,6315,6325,6330,6333,6335,6336,6337,6338,6347,6349,6355,6357,6364,6365,6366,6368,6369,6375,6376,6377,6379,6380,6381,6389,6391,6392,6393,6397,6398,6399,6400,6402,6408,6412,6413,6422,6428,6432,6436,6438,6439,6446,6447,6450,6460,6461,6463,6465,6475,6476,6479,6480,6482,6492,6500,6501,6508,6513,6518,6526,6534,6539,6550,6551,6556,6563,6568,6571,6581,6582,6584,6585,6589,6593,6595,6597,6598,6600,6601,6605,6610,6613,6614,6615,6616,6617,6618,6619,6623,6628,6629,6632,6633,6634,6635,6636,6638,6641,6644,6654,6659,6662,6664,6665,6666,6667,6676,6678,6684,6686,6693,6694,6695,6697,6698,6704,6705,6706,6708,6709,6710,6718,6720,6721,6722,6726,6727,6728,6729,6731,6737,6741,6742,6751,6757,6761,6765,6767,6768,6775,6776,6779,6789,6790,6792,6794,6804,6805,6808,6809,6811,6821,6829,6830,6837,6842,6847,6855,6863,6868,6879,6880,6885,6892,6897,6900,6910,6911,6913,6914,6918,6922,6924,6926,6927,6929,6930,6934,6939,6942,6943,6944,6945,6946,6947,6948,6952,6957,6958,6961,6962,6963,6964,6965,6967,6970,6973,6983,6988,6991,6993,6994,6995,6996,7005,7007,7013,7015,7022,7023,7024,7026,7027,7033,7034,7035,7037,7038,7039,7047,7049,7050,7051,7055,7056,7057,7058,7060,7066,7070,7071,7080,7086,7090,7094,7096,7097,7104,7105,7108,7118,7119,7121,7123,7133,7134,7137,7138,7140,7150,7158,7159,7166,7171,7176,7184,7192,7197,7208,7209,7214,7221,7226,7229,7239,7240,7242,7243,7247,7251,7253,7255,7256,7258,7259,7263,7268,7271,7272,7273,7274,7275,7276,7277,7281,7286,7287,7290,7291,7292,7293,7294,7296,7299,7302,7312,7317,7320,7322,7323,7324,7325,7334,7336,7342,7344,7351,7352,7353,7355,7356,7362,7363,7364,7366,7367,7368,7376,7378,7379,7380,7384,7385,7386,7387,7389,7395,7399,7400,7409,7415,7419,7423,7425,7426,7433,7434,7437,7447,7448,7450,7452,7462,7463,7466,7467,7469,7479,7487,7488,7495,7500,7505,7513,7521,7526,7537,7538,7543,7550,7555,7558,7568,7569,7571,7572,7576,7580,7582,7584,7585,7587,7588,7592,7597,7600,7601,7602,7603,7604,7605,7606,7610,7615,7616,7619,7620,7621,7622,7623,7625,7628,7631,7641,7646,7649,7651,7652,7653,7654,7663,7665,7671,7673,7680,7681,7682,7684,7685,7691,7692,7693,7695,7696,7697,7705,7707,7708,7709,7713,7714,7715,7716,7718,7724,7728,7729,7738,7744,7748,7752,7754,7755,7762,7763,7766,7776,7777,7779,7781,7791,7792,7795,7796,7798,7808,7816,7817,7824,7829,7834,7842,7850,7855,7866,7867,7872,7879,7884,7887,7897,7898,7900,7901,7905,7909,7911,7913,7914,7916,7917,7921,7926,7929,7930,7931,7932,7933,7934,7935,7939,7944,7945,7948,7949,7950,7951,7952,7954,7957,7960,7970,7975,7978,7980,7981,7982,7983,7992,7994,8000,8002,8009,8010,8011,8013,8014,8020,8021,8022,8024,8025,8026,8034,8036,8037,8038,8042,8043,8044,8045,8047,8053,8057,8058,8067,8073,8077,8081,8083,8084,8091,8092,8095,8105,8106,8108,8110,8120,8121,8124,8125,8127,8137,8145,8146,8153,8158,8163,8171,8179,8184,8195,8196,8201,8208,8213,8216,8226,8227,8229,8230,8234,8238,8240,8242,8243,8245,8246,8250,8255,8258,8259,8260,8261,8262,8263,8264,8268,8273,8274,8277,8278,8279,8280,8281,8283,8286,8289,8299,8304,8307,8309,8310,8311,8312,8321,8323,8329,8331,8338,8339,8340,8342,8343,8349,8350,8351,8353,8354,8355,8363,8365,8366,8367,8371,8372,8373,8374,8376,8382,8386,8387,8396,8402,8406,8410,8412,8413,8420,8421,8424,8434,8435,8437,8439,8449,8450,8453,8454,8456,8466,8474,8475,8482,8487,8492,8500,8508,8513,8524,8525,8530,8537,8542,8545,8555,8556,8558,8559,8563,8567,8569,8571,8572,8574,8575,8579,8584,8587,8588,8589,8590,8591,8592,8593,8597,8602,8603,8606,8607,8608,8609,8610,8612,8615,8618,8628,8633,8636,8638,8639,8640,8641,8650,8652,8658,8660,8667,8668,8669,8671,8672,8678,8679,8680,8682,8683,8684,8692,8694,8695,8696,8700,8701,8702,8703,8705,8711,8715,8716,8725,8731,8735,8739,8741,8742,8749,8750,8753,8763,8764,8766,8768,8778,8779,8782,8783,8785,8795,8803,8804,8811,8816,8821,8829,8837,8842,8853,8854,8859,8866,8871,8874,8884,8885,8887,8888,8892,8896,8898,8900,8901,8903,8904,8908,8913,8916,8917,8918,8919,8920,8921,8922,8926,8931,8932,8935,8936,8937,8938,8939,8941,8944,8947,8957,8962,8965,8967,8968,8969,8970,8979,8981,8987,8989,8996,8997,8998,9000,9001,9007,9008,9009,9011,9012,9013,9021,9023,9024,9025,9029,9030,9031,9032,9034,9040,9044,9045,9054,9060,9064,9068,9070,9071,9078,9079,9082,9092,9093,9095,9097,9107,9108,9111,9112,9114,9124,9132,9133,9140,9145,9150,9158,9166,9171,9182,9183,9188,9195,9200,9203,9213,9214,9216,9217,9221,9225,9227,9229,9230,9232,9233,9237,9242,9245,9246,9247,9248,9249,9250,9251,9255,9260,9261,9264,9265,9266,9267,9268,9270,9273,9276,9286,9291,9294,9296,9297,9298,9299,9308,9310,9316,9318,9325,9326,9327,9329,9330,9336,9337,9338,9340,9341,9342,9350,9352,9353,9354,9358,9359,9360,9361,9363,9369,9373,9374,9383,9389,9393,9397,9399,9400,9407,9408,9411,9421,9422,9424,9426,9436,9437,9440,9441,9443,9453,9461,9462,9469,9474,9479,9487,9495,9500,9511,9512,9517,9524,9529,9532,9542,9543,9545,9546,9550,9554,9556,9558,9559,9561,9562,9566,9571,9574,9575,9576,9577,9578,9579,9580,9584,9589,9590,9593,9594,9595,9596,9597,9599,9602,9605,9615,9620,9623,9625,9626,9627,9628,9637,9639,9645,9647,9654,9655,9656,9658,9659,9665,9666,9667,9669,9670,9671,9679,9681,9682,9683,9687,9688,9689,9690,9692,9698,9702,9703,9712,9718,9722,9726,9728,9729,9736,9737,9740,9750,9751,9753,9755,9765,9766,9769,9770,9772,9782,9790,9791,9798,9803,9808,9816,9824,9829,9840,9841,9846,9853,9858,9861,9871,9872,9874,9875,9879,9883,9885,9887,9888,9890,9891,9895,9900,9903,9904,9905,9906,9907,9908,9909,9913,9918,9919,9922,9923,9924,9925,9926,9928,9931,9934,9944,9949,9952,9954,9955,9956,9957,9966,9968,9974,9976,9983,9984,9985,9987,9988,9994,9995,9996,9998,9999,10000,10008,10010,10011,10012,10016,10017,10018,10019,10021,10027,10031,10032,10041,10047,10051,10055,10057,10058,10065,10066,10069,10079,10080,10082,10084,10094,10095,10098,10099,10101,10111,10119,10120,10127,10132,10137,10145,10153,10158,10169,10170,10175,10182,10187,10190,10200,10201,10203,10204,10208,10212,10214,10216,10217,10219,10220,10224,10229,10232,10233,10234,10235,10236,10237,10238,10242,10247,10248,10251,10252,10253,10254,10255,10257,10260,10263,10273,10278,10281,10283,10284,10285,10286,10295,10297,10303,10305,10312,10313,10314,10316,10317,10323,10324,10325,10327,10328,10329,10337,10339,10340,10341,10345,10346,10347,10348,10350,10356,10360,10361,10370,10376,10380,10384,10386,10387,10394,10395,10398,10408,10409,10411,10413};