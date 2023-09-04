// SPDX-License-Identifier: BSD-3-Clause
//
// Copyright(c) 2021-2023 Intel Corporation. All rights reserved.
//
// Author: Seppo Ingalsuo <seppo.ingalsuo@linux.intel.com>
//         Jaska Uimonen <jaska.uimonen@linux.intel.com>

#ifndef __SOF_AUDIO_COEFFICIENTS_PDM_DECIM_PDM_DECIM_FIR_H__
#define __SOF_AUDIO_COEFFICIENTS_PDM_DECIM_PDM_DECIM_FIR_H__

#include <stdint.h>

struct pdm_decim {
	int decim_factor;
	int length;
	int shift;
	int relative_passband;
	int relative_stopband;
	int passband_ripple;
	int stopband_ripple;
	const int32_t *coef;
};

const int32_t fir_int32_10_4156_5345_010_090[250] = {
	1523665, 1033186, 1237912, 1334775, 1259136,
	945771, 330804, -639430, -2007230, -3782603,
	-5951062, -8464725, -11233139, -14135396, -17013193,
	-19685639, -21953913, -23620153, -24499971, -24438406,
	-23328862, -21124651, -17851431, -13614282, -8597813,
	-3061758, 2673313, 8241850, 13260214, 17352951,
	20183225, 21483036, 21079871, 18918865, 15076270,
	9764507, 3325641, -3786831, -11034844, -17834361,
	-23598518, -27786005, -29948197, -29773031, -27120493,
	-22045821, -14809184, -5868041, 4147420, 14474606,
	24273606, 32691772, 38934943, 42337380, 42426833,
	38977193, 32043932, 21978645, 9419218, -4744590,
	-19429341, -33436251, -45544284, -54611932, -59678078,
	-60055175, -55404949, -45789928, -31694490, -14011800,
	6004287, 26821132, 46737621, 64015881, 77024918,
	84384267, 85096503, 78655977, 65124057, 45161629,
	20014065, -8553289, -38367257, -66999907, -91952963,
	-110860336, -121693302, -122951962, -113826153, -94311463,
	-65267325, -28409399, 13767679, 58135590, 101138413,
	139047421, 168247614, 185536046, 188409622, 175319624,
	145872050, 100954938, 42779310, -25174601, -98307054,
	-171138928, -237629824, -291555223, -326919157, -338374861,
	-321624361, -273768560, -193581379, -81686484, 59379271,
	225223665, 409778420, 605591661, 804217132, 996677146,
	1173970423, 1327592623, 1450036054, 1535235882, 1578933611,
	1578933611, 1535235882, 1450036054, 1327592623, 1173970423,
	996677146, 804217132, 605591661, 409778420, 225223665,
	59379271, -81686484, -193581379, -273768560, -321624361,
	-338374861, -326919157, -291555223, -237629824, -171138928,
	-98307054, -25174601, 42779310, 100954938, 145872050,
	175319624, 188409622, 185536046, 168247614, 139047421,
	101138413, 58135590, 13767679, -28409399, -65267325,
	-94311463, -113826153, -122951962, -121693302, -110860336,
	-91952963, -66999907, -38367257, -8553289, 20014065,
	45161629, 65124057, 78655977, 85096503, 84384267,
	77024918, 64015881, 46737621, 26821132, 6004287,
	-14011800, -31694490, -45789928, -55404949, -60055175,
	-59678078, -54611932, -45544284, -33436251, -19429341,
	-4744590, 9419218, 21978645, 32043932, 38977193,
	42426833, 42337380, 38934943, 32691772, 24273606,
	14474606, 4147420, -5868041, -14809184, -22045821,
	-27120493, -29773031, -29948197, -27786005, -23598518,
	-17834361, -11034844, -3786831, 3325641, 9764507,
	15076270, 18918865, 21079871, 21483036, 20183225,
	17352951, 13260214, 8241850, 2673313, -3061758,
	-8597813, -13614282, -17851431, -21124651, -23328862,
	-24438406, -24499971, -23620153, -21953913, -19685639,
	-17013193, -14135396, -11233139, -8464725, -5951062,
	-3782603, -2007230, -639430, 330804, 945771,
	1259136, 1334775, 1237912, 1033186, 1523665
};

struct pdm_decim pdm_decim_int32_10_4156_5345_010_090 = {
	10, 250, 3, 4156, 5345, 10, 90, fir_int32_10_4156_5345_010_090
};

const int32_t fir_int32_05_4325_5100_010_095[249] = {
	-207469, -340409, -498144, -558705, -409384,
	55040, 891125, 2067198, 3439775, 4759611,
	5714914, 6006588, 5438767, 3999938, 1904139,
	-429386, -2461501, -3672469, -3715731, -2543409,
	-455850, 1949813, 3931230, 4816572, 4223058,
	2208032, -705100, -3649781, -5664341, -5997954,
	-4379534, -1155856, 2760627, 6138124, 7803235,
	7038238, 3865643, -886573, -5783539, -9205487,
	-9873081, -7309023, -2074085, 4324112, 9849851,
	12575185, 11338304, 6203771, -1449001, -9273272,
	-14659745, -15592551, -11379919, -3001447, 7079011,
	15617750, 19618936, 17365380, 9103870, -2875883,
	-14845719, -22779047, -23684744, -16699479, -3549687,
	11824128, 24420688, 29781202, 25536278, 12369331,
	-5975020, -23715313, -34825066, -35046780, -23465500,
	-3076561, 19921841, 37971240, 44596949, 36675890,
	15750350, -12128842, -38090537, -53213360, -51529430,
	-32269554, -535756, 33948414, 59741809, 67400482,
	52822241, 19070165, -24058950, -62761384, -83526757,
	-77707237, -44854657, 6391470, 60372631, 99010031,
	107635426, 80237884, 22341840, -49653145, -112793869,
	-144502927, -130123093, -68698546, 25049444, 123586766,
	193887099, 207405271, 149914650, 28201854, -128717667,
	-274782040, -357589632, -332094228, -173714910, 112793207,
	491412574, 900833942, 1267184732, 1520519220, 1610979079,
	1520519220, 1267184732, 900833942, 491412574, 112793207,
	-173714910, -332094228, -357589632, -274782040, -128717667,
	28201854, 149914650, 207405271, 193887099, 123586766,
	25049444, -68698546, -130123093, -144502927, -112793869,
	-49653145, 22341840, 80237884, 107635426, 99010031,
	60372631, 6391470, -44854657, -77707237, -83526757,
	-62761384, -24058950, 19070165, 52822241, 67400482,
	59741809, 33948414, -535756, -32269554, -51529430,
	-53213360, -38090537, -12128842, 15750350, 36675890,
	44596949, 37971240, 19921841, -3076561, -23465500,
	-35046780, -34825066, -23715313, -5975020, 12369331,
	25536278, 29781202, 24420688, 11824128, -3549687,
	-16699479, -23684744, -22779047, -14845719, -2875883,
	9103870, 17365380, 19618936, 15617750, 7079011,
	-3001447, -11379919, -15592551, -14659745, -9273272,
	-1449001, 6203771, 11338304, 12575185, 9849851,
	4324112, -2074085, -7309023, -9873081, -9205487,
	-5783539, -886573, 3865643, 7038238, 7803235,
	6138124, 2760627, -1155856, -4379534, -5997954,
	-5664341, -3649781, -705100, 2208032, 4223058,
	4816572, 3931230, 1949813, -455850, -2543409,
	-3715731, -3672469, -2461501, -429386, 1904139,
	3999938, 5438767, 6006588, 5714914, 4759611,
	3439775, 2067198, 891125, 55040, -409384,
	-558705, -498144, -340409, -207469
};

struct pdm_decim pdm_decim_int32_05_4325_5100_010_095 = {
	5, 249, 2, 4325, 5100, 10, 95, fir_int32_05_4325_5100_010_095
};

const int32_t fir_int32_12_4156_5345_010_090[250] = {
	3388064, 2103678, 2588621, 3003201, 3289311,
	3375616, 3187681, 2654590, 1715972, 309000,
	-1610211, -4055571, -7035886, -10511174, -14426105,
	-18683424, -23158811, -27697959, -32125744, -36244313,
	-39850668, -42739502, -44716782, -45614286, -45293362,
	-43663492, -40685637, -36382432, -30840569, -24214188,
	-16719141, -8631481, -273616, 7996830, 15802429,
	22766807, 28531588, 32779134, 35250465, 35763733,
	34227329, 30653000, 25158397, 17970176, 9416017,
	-86479, -10047026, -19926252, -29162149, -37200047,
	-43523733, -47686853, -49340539, -48260145, -44362718,
	-37720992, -28567244, -17289156, -4416600, 9400589,
	23423041, 36858656, 48904650, 58793401, 65836995,
	69472264, 69298737, 65111461, 56923398, 44977350,
	29744904, 11913285, -7641844, -27894994, -47720356,
	-65950400, -81438916, -93127908, -100112283, -101700449,
	-97465921, -87287745, -71375413, -50277965, -24873838,
	3657557, 33882414, 64176403, 92802029, 117997525,
	138071930, 151502587, 157029100, 153740023, 141145505,
	119233461, 88503690, 49978361, 5186664, -43876910,
	-94819563, -144940463, -191340721, -231048840, -261155504,
	-278952672, -282068987, -268596392, -237200378, -187208906,
	-118674579, -32406655, 70029801, 186348178, 313607557,
	448310730, 586528751, 724047761, 856530828, 979688864,
	1089452098, 1182135271, 1254588364, 1304326765, 1329634160,
	1329634160, 1304326765, 1254588364, 1182135271, 1089452098,
	979688864, 856530828, 724047761, 586528751, 448310730,
	313607557, 186348178, 70029801, -32406655, -118674579,
	-187208906, -237200378, -268596392, -282068987, -278952672,
	-261155504, -231048840, -191340721, -144940463, -94819563,
	-43876910, 5186664, 49978361, 88503690, 119233461,
	141145505, 153740023, 157029100, 151502587, 138071930,
	117997525, 92802029, 64176403, 33882414, 3657557,
	-24873838, -50277965, -71375413, -87287745, -97465921,
	-101700449, -100112283, -93127908, -81438916, -65950400,
	-47720356, -27894994, -7641844, 11913285, 29744904,
	44977350, 56923398, 65111461, 69298737, 69472264,
	65836995, 58793401, 48904650, 36858656, 23423041,
	9400589, -4416600, -17289156, -28567244, -37720992,
	-44362718, -48260145, -49340539, -47686853, -43523733,
	-37200047, -29162149, -19926252, -10047026, -86479,
	9416017, 17970176, 25158397, 30653000, 34227329,
	35763733, 35250465, 32779134, 28531588, 22766807,
	15802429, 7996830, -273616, -8631481, -16719141,
	-24214188, -30840569, -36382432, -40685637, -43663492,
	-45293362, -45614286, -44716782, -42739502, -39850668,
	-36244313, -32125744, -27697959, -23158811, -18683424,
	-14426105, -10511174, -7035886, -4055571, -1610211,
	309000, 1715972, 2654590, 3187681, 3375616,
	3289311, 3003201, 2588621, 2103678, 3388064
};

struct pdm_decim pdm_decim_int32_12_4156_5345_010_090 = {
	12, 250, 3, 4156, 5345, 10, 90, fir_int32_12_4156_5345_010_090
};

const int32_t fir_int32_03_4375_5100_010_095[157] = {
	350908, 1127906, 2233575, 3059598, 2752218,
	818077, -2252677, -4944563, -5550761, -3466262,
	53093, 2496787, 1904133, -1421749, -4818616,
	-5204506, -1721103, 3155344, 5311508, 2454543,
	-3518663, -7589567, -5713379, 1327838, 7901439,
	7958184, 527907, -8634105, -11354937, -4214569,
	7627213, 13970417, 8263468, -5862019, -16549858,
	-13530131, 2213952, 17870989, 19056458, 2854116,
	-18029944, -24979416, -9860304, 16175288, 30546328,
	18606151, -11894439, -35172976, -28918520, 4746588,
	38201563, 40591159, 5825487, -38713444, -53159813,
	-20283635, 35723701, 66121349, 39266346, -27911327,
	-78796917, -63664545, 13459132, 90417174, 95194527,
	10755265, -99898306, -137498952, -51076476, 105458775,
	200050300, 124562550, -101613472, -313388303, -297347454,
	53702567, 639689683, 1187815441, 1411068556, 1187815441,
	639689683, 53702567, -297347454, -313388303, -101613472,
	124562550, 200050300, 105458775, -51076476, -137498952,
	-99898306, 10755265, 95194527, 90417174, 13459132,
	-63664545, -78796917, -27911327, 39266346, 66121349,
	35723701, -20283635, -53159813, -38713444, 5825487,
	40591159, 38201563, 4746588, -28918520, -35172976,
	-11894439, 18606151, 30546328, 16175288, -9860304,
	-24979416, -18029944, 2854116, 19056458, 17870989,
	2213952, -13530131, -16549858, -5862019, 8263468,
	13970417, 7627213, -4214569, -11354937, -8634105,
	527907, 7958184, 7901439, 1327838, -5713379,
	-7589567, -3518663, 2454543, 5311508, 3155344,
	-1721103, -5204506, -4818616, -1421749, 1904133,
	2496787, 53093, -3466262, -5550761, -4944563,
	-2252677, 818077, 2752218, 3059598, 2233575,
	1127906, 350908
};

struct pdm_decim pdm_decim_int32_03_4375_5100_010_095 = {
	3, 157, 1, 4375, 5100, 10, 95, fir_int32_03_4375_5100_010_095
};

const int32_t fir_int32_02_4375_5100_010_095[101] = {
	-587830, -2653881, -5154608, -4845367, -226474,
	4220832, 2571159, -3184700, -4043579, 2206821,
	5554546, -750495, -6923897, -1268580, 8073364,
	4085184, -8546479, -7505366, 8176184, 11533751,
	-6471060, -15704257, 3359705, 19852407, 1635592,
	-23144509, -8252640, 25285011, 16574477, -25723227,
	-26663303, 23549736, 38139662, -17943368, -50446982,
	8141045, 63090266, 7051348, -75166961, -29039893,
	85772628, 60568976, -93167361, -106799777, 94198977,
	180962817, -78385599, -324820256, -12243140, 742491464,
	1151461314, 742491464, -12243140, -324820256, -78385599,
	180962817, 94198977, -106799777, -93167361, 60568976,
	85772628, -29039893, -75166961, 7051348, 63090266,
	8141045, -50446982, -17943368, 38139662, 23549736,
	-26663303, -25723227, 16574477, 25285011, -8252640,
	-23144509, 1635592, 19852407, 3359705, -15704257,
	-6471060, 11533751, 8176184, -7505366, -8546479,
	4085184, 8073364, -1268580, -6923897, -750495,
	5554546, 2206821, -4043579, -3184700, 2571159,
	4220832, -226474, -4845367, -5154608, -2653881,
	-587830
};

struct pdm_decim pdm_decim_int32_02_4375_5100_010_095 = {
	2, 101, 0, 4375, 5100, 10, 95, fir_int32_02_4375_5100_010_095
};

const int32_t fir_int32_08_4156_5301_010_090[249] = {
	-436533, -30097, 185136, 599151, 1249127,
	2156309, 3316125, 4690126, 6201703, 7736149,
	9146691, 10266194, 10924643, 10970009, 10291237,
	8839410, 6645091, 3827796, 595625, -2767301,
	-5925074, -8524488, -10235869, -10797193, -10055131,
	-7997758, -4771108, -678235, 3841448, 8252025,
	11985305, 14503017, 15375105, 14342998, 11370408,
	6669744, 697166, -5883789, -12270613, -17614188,
	-21126754, -22191034, -20457484, -15913860, -8916788,
	-176408, 9306801, 18349873, 25728753, 30337331,
	31343834, 28324134, 21351665, 11028693, -1551253,
	-14908738, -27343830, -37144407, -42813431, -43283070,
	-38091954, -27492154, -12471488, 5321162, 23744416,
	40410795, 52985294, 59498920, 58637630, 49965561,
	34048834, 12455105, -12379340, -37407904, -59331472,
	-75016381, -81921345, -78477412, -64367569, -40661743,
	-9779029, 24730505, 58569248, 87201632, 106433026,
	112987295, 105007254, 82406938, 47020690, 2512109,
	-45960354, -92298012, -130180961, -153871591, -159007197,
	-143278921, -106903512, -52811885, 13489989, 84396518,
	150980417, 204001696, 235041565, 237634873, 208265018,
	147093489, 58319704, -49897266, -165975625, -275876513,
	-364417203, -416806765, -420248734, -365439450, -247794421,
	-68258347, 166406038, 443903891, 747260153, 1056170460,
	1348727100, 1603354585, 1800763975, 1925728602, 1968501522,
	1925728602, 1800763975, 1603354585, 1348727100, 1056170460,
	747260153, 443903891, 166406038, -68258347, -247794421,
	-365439450, -420248734, -416806765, -364417203, -275876513,
	-165975625, -49897266, 58319704, 147093489, 208265018,
	237634873, 235041565, 204001696, 150980417, 84396518,
	13489989, -52811885, -106903512, -143278921, -159007197,
	-153871591, -130180961, -92298012, -45960354, 2512109,
	47020690, 82406938, 105007254, 112987295, 106433026,
	87201632, 58569248, 24730505, -9779029, -40661743,
	-64367569, -78477412, -81921345, -75016381, -59331472,
	-37407904, -12379340, 12455105, 34048834, 49965561,
	58637630, 59498920, 52985294, 40410795, 23744416,
	5321162, -12471488, -27492154, -38091954, -43283070,
	-42813431, -37144407, -27343830, -14908738, -1551253,
	11028693, 21351665, 28324134, 31343834, 30337331,
	25728753, 18349873, 9306801, -176408, -8916788,
	-15913860, -20457484, -22191034, -21126754, -17614188,
	-12270613, -5883789, 697166, 6669744, 11370408,
	14342998, 15375105, 14503017, 11985305, 8252025,
	3841448, -678235, -4771108, -7997758, -10055131,
	-10797193, -10235869, -8524488, -5925074, -2767301,
	595625, 3827796, 6645091, 8839410, 10291237,
	10970009, 10924643, 10266194, 9146691, 7736149,
	6201703, 4690126, 3316125, 2156309, 1249127,
	599151, 185136, -30097, -436533
};

struct pdm_decim pdm_decim_int32_08_4156_5301_010_090 = {
	8, 249, 3, 4156, 5301, 10, 90, fir_int32_08_4156_5301_010_090
};

const int32_t fir_int32_02_4323_5100_010_095[95] = {
	178179, -158757, -2195582, -5296650, -5737416,
	-1057695, 4405719, 3336648, -3249588, -5061179,
	1984305, 6895125, 68826, -8433396, -2933479,
	9499107, 6882087, -9330152, -11397510, 7807097,
	16376076, -4402338, -21239788, -1118085, 25423993,
	9062534, -27935015, -19203927, 28049586, 31500423,
	-24524863, -45191501, 16582731, 59861920, -2808306,
	-74639091, -18696113, 88054673, 50505898, -98266320,
	-97865783, 101816481, 173879965, -88042495, -320187025,
	-1193013, 740698712, 1139586920, 740698712, -1193013,
	-320187025, -88042495, 173879965, 101816481, -97865783,
	-98266320, 50505898, 88054673, -18696113, -74639091,
	-2808306, 59861920, 16582731, -45191501, -24524863,
	31500423, 28049586, -19203927, -27935015, 9062534,
	25423993, -1118085, -21239788, -4402338, 16376076,
	7807097, -11397510, -9330152, 6882087, 9499107,
	-2933479, -8433396, 68826, 6895125, 1984305,
	-5061179, -3249588, 3336648, 4405719, -1057695,
	-5737416, -5296650, -2195582, -158757, 178179
};

struct pdm_decim pdm_decim_int32_02_4323_5100_010_095 = {
	2, 95, 0, 4323, 5100, 10, 95, fir_int32_02_4323_5100_010_095
};

const int32_t fir_int32_06_4172_5100_010_095[247] = {
	-128631, -59503, 27031, 238532, 615330,
	1180314, 1925562, 2802417, 3717924, 4540883,
	5118361, 5301921, 4979167, 4105027, 2725204,
	985420, -879357, -2576519, -3805386, -4316122,
	-3967965, -2772550, -910853, 1284237, 3378600,
	4918468, 5523902, 4978553, 3294183, 731440,
	-2230675, -4978319, -6884321, -7446349, -6411064,
	-3855969, -204877, 3832625, 7392494, 9635125,
	9936780, 8050664, 4198358, -936188, -6317705,
	-10761140, -13185684, -12868530, -9640702, -3974823,
	3065204, 10012726, 15295833, 17583895, 16110094,
	10893000, 2799002, -6583053, -15241642, -21163671,
	-22790698, -19409646, -11383158, -154530, 11992615,
	22384784, 28533872, 28715941, 22422705, 10572525,
	-4585611, -19877670, -31851611, -37538237, -35161448,
	-24633854, -7707813, 12278124, 31031785, 44204723,
	48372136, 41880203, 25359325, 1761603, -24122660,
	-46601256, -60293649, -61370947, -48545937, -23571586,
	8902814, 42136842, 68639354, 81788695, 77395612,
	54857291, 17613243, -27256826, -70277333, -101463585,
	-112494642, -98725143, -60586317, -4019284, 60240464,
	118482133, 156662559, 163400089, 132736532, 66085166,
	-27098212, -130164932, -221605671, -278535815, -280760534,
	-214700503, -76443585, 126687932, 376420234, 645703534,
	902480880, 1114453256, 1254049394, 1302754294, 1254049394,
	1114453256, 902480880, 645703534, 376420234, 126687932,
	-76443585, -214700503, -280760534, -278535815, -221605671,
	-130164932, -27098212, 66085166, 132736532, 163400089,
	156662559, 118482133, 60240464, -4019284, -60586317,
	-98725143, -112494642, -101463585, -70277333, -27256826,
	17613243, 54857291, 77395612, 81788695, 68639354,
	42136842, 8902814, -23571586, -48545937, -61370947,
	-60293649, -46601256, -24122660, 1761603, 25359325,
	41880203, 48372136, 44204723, 31031785, 12278124,
	-7707813, -24633854, -35161448, -37538237, -31851611,
	-19877670, -4585611, 10572525, 22422705, 28715941,
	28533872, 22384784, 11992615, -154530, -11383158,
	-19409646, -22790698, -21163671, -15241642, -6583053,
	2799002, 10893000, 16110094, 17583895, 15295833,
	10012726, 3065204, -3974823, -9640702, -12868530,
	-13185684, -10761140, -6317705, -936188, 4198358,
	8050664, 9936780, 9635125, 7392494, 3832625,
	-204877, -3855969, -6411064, -7446349, -6884321,
	-4978319, -2230675, 731440, 3294183, 4978553,
	5523902, 4918468, 3378600, 1284237, -910853,
	-2772550, -3967965, -4316122, -3805386, -2576519,
	-879357, 985420, 2725204, 4105027, 4979167,
	5301921, 5118361, 4540883, 3717924, 2802417,
	1925562, 1180314, 615330, 238532, 27031,
	-59503, -128631
};

struct pdm_decim pdm_decim_int32_06_4172_5100_010_095 = {
	6, 247, 2, 4172, 5100, 10, 95, fir_int32_06_4172_5100_010_095
};

const int32_t fir_int32_04_4318_5100_010_095[195] = {
	111466, 733409, 1749250, 3319696, 5129378,
	6676209, 7309490, 6506584, 4154756, 734975,
	-2729377, -4998637, -5126868, -2945573, 726080,
	4306371, 6084832, 5022201, 1343898, -3405897,
	-6962146, -7384707, -4083477, 1706504, 7322247,
	9858386, 7634375, 1218279, -6584983, -11909667,
	-11705999, -5426216, 4387589, 13057254, 15953274,
	10914694, -336708, -12649310, -19740590, -17350504,
	-5691816, 10168034, 22423979, 24315225, 13770305,
	-5012695, -23099234, -30992981, -23541145, -3074594,
	21044646, 36602258, 34627991, 14410179, -15304906,
	-39942350, -46136506, -28837515, 5227124, 39904111,
	57125295, 46160603, 9951610, -35069112, -66221384,
	-65802058, -30833475, 23892424, 71729303, 86873627,
	57925919, -4643620, -71630929, -108312985, -91957579,
	-25024430, 63233146, 128873180, 134384678, 69003997,
	-42277605, -146972769, -188542432, -135065835, 625004,
	160544910, 263771211, 243538822, 83417905, -164654723,
	-391259178, -468017530, -299941690, 129616412, 741218294,
	1378462855, 1858765025, 2037199780, 1858765025, 1378462855,
	741218294, 129616412, -299941690, -468017530, -391259178,
	-164654723, 83417905, 243538822, 263771211, 160544910,
	625004, -135065835, -188542432, -146972769, -42277605,
	69003997, 134384678, 128873180, 63233146, -25024430,
	-91957579, -108312985, -71630929, -4643620, 57925919,
	86873627, 71729303, 23892424, -30833475, -65802058,
	-66221384, -35069112, 9951610, 46160603, 57125295,
	39904111, 5227124, -28837515, -46136506, -39942350,
	-15304906, 14410179, 34627991, 36602258, 21044646,
	-3074594, -23541145, -30992981, -23099234, -5012695,
	13770305, 24315225, 22423979, 10168034, -5691816,
	-17350504, -19740590, -12649310, -336708, 10914694,
	15953274, 13057254, 4387589, -5426216, -11705999,
	-11909667, -6584983, 1218279, 7634375, 9858386,
	7322247, 1706504, -4083477, -7384707, -6962146,
	-3405897, 1343898, 5022201, 6084832, 4306371,
	726080, -2945573, -5126868, -4998637, -2729377,
	734975, 4154756, 6506584, 7309490, 6676209,
	5129378, 3319696, 1749250, 733409, 111466
};

struct pdm_decim pdm_decim_int32_04_4318_5100_010_095 = {
	4, 195, 2, 4318, 5100, 10, 95, fir_int32_04_4318_5100_010_095
};

#endif /* __SOF_AUDIO_COEFFICIENTS_PDM_DECIM_PDM_DECIM_FIR_H__ */