// Solver released by written permission from Jacob Mattingley, for non-commercial use only
/* Produced by CVXGEN, 2018-08-30 09:21:35 -0400.  */
/* CVXGEN is Copyright (C) 2006-2017 Jacob Mattingley, jem@cvxgen.com. */
/* The code in this file is Copyright (C) 2006-2017 Jacob Mattingley. */
/* CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial */
/* applications without prior written permission from Jacob Mattingley. */

/* Filename: matrix_support.c. */
/* Description: Support functions for matrix multiplication and vector filling. */
#include "solver.h"
void multbymA(double *lhs, double *rhs)
{
  lhs[0] = -rhs[91] * (-params.B[0]) - rhs[92] * (-params.B[9]) - rhs[93] * (-params.B[18]) - rhs[124] * (1);
  lhs[1] = -rhs[91] * (-params.B[1]) - rhs[92] * (-params.B[10]) - rhs[93] * (-params.B[19]) - rhs[125] * (1);
  lhs[2] = -rhs[91] * (-params.B[2]) - rhs[92] * (-params.B[11]) - rhs[93] * (-params.B[20]) - rhs[126] * (1);
  lhs[3] = -rhs[91] * (-params.B[3]) - rhs[92] * (-params.B[12]) - rhs[93] * (-params.B[21]) - rhs[127] * (1);
  lhs[4] = -rhs[91] * (-params.B[4]) - rhs[92] * (-params.B[13]) - rhs[93] * (-params.B[22]) - rhs[128] * (1);
  lhs[5] = -rhs[91] * (-params.B[5]) - rhs[92] * (-params.B[14]) - rhs[93] * (-params.B[23]) - rhs[129] * (1);
  lhs[6] = -rhs[91] * (-params.B[6]) - rhs[92] * (-params.B[15]) - rhs[93] * (-params.B[24]) - rhs[130] * (1);
  lhs[7] = -rhs[91] * (-params.B[7]) - rhs[92] * (-params.B[16]) - rhs[93] * (-params.B[25]) - rhs[131] * (1);
  lhs[8] = -rhs[91] * (-params.B[8]) - rhs[92] * (-params.B[17]) - rhs[93] * (-params.B[26]) - rhs[132] * (1);
  lhs[9] = -rhs[94] * (-params.B[0]) - rhs[95] * (-params.B[9]) - rhs[96] * (-params.B[18]) -
           rhs[124] * (-params.A[0]) - rhs[125] * (-params.A[9]) - rhs[126] * (-params.A[18]) -
           rhs[127] * (-params.A[27]) - rhs[128] * (-params.A[36]) - rhs[129] * (-params.A[45]) -
           rhs[130] * (-params.A[54]) - rhs[131] * (-params.A[63]) - rhs[132] * (-params.A[72]) - rhs[133] * (1);
  lhs[10] = -rhs[94] * (-params.B[1]) - rhs[95] * (-params.B[10]) - rhs[96] * (-params.B[19]) -
            rhs[124] * (-params.A[1]) - rhs[125] * (-params.A[10]) - rhs[126] * (-params.A[19]) -
            rhs[127] * (-params.A[28]) - rhs[128] * (-params.A[37]) - rhs[129] * (-params.A[46]) -
            rhs[130] * (-params.A[55]) - rhs[131] * (-params.A[64]) - rhs[132] * (-params.A[73]) - rhs[134] * (1);
  lhs[11] = -rhs[94] * (-params.B[2]) - rhs[95] * (-params.B[11]) - rhs[96] * (-params.B[20]) -
            rhs[124] * (-params.A[2]) - rhs[125] * (-params.A[11]) - rhs[126] * (-params.A[20]) -
            rhs[127] * (-params.A[29]) - rhs[128] * (-params.A[38]) - rhs[129] * (-params.A[47]) -
            rhs[130] * (-params.A[56]) - rhs[131] * (-params.A[65]) - rhs[132] * (-params.A[74]) - rhs[135] * (1);
  lhs[12] = -rhs[94] * (-params.B[3]) - rhs[95] * (-params.B[12]) - rhs[96] * (-params.B[21]) -
            rhs[124] * (-params.A[3]) - rhs[125] * (-params.A[12]) - rhs[126] * (-params.A[21]) -
            rhs[127] * (-params.A[30]) - rhs[128] * (-params.A[39]) - rhs[129] * (-params.A[48]) -
            rhs[130] * (-params.A[57]) - rhs[131] * (-params.A[66]) - rhs[132] * (-params.A[75]) - rhs[136] * (1);
  lhs[13] = -rhs[94] * (-params.B[4]) - rhs[95] * (-params.B[13]) - rhs[96] * (-params.B[22]) -
            rhs[124] * (-params.A[4]) - rhs[125] * (-params.A[13]) - rhs[126] * (-params.A[22]) -
            rhs[127] * (-params.A[31]) - rhs[128] * (-params.A[40]) - rhs[129] * (-params.A[49]) -
            rhs[130] * (-params.A[58]) - rhs[131] * (-params.A[67]) - rhs[132] * (-params.A[76]) - rhs[137] * (1);
  lhs[14] = -rhs[94] * (-params.B[5]) - rhs[95] * (-params.B[14]) - rhs[96] * (-params.B[23]) -
            rhs[124] * (-params.A[5]) - rhs[125] * (-params.A[14]) - rhs[126] * (-params.A[23]) -
            rhs[127] * (-params.A[32]) - rhs[128] * (-params.A[41]) - rhs[129] * (-params.A[50]) -
            rhs[130] * (-params.A[59]) - rhs[131] * (-params.A[68]) - rhs[132] * (-params.A[77]) - rhs[138] * (1);
  lhs[15] = -rhs[94] * (-params.B[6]) - rhs[95] * (-params.B[15]) - rhs[96] * (-params.B[24]) -
            rhs[124] * (-params.A[6]) - rhs[125] * (-params.A[15]) - rhs[126] * (-params.A[24]) -
            rhs[127] * (-params.A[33]) - rhs[128] * (-params.A[42]) - rhs[129] * (-params.A[51]) -
            rhs[130] * (-params.A[60]) - rhs[131] * (-params.A[69]) - rhs[132] * (-params.A[78]) - rhs[139] * (1);
  lhs[16] = -rhs[94] * (-params.B[7]) - rhs[95] * (-params.B[16]) - rhs[96] * (-params.B[25]) -
            rhs[124] * (-params.A[7]) - rhs[125] * (-params.A[16]) - rhs[126] * (-params.A[25]) -
            rhs[127] * (-params.A[34]) - rhs[128] * (-params.A[43]) - rhs[129] * (-params.A[52]) -
            rhs[130] * (-params.A[61]) - rhs[131] * (-params.A[70]) - rhs[132] * (-params.A[79]) - rhs[140] * (1);
  lhs[17] = -rhs[94] * (-params.B[8]) - rhs[95] * (-params.B[17]) - rhs[96] * (-params.B[26]) -
            rhs[124] * (-params.A[8]) - rhs[125] * (-params.A[17]) - rhs[126] * (-params.A[26]) -
            rhs[127] * (-params.A[35]) - rhs[128] * (-params.A[44]) - rhs[129] * (-params.A[53]) -
            rhs[130] * (-params.A[62]) - rhs[131] * (-params.A[71]) - rhs[132] * (-params.A[80]) - rhs[141] * (1);
  lhs[18] = -rhs[97] * (-params.B[0]) - rhs[98] * (-params.B[9]) - rhs[99] * (-params.B[18]) -
            rhs[133] * (-params.A[0]) - rhs[134] * (-params.A[9]) - rhs[135] * (-params.A[18]) -
            rhs[136] * (-params.A[27]) - rhs[137] * (-params.A[36]) - rhs[138] * (-params.A[45]) -
            rhs[139] * (-params.A[54]) - rhs[140] * (-params.A[63]) - rhs[141] * (-params.A[72]) - rhs[142] * (1);
  lhs[19] = -rhs[97] * (-params.B[1]) - rhs[98] * (-params.B[10]) - rhs[99] * (-params.B[19]) -
            rhs[133] * (-params.A[1]) - rhs[134] * (-params.A[10]) - rhs[135] * (-params.A[19]) -
            rhs[136] * (-params.A[28]) - rhs[137] * (-params.A[37]) - rhs[138] * (-params.A[46]) -
            rhs[139] * (-params.A[55]) - rhs[140] * (-params.A[64]) - rhs[141] * (-params.A[73]) - rhs[143] * (1);
  lhs[20] = -rhs[97] * (-params.B[2]) - rhs[98] * (-params.B[11]) - rhs[99] * (-params.B[20]) -
            rhs[133] * (-params.A[2]) - rhs[134] * (-params.A[11]) - rhs[135] * (-params.A[20]) -
            rhs[136] * (-params.A[29]) - rhs[137] * (-params.A[38]) - rhs[138] * (-params.A[47]) -
            rhs[139] * (-params.A[56]) - rhs[140] * (-params.A[65]) - rhs[141] * (-params.A[74]) - rhs[144] * (1);
  lhs[21] = -rhs[97] * (-params.B[3]) - rhs[98] * (-params.B[12]) - rhs[99] * (-params.B[21]) -
            rhs[133] * (-params.A[3]) - rhs[134] * (-params.A[12]) - rhs[135] * (-params.A[21]) -
            rhs[136] * (-params.A[30]) - rhs[137] * (-params.A[39]) - rhs[138] * (-params.A[48]) -
            rhs[139] * (-params.A[57]) - rhs[140] * (-params.A[66]) - rhs[141] * (-params.A[75]) - rhs[145] * (1);
  lhs[22] = -rhs[97] * (-params.B[4]) - rhs[98] * (-params.B[13]) - rhs[99] * (-params.B[22]) -
            rhs[133] * (-params.A[4]) - rhs[134] * (-params.A[13]) - rhs[135] * (-params.A[22]) -
            rhs[136] * (-params.A[31]) - rhs[137] * (-params.A[40]) - rhs[138] * (-params.A[49]) -
            rhs[139] * (-params.A[58]) - rhs[140] * (-params.A[67]) - rhs[141] * (-params.A[76]) - rhs[146] * (1);
  lhs[23] = -rhs[97] * (-params.B[5]) - rhs[98] * (-params.B[14]) - rhs[99] * (-params.B[23]) -
            rhs[133] * (-params.A[5]) - rhs[134] * (-params.A[14]) - rhs[135] * (-params.A[23]) -
            rhs[136] * (-params.A[32]) - rhs[137] * (-params.A[41]) - rhs[138] * (-params.A[50]) -
            rhs[139] * (-params.A[59]) - rhs[140] * (-params.A[68]) - rhs[141] * (-params.A[77]) - rhs[147] * (1);
  lhs[24] = -rhs[97] * (-params.B[6]) - rhs[98] * (-params.B[15]) - rhs[99] * (-params.B[24]) -
            rhs[133] * (-params.A[6]) - rhs[134] * (-params.A[15]) - rhs[135] * (-params.A[24]) -
            rhs[136] * (-params.A[33]) - rhs[137] * (-params.A[42]) - rhs[138] * (-params.A[51]) -
            rhs[139] * (-params.A[60]) - rhs[140] * (-params.A[69]) - rhs[141] * (-params.A[78]) - rhs[148] * (1);
  lhs[25] = -rhs[97] * (-params.B[7]) - rhs[98] * (-params.B[16]) - rhs[99] * (-params.B[25]) -
            rhs[133] * (-params.A[7]) - rhs[134] * (-params.A[16]) - rhs[135] * (-params.A[25]) -
            rhs[136] * (-params.A[34]) - rhs[137] * (-params.A[43]) - rhs[138] * (-params.A[52]) -
            rhs[139] * (-params.A[61]) - rhs[140] * (-params.A[70]) - rhs[141] * (-params.A[79]) - rhs[149] * (1);
  lhs[26] = -rhs[97] * (-params.B[8]) - rhs[98] * (-params.B[17]) - rhs[99] * (-params.B[26]) -
            rhs[133] * (-params.A[8]) - rhs[134] * (-params.A[17]) - rhs[135] * (-params.A[26]) -
            rhs[136] * (-params.A[35]) - rhs[137] * (-params.A[44]) - rhs[138] * (-params.A[53]) -
            rhs[139] * (-params.A[62]) - rhs[140] * (-params.A[71]) - rhs[141] * (-params.A[80]) - rhs[150] * (1);
  lhs[27] = -rhs[100] * (-params.B[0]) - rhs[101] * (-params.B[9]) - rhs[102] * (-params.B[18]) -
            rhs[142] * (-params.A[0]) - rhs[143] * (-params.A[9]) - rhs[144] * (-params.A[18]) -
            rhs[145] * (-params.A[27]) - rhs[146] * (-params.A[36]) - rhs[147] * (-params.A[45]) -
            rhs[148] * (-params.A[54]) - rhs[149] * (-params.A[63]) - rhs[150] * (-params.A[72]) - rhs[151] * (1);
  lhs[28] = -rhs[100] * (-params.B[1]) - rhs[101] * (-params.B[10]) - rhs[102] * (-params.B[19]) -
            rhs[142] * (-params.A[1]) - rhs[143] * (-params.A[10]) - rhs[144] * (-params.A[19]) -
            rhs[145] * (-params.A[28]) - rhs[146] * (-params.A[37]) - rhs[147] * (-params.A[46]) -
            rhs[148] * (-params.A[55]) - rhs[149] * (-params.A[64]) - rhs[150] * (-params.A[73]) - rhs[152] * (1);
  lhs[29] = -rhs[100] * (-params.B[2]) - rhs[101] * (-params.B[11]) - rhs[102] * (-params.B[20]) -
            rhs[142] * (-params.A[2]) - rhs[143] * (-params.A[11]) - rhs[144] * (-params.A[20]) -
            rhs[145] * (-params.A[29]) - rhs[146] * (-params.A[38]) - rhs[147] * (-params.A[47]) -
            rhs[148] * (-params.A[56]) - rhs[149] * (-params.A[65]) - rhs[150] * (-params.A[74]) - rhs[153] * (1);
  lhs[30] = -rhs[100] * (-params.B[3]) - rhs[101] * (-params.B[12]) - rhs[102] * (-params.B[21]) -
            rhs[142] * (-params.A[3]) - rhs[143] * (-params.A[12]) - rhs[144] * (-params.A[21]) -
            rhs[145] * (-params.A[30]) - rhs[146] * (-params.A[39]) - rhs[147] * (-params.A[48]) -
            rhs[148] * (-params.A[57]) - rhs[149] * (-params.A[66]) - rhs[150] * (-params.A[75]) - rhs[154] * (1);
  lhs[31] = -rhs[100] * (-params.B[4]) - rhs[101] * (-params.B[13]) - rhs[102] * (-params.B[22]) -
            rhs[142] * (-params.A[4]) - rhs[143] * (-params.A[13]) - rhs[144] * (-params.A[22]) -
            rhs[145] * (-params.A[31]) - rhs[146] * (-params.A[40]) - rhs[147] * (-params.A[49]) -
            rhs[148] * (-params.A[58]) - rhs[149] * (-params.A[67]) - rhs[150] * (-params.A[76]) - rhs[155] * (1);
  lhs[32] = -rhs[100] * (-params.B[5]) - rhs[101] * (-params.B[14]) - rhs[102] * (-params.B[23]) -
            rhs[142] * (-params.A[5]) - rhs[143] * (-params.A[14]) - rhs[144] * (-params.A[23]) -
            rhs[145] * (-params.A[32]) - rhs[146] * (-params.A[41]) - rhs[147] * (-params.A[50]) -
            rhs[148] * (-params.A[59]) - rhs[149] * (-params.A[68]) - rhs[150] * (-params.A[77]) - rhs[156] * (1);
  lhs[33] = -rhs[100] * (-params.B[6]) - rhs[101] * (-params.B[15]) - rhs[102] * (-params.B[24]) -
            rhs[142] * (-params.A[6]) - rhs[143] * (-params.A[15]) - rhs[144] * (-params.A[24]) -
            rhs[145] * (-params.A[33]) - rhs[146] * (-params.A[42]) - rhs[147] * (-params.A[51]) -
            rhs[148] * (-params.A[60]) - rhs[149] * (-params.A[69]) - rhs[150] * (-params.A[78]) - rhs[157] * (1);
  lhs[34] = -rhs[100] * (-params.B[7]) - rhs[101] * (-params.B[16]) - rhs[102] * (-params.B[25]) -
            rhs[142] * (-params.A[7]) - rhs[143] * (-params.A[16]) - rhs[144] * (-params.A[25]) -
            rhs[145] * (-params.A[34]) - rhs[146] * (-params.A[43]) - rhs[147] * (-params.A[52]) -
            rhs[148] * (-params.A[61]) - rhs[149] * (-params.A[70]) - rhs[150] * (-params.A[79]) - rhs[158] * (1);
  lhs[35] = -rhs[100] * (-params.B[8]) - rhs[101] * (-params.B[17]) - rhs[102] * (-params.B[26]) -
            rhs[142] * (-params.A[8]) - rhs[143] * (-params.A[17]) - rhs[144] * (-params.A[26]) -
            rhs[145] * (-params.A[35]) - rhs[146] * (-params.A[44]) - rhs[147] * (-params.A[53]) -
            rhs[148] * (-params.A[62]) - rhs[149] * (-params.A[71]) - rhs[150] * (-params.A[80]) - rhs[159] * (1);
  lhs[36] = -rhs[103] * (-params.B[0]) - rhs[104] * (-params.B[9]) - rhs[105] * (-params.B[18]) -
            rhs[151] * (-params.A[0]) - rhs[152] * (-params.A[9]) - rhs[153] * (-params.A[18]) -
            rhs[154] * (-params.A[27]) - rhs[155] * (-params.A[36]) - rhs[156] * (-params.A[45]) -
            rhs[157] * (-params.A[54]) - rhs[158] * (-params.A[63]) - rhs[159] * (-params.A[72]) - rhs[160] * (1);
  lhs[37] = -rhs[103] * (-params.B[1]) - rhs[104] * (-params.B[10]) - rhs[105] * (-params.B[19]) -
            rhs[151] * (-params.A[1]) - rhs[152] * (-params.A[10]) - rhs[153] * (-params.A[19]) -
            rhs[154] * (-params.A[28]) - rhs[155] * (-params.A[37]) - rhs[156] * (-params.A[46]) -
            rhs[157] * (-params.A[55]) - rhs[158] * (-params.A[64]) - rhs[159] * (-params.A[73]) - rhs[161] * (1);
  lhs[38] = -rhs[103] * (-params.B[2]) - rhs[104] * (-params.B[11]) - rhs[105] * (-params.B[20]) -
            rhs[151] * (-params.A[2]) - rhs[152] * (-params.A[11]) - rhs[153] * (-params.A[20]) -
            rhs[154] * (-params.A[29]) - rhs[155] * (-params.A[38]) - rhs[156] * (-params.A[47]) -
            rhs[157] * (-params.A[56]) - rhs[158] * (-params.A[65]) - rhs[159] * (-params.A[74]) - rhs[162] * (1);
  lhs[39] = -rhs[103] * (-params.B[3]) - rhs[104] * (-params.B[12]) - rhs[105] * (-params.B[21]) -
            rhs[151] * (-params.A[3]) - rhs[152] * (-params.A[12]) - rhs[153] * (-params.A[21]) -
            rhs[154] * (-params.A[30]) - rhs[155] * (-params.A[39]) - rhs[156] * (-params.A[48]) -
            rhs[157] * (-params.A[57]) - rhs[158] * (-params.A[66]) - rhs[159] * (-params.A[75]) - rhs[163] * (1);
  lhs[40] = -rhs[103] * (-params.B[4]) - rhs[104] * (-params.B[13]) - rhs[105] * (-params.B[22]) -
            rhs[151] * (-params.A[4]) - rhs[152] * (-params.A[13]) - rhs[153] * (-params.A[22]) -
            rhs[154] * (-params.A[31]) - rhs[155] * (-params.A[40]) - rhs[156] * (-params.A[49]) -
            rhs[157] * (-params.A[58]) - rhs[158] * (-params.A[67]) - rhs[159] * (-params.A[76]) - rhs[164] * (1);
  lhs[41] = -rhs[103] * (-params.B[5]) - rhs[104] * (-params.B[14]) - rhs[105] * (-params.B[23]) -
            rhs[151] * (-params.A[5]) - rhs[152] * (-params.A[14]) - rhs[153] * (-params.A[23]) -
            rhs[154] * (-params.A[32]) - rhs[155] * (-params.A[41]) - rhs[156] * (-params.A[50]) -
            rhs[157] * (-params.A[59]) - rhs[158] * (-params.A[68]) - rhs[159] * (-params.A[77]) - rhs[165] * (1);
  lhs[42] = -rhs[103] * (-params.B[6]) - rhs[104] * (-params.B[15]) - rhs[105] * (-params.B[24]) -
            rhs[151] * (-params.A[6]) - rhs[152] * (-params.A[15]) - rhs[153] * (-params.A[24]) -
            rhs[154] * (-params.A[33]) - rhs[155] * (-params.A[42]) - rhs[156] * (-params.A[51]) -
            rhs[157] * (-params.A[60]) - rhs[158] * (-params.A[69]) - rhs[159] * (-params.A[78]) - rhs[166] * (1);
  lhs[43] = -rhs[103] * (-params.B[7]) - rhs[104] * (-params.B[16]) - rhs[105] * (-params.B[25]) -
            rhs[151] * (-params.A[7]) - rhs[152] * (-params.A[16]) - rhs[153] * (-params.A[25]) -
            rhs[154] * (-params.A[34]) - rhs[155] * (-params.A[43]) - rhs[156] * (-params.A[52]) -
            rhs[157] * (-params.A[61]) - rhs[158] * (-params.A[70]) - rhs[159] * (-params.A[79]) - rhs[167] * (1);
  lhs[44] = -rhs[103] * (-params.B[8]) - rhs[104] * (-params.B[17]) - rhs[105] * (-params.B[26]) -
            rhs[151] * (-params.A[8]) - rhs[152] * (-params.A[17]) - rhs[153] * (-params.A[26]) -
            rhs[154] * (-params.A[35]) - rhs[155] * (-params.A[44]) - rhs[156] * (-params.A[53]) -
            rhs[157] * (-params.A[62]) - rhs[158] * (-params.A[71]) - rhs[159] * (-params.A[80]) - rhs[168] * (1);
  lhs[45] = -rhs[106] * (-params.B[0]) - rhs[107] * (-params.B[9]) - rhs[108] * (-params.B[18]) -
            rhs[160] * (-params.A[0]) - rhs[161] * (-params.A[9]) - rhs[162] * (-params.A[18]) -
            rhs[163] * (-params.A[27]) - rhs[164] * (-params.A[36]) - rhs[165] * (-params.A[45]) -
            rhs[166] * (-params.A[54]) - rhs[167] * (-params.A[63]) - rhs[168] * (-params.A[72]) - rhs[169] * (1);
  lhs[46] = -rhs[106] * (-params.B[1]) - rhs[107] * (-params.B[10]) - rhs[108] * (-params.B[19]) -
            rhs[160] * (-params.A[1]) - rhs[161] * (-params.A[10]) - rhs[162] * (-params.A[19]) -
            rhs[163] * (-params.A[28]) - rhs[164] * (-params.A[37]) - rhs[165] * (-params.A[46]) -
            rhs[166] * (-params.A[55]) - rhs[167] * (-params.A[64]) - rhs[168] * (-params.A[73]) - rhs[170] * (1);
  lhs[47] = -rhs[106] * (-params.B[2]) - rhs[107] * (-params.B[11]) - rhs[108] * (-params.B[20]) -
            rhs[160] * (-params.A[2]) - rhs[161] * (-params.A[11]) - rhs[162] * (-params.A[20]) -
            rhs[163] * (-params.A[29]) - rhs[164] * (-params.A[38]) - rhs[165] * (-params.A[47]) -
            rhs[166] * (-params.A[56]) - rhs[167] * (-params.A[65]) - rhs[168] * (-params.A[74]) - rhs[171] * (1);
  lhs[48] = -rhs[106] * (-params.B[3]) - rhs[107] * (-params.B[12]) - rhs[108] * (-params.B[21]) -
            rhs[160] * (-params.A[3]) - rhs[161] * (-params.A[12]) - rhs[162] * (-params.A[21]) -
            rhs[163] * (-params.A[30]) - rhs[164] * (-params.A[39]) - rhs[165] * (-params.A[48]) -
            rhs[166] * (-params.A[57]) - rhs[167] * (-params.A[66]) - rhs[168] * (-params.A[75]) - rhs[172] * (1);
  lhs[49] = -rhs[106] * (-params.B[4]) - rhs[107] * (-params.B[13]) - rhs[108] * (-params.B[22]) -
            rhs[160] * (-params.A[4]) - rhs[161] * (-params.A[13]) - rhs[162] * (-params.A[22]) -
            rhs[163] * (-params.A[31]) - rhs[164] * (-params.A[40]) - rhs[165] * (-params.A[49]) -
            rhs[166] * (-params.A[58]) - rhs[167] * (-params.A[67]) - rhs[168] * (-params.A[76]) - rhs[173] * (1);
  lhs[50] = -rhs[106] * (-params.B[5]) - rhs[107] * (-params.B[14]) - rhs[108] * (-params.B[23]) -
            rhs[160] * (-params.A[5]) - rhs[161] * (-params.A[14]) - rhs[162] * (-params.A[23]) -
            rhs[163] * (-params.A[32]) - rhs[164] * (-params.A[41]) - rhs[165] * (-params.A[50]) -
            rhs[166] * (-params.A[59]) - rhs[167] * (-params.A[68]) - rhs[168] * (-params.A[77]) - rhs[174] * (1);
  lhs[51] = -rhs[106] * (-params.B[6]) - rhs[107] * (-params.B[15]) - rhs[108] * (-params.B[24]) -
            rhs[160] * (-params.A[6]) - rhs[161] * (-params.A[15]) - rhs[162] * (-params.A[24]) -
            rhs[163] * (-params.A[33]) - rhs[164] * (-params.A[42]) - rhs[165] * (-params.A[51]) -
            rhs[166] * (-params.A[60]) - rhs[167] * (-params.A[69]) - rhs[168] * (-params.A[78]) - rhs[175] * (1);
  lhs[52] = -rhs[106] * (-params.B[7]) - rhs[107] * (-params.B[16]) - rhs[108] * (-params.B[25]) -
            rhs[160] * (-params.A[7]) - rhs[161] * (-params.A[16]) - rhs[162] * (-params.A[25]) -
            rhs[163] * (-params.A[34]) - rhs[164] * (-params.A[43]) - rhs[165] * (-params.A[52]) -
            rhs[166] * (-params.A[61]) - rhs[167] * (-params.A[70]) - rhs[168] * (-params.A[79]) - rhs[176] * (1);
  lhs[53] = -rhs[106] * (-params.B[8]) - rhs[107] * (-params.B[17]) - rhs[108] * (-params.B[26]) -
            rhs[160] * (-params.A[8]) - rhs[161] * (-params.A[17]) - rhs[162] * (-params.A[26]) -
            rhs[163] * (-params.A[35]) - rhs[164] * (-params.A[44]) - rhs[165] * (-params.A[53]) -
            rhs[166] * (-params.A[62]) - rhs[167] * (-params.A[71]) - rhs[168] * (-params.A[80]) - rhs[177] * (1);
  lhs[54] = -rhs[109] * (-params.B[0]) - rhs[110] * (-params.B[9]) - rhs[111] * (-params.B[18]) -
            rhs[169] * (-params.A[0]) - rhs[170] * (-params.A[9]) - rhs[171] * (-params.A[18]) -
            rhs[172] * (-params.A[27]) - rhs[173] * (-params.A[36]) - rhs[174] * (-params.A[45]) -
            rhs[175] * (-params.A[54]) - rhs[176] * (-params.A[63]) - rhs[177] * (-params.A[72]) - rhs[178] * (1);
  lhs[55] = -rhs[109] * (-params.B[1]) - rhs[110] * (-params.B[10]) - rhs[111] * (-params.B[19]) -
            rhs[169] * (-params.A[1]) - rhs[170] * (-params.A[10]) - rhs[171] * (-params.A[19]) -
            rhs[172] * (-params.A[28]) - rhs[173] * (-params.A[37]) - rhs[174] * (-params.A[46]) -
            rhs[175] * (-params.A[55]) - rhs[176] * (-params.A[64]) - rhs[177] * (-params.A[73]) - rhs[179] * (1);
  lhs[56] = -rhs[109] * (-params.B[2]) - rhs[110] * (-params.B[11]) - rhs[111] * (-params.B[20]) -
            rhs[169] * (-params.A[2]) - rhs[170] * (-params.A[11]) - rhs[171] * (-params.A[20]) -
            rhs[172] * (-params.A[29]) - rhs[173] * (-params.A[38]) - rhs[174] * (-params.A[47]) -
            rhs[175] * (-params.A[56]) - rhs[176] * (-params.A[65]) - rhs[177] * (-params.A[74]) - rhs[180] * (1);
  lhs[57] = -rhs[109] * (-params.B[3]) - rhs[110] * (-params.B[12]) - rhs[111] * (-params.B[21]) -
            rhs[169] * (-params.A[3]) - rhs[170] * (-params.A[12]) - rhs[171] * (-params.A[21]) -
            rhs[172] * (-params.A[30]) - rhs[173] * (-params.A[39]) - rhs[174] * (-params.A[48]) -
            rhs[175] * (-params.A[57]) - rhs[176] * (-params.A[66]) - rhs[177] * (-params.A[75]) - rhs[181] * (1);
  lhs[58] = -rhs[109] * (-params.B[4]) - rhs[110] * (-params.B[13]) - rhs[111] * (-params.B[22]) -
            rhs[169] * (-params.A[4]) - rhs[170] * (-params.A[13]) - rhs[171] * (-params.A[22]) -
            rhs[172] * (-params.A[31]) - rhs[173] * (-params.A[40]) - rhs[174] * (-params.A[49]) -
            rhs[175] * (-params.A[58]) - rhs[176] * (-params.A[67]) - rhs[177] * (-params.A[76]) - rhs[182] * (1);
  lhs[59] = -rhs[109] * (-params.B[5]) - rhs[110] * (-params.B[14]) - rhs[111] * (-params.B[23]) -
            rhs[169] * (-params.A[5]) - rhs[170] * (-params.A[14]) - rhs[171] * (-params.A[23]) -
            rhs[172] * (-params.A[32]) - rhs[173] * (-params.A[41]) - rhs[174] * (-params.A[50]) -
            rhs[175] * (-params.A[59]) - rhs[176] * (-params.A[68]) - rhs[177] * (-params.A[77]) - rhs[183] * (1);
  lhs[60] = -rhs[109] * (-params.B[6]) - rhs[110] * (-params.B[15]) - rhs[111] * (-params.B[24]) -
            rhs[169] * (-params.A[6]) - rhs[170] * (-params.A[15]) - rhs[171] * (-params.A[24]) -
            rhs[172] * (-params.A[33]) - rhs[173] * (-params.A[42]) - rhs[174] * (-params.A[51]) -
            rhs[175] * (-params.A[60]) - rhs[176] * (-params.A[69]) - rhs[177] * (-params.A[78]) - rhs[184] * (1);
  lhs[61] = -rhs[109] * (-params.B[7]) - rhs[110] * (-params.B[16]) - rhs[111] * (-params.B[25]) -
            rhs[169] * (-params.A[7]) - rhs[170] * (-params.A[16]) - rhs[171] * (-params.A[25]) -
            rhs[172] * (-params.A[34]) - rhs[173] * (-params.A[43]) - rhs[174] * (-params.A[52]) -
            rhs[175] * (-params.A[61]) - rhs[176] * (-params.A[70]) - rhs[177] * (-params.A[79]) - rhs[185] * (1);
  lhs[62] = -rhs[109] * (-params.B[8]) - rhs[110] * (-params.B[17]) - rhs[111] * (-params.B[26]) -
            rhs[169] * (-params.A[8]) - rhs[170] * (-params.A[17]) - rhs[171] * (-params.A[26]) -
            rhs[172] * (-params.A[35]) - rhs[173] * (-params.A[44]) - rhs[174] * (-params.A[53]) -
            rhs[175] * (-params.A[62]) - rhs[176] * (-params.A[71]) - rhs[177] * (-params.A[80]) - rhs[186] * (1);
  lhs[63] = -rhs[112] * (-params.B[0]) - rhs[113] * (-params.B[9]) - rhs[114] * (-params.B[18]) -
            rhs[178] * (-params.A[0]) - rhs[179] * (-params.A[9]) - rhs[180] * (-params.A[18]) -
            rhs[181] * (-params.A[27]) - rhs[182] * (-params.A[36]) - rhs[183] * (-params.A[45]) -
            rhs[184] * (-params.A[54]) - rhs[185] * (-params.A[63]) - rhs[186] * (-params.A[72]) - rhs[187] * (1);
  lhs[64] = -rhs[112] * (-params.B[1]) - rhs[113] * (-params.B[10]) - rhs[114] * (-params.B[19]) -
            rhs[178] * (-params.A[1]) - rhs[179] * (-params.A[10]) - rhs[180] * (-params.A[19]) -
            rhs[181] * (-params.A[28]) - rhs[182] * (-params.A[37]) - rhs[183] * (-params.A[46]) -
            rhs[184] * (-params.A[55]) - rhs[185] * (-params.A[64]) - rhs[186] * (-params.A[73]) - rhs[188] * (1);
  lhs[65] = -rhs[112] * (-params.B[2]) - rhs[113] * (-params.B[11]) - rhs[114] * (-params.B[20]) -
            rhs[178] * (-params.A[2]) - rhs[179] * (-params.A[11]) - rhs[180] * (-params.A[20]) -
            rhs[181] * (-params.A[29]) - rhs[182] * (-params.A[38]) - rhs[183] * (-params.A[47]) -
            rhs[184] * (-params.A[56]) - rhs[185] * (-params.A[65]) - rhs[186] * (-params.A[74]) - rhs[189] * (1);
  lhs[66] = -rhs[112] * (-params.B[3]) - rhs[113] * (-params.B[12]) - rhs[114] * (-params.B[21]) -
            rhs[178] * (-params.A[3]) - rhs[179] * (-params.A[12]) - rhs[180] * (-params.A[21]) -
            rhs[181] * (-params.A[30]) - rhs[182] * (-params.A[39]) - rhs[183] * (-params.A[48]) -
            rhs[184] * (-params.A[57]) - rhs[185] * (-params.A[66]) - rhs[186] * (-params.A[75]) - rhs[190] * (1);
  lhs[67] = -rhs[112] * (-params.B[4]) - rhs[113] * (-params.B[13]) - rhs[114] * (-params.B[22]) -
            rhs[178] * (-params.A[4]) - rhs[179] * (-params.A[13]) - rhs[180] * (-params.A[22]) -
            rhs[181] * (-params.A[31]) - rhs[182] * (-params.A[40]) - rhs[183] * (-params.A[49]) -
            rhs[184] * (-params.A[58]) - rhs[185] * (-params.A[67]) - rhs[186] * (-params.A[76]) - rhs[191] * (1);
  lhs[68] = -rhs[112] * (-params.B[5]) - rhs[113] * (-params.B[14]) - rhs[114] * (-params.B[23]) -
            rhs[178] * (-params.A[5]) - rhs[179] * (-params.A[14]) - rhs[180] * (-params.A[23]) -
            rhs[181] * (-params.A[32]) - rhs[182] * (-params.A[41]) - rhs[183] * (-params.A[50]) -
            rhs[184] * (-params.A[59]) - rhs[185] * (-params.A[68]) - rhs[186] * (-params.A[77]) - rhs[192] * (1);
  lhs[69] = -rhs[112] * (-params.B[6]) - rhs[113] * (-params.B[15]) - rhs[114] * (-params.B[24]) -
            rhs[178] * (-params.A[6]) - rhs[179] * (-params.A[15]) - rhs[180] * (-params.A[24]) -
            rhs[181] * (-params.A[33]) - rhs[182] * (-params.A[42]) - rhs[183] * (-params.A[51]) -
            rhs[184] * (-params.A[60]) - rhs[185] * (-params.A[69]) - rhs[186] * (-params.A[78]) - rhs[193] * (1);
  lhs[70] = -rhs[112] * (-params.B[7]) - rhs[113] * (-params.B[16]) - rhs[114] * (-params.B[25]) -
            rhs[178] * (-params.A[7]) - rhs[179] * (-params.A[16]) - rhs[180] * (-params.A[25]) -
            rhs[181] * (-params.A[34]) - rhs[182] * (-params.A[43]) - rhs[183] * (-params.A[52]) -
            rhs[184] * (-params.A[61]) - rhs[185] * (-params.A[70]) - rhs[186] * (-params.A[79]) - rhs[194] * (1);
  lhs[71] = -rhs[112] * (-params.B[8]) - rhs[113] * (-params.B[17]) - rhs[114] * (-params.B[26]) -
            rhs[178] * (-params.A[8]) - rhs[179] * (-params.A[17]) - rhs[180] * (-params.A[26]) -
            rhs[181] * (-params.A[35]) - rhs[182] * (-params.A[44]) - rhs[183] * (-params.A[53]) -
            rhs[184] * (-params.A[62]) - rhs[185] * (-params.A[71]) - rhs[186] * (-params.A[80]) - rhs[195] * (1);
  lhs[72] = -rhs[115] * (-params.B[0]) - rhs[116] * (-params.B[9]) - rhs[117] * (-params.B[18]) -
            rhs[187] * (-params.A[0]) - rhs[188] * (-params.A[9]) - rhs[189] * (-params.A[18]) -
            rhs[190] * (-params.A[27]) - rhs[191] * (-params.A[36]) - rhs[192] * (-params.A[45]) -
            rhs[193] * (-params.A[54]) - rhs[194] * (-params.A[63]) - rhs[195] * (-params.A[72]) - rhs[196] * (1);
  lhs[73] = -rhs[115] * (-params.B[1]) - rhs[116] * (-params.B[10]) - rhs[117] * (-params.B[19]) -
            rhs[187] * (-params.A[1]) - rhs[188] * (-params.A[10]) - rhs[189] * (-params.A[19]) -
            rhs[190] * (-params.A[28]) - rhs[191] * (-params.A[37]) - rhs[192] * (-params.A[46]) -
            rhs[193] * (-params.A[55]) - rhs[194] * (-params.A[64]) - rhs[195] * (-params.A[73]) - rhs[197] * (1);
  lhs[74] = -rhs[115] * (-params.B[2]) - rhs[116] * (-params.B[11]) - rhs[117] * (-params.B[20]) -
            rhs[187] * (-params.A[2]) - rhs[188] * (-params.A[11]) - rhs[189] * (-params.A[20]) -
            rhs[190] * (-params.A[29]) - rhs[191] * (-params.A[38]) - rhs[192] * (-params.A[47]) -
            rhs[193] * (-params.A[56]) - rhs[194] * (-params.A[65]) - rhs[195] * (-params.A[74]) - rhs[198] * (1);
  lhs[75] = -rhs[115] * (-params.B[3]) - rhs[116] * (-params.B[12]) - rhs[117] * (-params.B[21]) -
            rhs[187] * (-params.A[3]) - rhs[188] * (-params.A[12]) - rhs[189] * (-params.A[21]) -
            rhs[190] * (-params.A[30]) - rhs[191] * (-params.A[39]) - rhs[192] * (-params.A[48]) -
            rhs[193] * (-params.A[57]) - rhs[194] * (-params.A[66]) - rhs[195] * (-params.A[75]) - rhs[199] * (1);
  lhs[76] = -rhs[115] * (-params.B[4]) - rhs[116] * (-params.B[13]) - rhs[117] * (-params.B[22]) -
            rhs[187] * (-params.A[4]) - rhs[188] * (-params.A[13]) - rhs[189] * (-params.A[22]) -
            rhs[190] * (-params.A[31]) - rhs[191] * (-params.A[40]) - rhs[192] * (-params.A[49]) -
            rhs[193] * (-params.A[58]) - rhs[194] * (-params.A[67]) - rhs[195] * (-params.A[76]) - rhs[200] * (1);
  lhs[77] = -rhs[115] * (-params.B[5]) - rhs[116] * (-params.B[14]) - rhs[117] * (-params.B[23]) -
            rhs[187] * (-params.A[5]) - rhs[188] * (-params.A[14]) - rhs[189] * (-params.A[23]) -
            rhs[190] * (-params.A[32]) - rhs[191] * (-params.A[41]) - rhs[192] * (-params.A[50]) -
            rhs[193] * (-params.A[59]) - rhs[194] * (-params.A[68]) - rhs[195] * (-params.A[77]) - rhs[201] * (1);
  lhs[78] = -rhs[115] * (-params.B[6]) - rhs[116] * (-params.B[15]) - rhs[117] * (-params.B[24]) -
            rhs[187] * (-params.A[6]) - rhs[188] * (-params.A[15]) - rhs[189] * (-params.A[24]) -
            rhs[190] * (-params.A[33]) - rhs[191] * (-params.A[42]) - rhs[192] * (-params.A[51]) -
            rhs[193] * (-params.A[60]) - rhs[194] * (-params.A[69]) - rhs[195] * (-params.A[78]) - rhs[202] * (1);
  lhs[79] = -rhs[115] * (-params.B[7]) - rhs[116] * (-params.B[16]) - rhs[117] * (-params.B[25]) -
            rhs[187] * (-params.A[7]) - rhs[188] * (-params.A[16]) - rhs[189] * (-params.A[25]) -
            rhs[190] * (-params.A[34]) - rhs[191] * (-params.A[43]) - rhs[192] * (-params.A[52]) -
            rhs[193] * (-params.A[61]) - rhs[194] * (-params.A[70]) - rhs[195] * (-params.A[79]) - rhs[203] * (1);
  lhs[80] = -rhs[115] * (-params.B[8]) - rhs[116] * (-params.B[17]) - rhs[117] * (-params.B[26]) -
            rhs[187] * (-params.A[8]) - rhs[188] * (-params.A[17]) - rhs[189] * (-params.A[26]) -
            rhs[190] * (-params.A[35]) - rhs[191] * (-params.A[44]) - rhs[192] * (-params.A[53]) -
            rhs[193] * (-params.A[62]) - rhs[194] * (-params.A[71]) - rhs[195] * (-params.A[80]) - rhs[204] * (1);
  lhs[81] = -rhs[118] * (-params.B[0]) - rhs[119] * (-params.B[9]) - rhs[120] * (-params.B[18]) -
            rhs[196] * (-params.A[0]) - rhs[197] * (-params.A[9]) - rhs[198] * (-params.A[18]) -
            rhs[199] * (-params.A[27]) - rhs[200] * (-params.A[36]) - rhs[201] * (-params.A[45]) -
            rhs[202] * (-params.A[54]) - rhs[203] * (-params.A[63]) - rhs[204] * (-params.A[72]) - rhs[205] * (1);
  lhs[82] = -rhs[118] * (-params.B[1]) - rhs[119] * (-params.B[10]) - rhs[120] * (-params.B[19]) -
            rhs[196] * (-params.A[1]) - rhs[197] * (-params.A[10]) - rhs[198] * (-params.A[19]) -
            rhs[199] * (-params.A[28]) - rhs[200] * (-params.A[37]) - rhs[201] * (-params.A[46]) -
            rhs[202] * (-params.A[55]) - rhs[203] * (-params.A[64]) - rhs[204] * (-params.A[73]) - rhs[206] * (1);
  lhs[83] = -rhs[118] * (-params.B[2]) - rhs[119] * (-params.B[11]) - rhs[120] * (-params.B[20]) -
            rhs[196] * (-params.A[2]) - rhs[197] * (-params.A[11]) - rhs[198] * (-params.A[20]) -
            rhs[199] * (-params.A[29]) - rhs[200] * (-params.A[38]) - rhs[201] * (-params.A[47]) -
            rhs[202] * (-params.A[56]) - rhs[203] * (-params.A[65]) - rhs[204] * (-params.A[74]) - rhs[207] * (1);
  lhs[84] = -rhs[118] * (-params.B[3]) - rhs[119] * (-params.B[12]) - rhs[120] * (-params.B[21]) -
            rhs[196] * (-params.A[3]) - rhs[197] * (-params.A[12]) - rhs[198] * (-params.A[21]) -
            rhs[199] * (-params.A[30]) - rhs[200] * (-params.A[39]) - rhs[201] * (-params.A[48]) -
            rhs[202] * (-params.A[57]) - rhs[203] * (-params.A[66]) - rhs[204] * (-params.A[75]) - rhs[208] * (1);
  lhs[85] = -rhs[118] * (-params.B[4]) - rhs[119] * (-params.B[13]) - rhs[120] * (-params.B[22]) -
            rhs[196] * (-params.A[4]) - rhs[197] * (-params.A[13]) - rhs[198] * (-params.A[22]) -
            rhs[199] * (-params.A[31]) - rhs[200] * (-params.A[40]) - rhs[201] * (-params.A[49]) -
            rhs[202] * (-params.A[58]) - rhs[203] * (-params.A[67]) - rhs[204] * (-params.A[76]) - rhs[209] * (1);
  lhs[86] = -rhs[118] * (-params.B[5]) - rhs[119] * (-params.B[14]) - rhs[120] * (-params.B[23]) -
            rhs[196] * (-params.A[5]) - rhs[197] * (-params.A[14]) - rhs[198] * (-params.A[23]) -
            rhs[199] * (-params.A[32]) - rhs[200] * (-params.A[41]) - rhs[201] * (-params.A[50]) -
            rhs[202] * (-params.A[59]) - rhs[203] * (-params.A[68]) - rhs[204] * (-params.A[77]) - rhs[210] * (1);
  lhs[87] = -rhs[118] * (-params.B[6]) - rhs[119] * (-params.B[15]) - rhs[120] * (-params.B[24]) -
            rhs[196] * (-params.A[6]) - rhs[197] * (-params.A[15]) - rhs[198] * (-params.A[24]) -
            rhs[199] * (-params.A[33]) - rhs[200] * (-params.A[42]) - rhs[201] * (-params.A[51]) -
            rhs[202] * (-params.A[60]) - rhs[203] * (-params.A[69]) - rhs[204] * (-params.A[78]) - rhs[211] * (1);
  lhs[88] = -rhs[118] * (-params.B[7]) - rhs[119] * (-params.B[16]) - rhs[120] * (-params.B[25]) -
            rhs[196] * (-params.A[7]) - rhs[197] * (-params.A[16]) - rhs[198] * (-params.A[25]) -
            rhs[199] * (-params.A[34]) - rhs[200] * (-params.A[43]) - rhs[201] * (-params.A[52]) -
            rhs[202] * (-params.A[61]) - rhs[203] * (-params.A[70]) - rhs[204] * (-params.A[79]) - rhs[212] * (1);
  lhs[89] = -rhs[118] * (-params.B[8]) - rhs[119] * (-params.B[17]) - rhs[120] * (-params.B[26]) -
            rhs[196] * (-params.A[8]) - rhs[197] * (-params.A[17]) - rhs[198] * (-params.A[26]) -
            rhs[199] * (-params.A[35]) - rhs[200] * (-params.A[44]) - rhs[201] * (-params.A[53]) -
            rhs[202] * (-params.A[62]) - rhs[203] * (-params.A[71]) - rhs[204] * (-params.A[80]) - rhs[213] * (1);
}
void multbymAT(double *lhs, double *rhs)
{
  lhs[0] = 0;
  lhs[1] = 0;
  lhs[2] = 0;
  lhs[3] = 0;
  lhs[4] = 0;
  lhs[5] = 0;
  lhs[6] = 0;
  lhs[7] = 0;
  lhs[8] = 0;
  lhs[9] = 0;
  lhs[10] = 0;
  lhs[11] = 0;
  lhs[12] = 0;
  lhs[13] = 0;
  lhs[14] = 0;
  lhs[15] = 0;
  lhs[16] = 0;
  lhs[17] = 0;
  lhs[18] = 0;
  lhs[19] = 0;
  lhs[20] = 0;
  lhs[21] = 0;
  lhs[22] = 0;
  lhs[23] = 0;
  lhs[24] = 0;
  lhs[25] = 0;
  lhs[26] = 0;
  lhs[27] = 0;
  lhs[28] = 0;
  lhs[29] = 0;
  lhs[30] = 0;
  lhs[31] = 0;
  lhs[32] = 0;
  lhs[33] = 0;
  lhs[34] = 0;
  lhs[35] = 0;
  lhs[36] = 0;
  lhs[37] = 0;
  lhs[38] = 0;
  lhs[39] = 0;
  lhs[40] = 0;
  lhs[41] = 0;
  lhs[42] = 0;
  lhs[43] = 0;
  lhs[44] = 0;
  lhs[45] = 0;
  lhs[46] = 0;
  lhs[47] = 0;
  lhs[48] = 0;
  lhs[49] = 0;
  lhs[50] = 0;
  lhs[51] = 0;
  lhs[52] = 0;
  lhs[53] = 0;
  lhs[54] = 0;
  lhs[55] = 0;
  lhs[56] = 0;
  lhs[57] = 0;
  lhs[58] = 0;
  lhs[59] = 0;
  lhs[60] = 0;
  lhs[61] = 0;
  lhs[62] = 0;
  lhs[63] = 0;
  lhs[64] = 0;
  lhs[65] = 0;
  lhs[66] = 0;
  lhs[67] = 0;
  lhs[68] = 0;
  lhs[69] = 0;
  lhs[70] = 0;
  lhs[71] = 0;
  lhs[72] = 0;
  lhs[73] = 0;
  lhs[74] = 0;
  lhs[75] = 0;
  lhs[76] = 0;
  lhs[77] = 0;
  lhs[78] = 0;
  lhs[79] = 0;
  lhs[80] = 0;
  lhs[81] = 0;
  lhs[82] = 0;
  lhs[83] = 0;
  lhs[84] = 0;
  lhs[85] = 0;
  lhs[86] = 0;
  lhs[87] = 0;
  lhs[88] = 0;
  lhs[89] = 0;
  lhs[90] = 0;
  lhs[91] = -rhs[0] * (-params.B[0]) - rhs[1] * (-params.B[1]) - rhs[2] * (-params.B[2]) - rhs[3] * (-params.B[3]) -
            rhs[4] * (-params.B[4]) - rhs[5] * (-params.B[5]) - rhs[6] * (-params.B[6]) - rhs[7] * (-params.B[7]) -
            rhs[8] * (-params.B[8]);
  lhs[92] = -rhs[0] * (-params.B[9]) - rhs[1] * (-params.B[10]) - rhs[2] * (-params.B[11]) - rhs[3] * (-params.B[12]) -
            rhs[4] * (-params.B[13]) - rhs[5] * (-params.B[14]) - rhs[6] * (-params.B[15]) - rhs[7] * (-params.B[16]) -
            rhs[8] * (-params.B[17]);
  lhs[93] = -rhs[0] * (-params.B[18]) - rhs[1] * (-params.B[19]) - rhs[2] * (-params.B[20]) - rhs[3] * (-params.B[21]) -
            rhs[4] * (-params.B[22]) - rhs[5] * (-params.B[23]) - rhs[6] * (-params.B[24]) - rhs[7] * (-params.B[25]) -
            rhs[8] * (-params.B[26]);
  lhs[94] = -rhs[9] * (-params.B[0]) - rhs[10] * (-params.B[1]) - rhs[11] * (-params.B[2]) - rhs[12] * (-params.B[3]) -
            rhs[13] * (-params.B[4]) - rhs[14] * (-params.B[5]) - rhs[15] * (-params.B[6]) - rhs[16] * (-params.B[7]) -
            rhs[17] * (-params.B[8]);
  lhs[95] = -rhs[9] * (-params.B[9]) - rhs[10] * (-params.B[10]) - rhs[11] * (-params.B[11]) -
            rhs[12] * (-params.B[12]) - rhs[13] * (-params.B[13]) - rhs[14] * (-params.B[14]) -
            rhs[15] * (-params.B[15]) - rhs[16] * (-params.B[16]) - rhs[17] * (-params.B[17]);
  lhs[96] = -rhs[9] * (-params.B[18]) - rhs[10] * (-params.B[19]) - rhs[11] * (-params.B[20]) -
            rhs[12] * (-params.B[21]) - rhs[13] * (-params.B[22]) - rhs[14] * (-params.B[23]) -
            rhs[15] * (-params.B[24]) - rhs[16] * (-params.B[25]) - rhs[17] * (-params.B[26]);
  lhs[97] = -rhs[18] * (-params.B[0]) - rhs[19] * (-params.B[1]) - rhs[20] * (-params.B[2]) - rhs[21] * (-params.B[3]) -
            rhs[22] * (-params.B[4]) - rhs[23] * (-params.B[5]) - rhs[24] * (-params.B[6]) - rhs[25] * (-params.B[7]) -
            rhs[26] * (-params.B[8]);
  lhs[98] = -rhs[18] * (-params.B[9]) - rhs[19] * (-params.B[10]) - rhs[20] * (-params.B[11]) -
            rhs[21] * (-params.B[12]) - rhs[22] * (-params.B[13]) - rhs[23] * (-params.B[14]) -
            rhs[24] * (-params.B[15]) - rhs[25] * (-params.B[16]) - rhs[26] * (-params.B[17]);
  lhs[99] = -rhs[18] * (-params.B[18]) - rhs[19] * (-params.B[19]) - rhs[20] * (-params.B[20]) -
            rhs[21] * (-params.B[21]) - rhs[22] * (-params.B[22]) - rhs[23] * (-params.B[23]) -
            rhs[24] * (-params.B[24]) - rhs[25] * (-params.B[25]) - rhs[26] * (-params.B[26]);
  lhs[100] = -rhs[27] * (-params.B[0]) - rhs[28] * (-params.B[1]) - rhs[29] * (-params.B[2]) -
             rhs[30] * (-params.B[3]) - rhs[31] * (-params.B[4]) - rhs[32] * (-params.B[5]) - rhs[33] * (-params.B[6]) -
             rhs[34] * (-params.B[7]) - rhs[35] * (-params.B[8]);
  lhs[101] = -rhs[27] * (-params.B[9]) - rhs[28] * (-params.B[10]) - rhs[29] * (-params.B[11]) -
             rhs[30] * (-params.B[12]) - rhs[31] * (-params.B[13]) - rhs[32] * (-params.B[14]) -
             rhs[33] * (-params.B[15]) - rhs[34] * (-params.B[16]) - rhs[35] * (-params.B[17]);
  lhs[102] = -rhs[27] * (-params.B[18]) - rhs[28] * (-params.B[19]) - rhs[29] * (-params.B[20]) -
             rhs[30] * (-params.B[21]) - rhs[31] * (-params.B[22]) - rhs[32] * (-params.B[23]) -
             rhs[33] * (-params.B[24]) - rhs[34] * (-params.B[25]) - rhs[35] * (-params.B[26]);
  lhs[103] = -rhs[36] * (-params.B[0]) - rhs[37] * (-params.B[1]) - rhs[38] * (-params.B[2]) -
             rhs[39] * (-params.B[3]) - rhs[40] * (-params.B[4]) - rhs[41] * (-params.B[5]) - rhs[42] * (-params.B[6]) -
             rhs[43] * (-params.B[7]) - rhs[44] * (-params.B[8]);
  lhs[104] = -rhs[36] * (-params.B[9]) - rhs[37] * (-params.B[10]) - rhs[38] * (-params.B[11]) -
             rhs[39] * (-params.B[12]) - rhs[40] * (-params.B[13]) - rhs[41] * (-params.B[14]) -
             rhs[42] * (-params.B[15]) - rhs[43] * (-params.B[16]) - rhs[44] * (-params.B[17]);
  lhs[105] = -rhs[36] * (-params.B[18]) - rhs[37] * (-params.B[19]) - rhs[38] * (-params.B[20]) -
             rhs[39] * (-params.B[21]) - rhs[40] * (-params.B[22]) - rhs[41] * (-params.B[23]) -
             rhs[42] * (-params.B[24]) - rhs[43] * (-params.B[25]) - rhs[44] * (-params.B[26]);
  lhs[106] = -rhs[45] * (-params.B[0]) - rhs[46] * (-params.B[1]) - rhs[47] * (-params.B[2]) -
             rhs[48] * (-params.B[3]) - rhs[49] * (-params.B[4]) - rhs[50] * (-params.B[5]) - rhs[51] * (-params.B[6]) -
             rhs[52] * (-params.B[7]) - rhs[53] * (-params.B[8]);
  lhs[107] = -rhs[45] * (-params.B[9]) - rhs[46] * (-params.B[10]) - rhs[47] * (-params.B[11]) -
             rhs[48] * (-params.B[12]) - rhs[49] * (-params.B[13]) - rhs[50] * (-params.B[14]) -
             rhs[51] * (-params.B[15]) - rhs[52] * (-params.B[16]) - rhs[53] * (-params.B[17]);
  lhs[108] = -rhs[45] * (-params.B[18]) - rhs[46] * (-params.B[19]) - rhs[47] * (-params.B[20]) -
             rhs[48] * (-params.B[21]) - rhs[49] * (-params.B[22]) - rhs[50] * (-params.B[23]) -
             rhs[51] * (-params.B[24]) - rhs[52] * (-params.B[25]) - rhs[53] * (-params.B[26]);
  lhs[109] = -rhs[54] * (-params.B[0]) - rhs[55] * (-params.B[1]) - rhs[56] * (-params.B[2]) -
             rhs[57] * (-params.B[3]) - rhs[58] * (-params.B[4]) - rhs[59] * (-params.B[5]) - rhs[60] * (-params.B[6]) -
             rhs[61] * (-params.B[7]) - rhs[62] * (-params.B[8]);
  lhs[110] = -rhs[54] * (-params.B[9]) - rhs[55] * (-params.B[10]) - rhs[56] * (-params.B[11]) -
             rhs[57] * (-params.B[12]) - rhs[58] * (-params.B[13]) - rhs[59] * (-params.B[14]) -
             rhs[60] * (-params.B[15]) - rhs[61] * (-params.B[16]) - rhs[62] * (-params.B[17]);
  lhs[111] = -rhs[54] * (-params.B[18]) - rhs[55] * (-params.B[19]) - rhs[56] * (-params.B[20]) -
             rhs[57] * (-params.B[21]) - rhs[58] * (-params.B[22]) - rhs[59] * (-params.B[23]) -
             rhs[60] * (-params.B[24]) - rhs[61] * (-params.B[25]) - rhs[62] * (-params.B[26]);
  lhs[112] = -rhs[63] * (-params.B[0]) - rhs[64] * (-params.B[1]) - rhs[65] * (-params.B[2]) -
             rhs[66] * (-params.B[3]) - rhs[67] * (-params.B[4]) - rhs[68] * (-params.B[5]) - rhs[69] * (-params.B[6]) -
             rhs[70] * (-params.B[7]) - rhs[71] * (-params.B[8]);
  lhs[113] = -rhs[63] * (-params.B[9]) - rhs[64] * (-params.B[10]) - rhs[65] * (-params.B[11]) -
             rhs[66] * (-params.B[12]) - rhs[67] * (-params.B[13]) - rhs[68] * (-params.B[14]) -
             rhs[69] * (-params.B[15]) - rhs[70] * (-params.B[16]) - rhs[71] * (-params.B[17]);
  lhs[114] = -rhs[63] * (-params.B[18]) - rhs[64] * (-params.B[19]) - rhs[65] * (-params.B[20]) -
             rhs[66] * (-params.B[21]) - rhs[67] * (-params.B[22]) - rhs[68] * (-params.B[23]) -
             rhs[69] * (-params.B[24]) - rhs[70] * (-params.B[25]) - rhs[71] * (-params.B[26]);
  lhs[115] = -rhs[72] * (-params.B[0]) - rhs[73] * (-params.B[1]) - rhs[74] * (-params.B[2]) -
             rhs[75] * (-params.B[3]) - rhs[76] * (-params.B[4]) - rhs[77] * (-params.B[5]) - rhs[78] * (-params.B[6]) -
             rhs[79] * (-params.B[7]) - rhs[80] * (-params.B[8]);
  lhs[116] = -rhs[72] * (-params.B[9]) - rhs[73] * (-params.B[10]) - rhs[74] * (-params.B[11]) -
             rhs[75] * (-params.B[12]) - rhs[76] * (-params.B[13]) - rhs[77] * (-params.B[14]) -
             rhs[78] * (-params.B[15]) - rhs[79] * (-params.B[16]) - rhs[80] * (-params.B[17]);
  lhs[117] = -rhs[72] * (-params.B[18]) - rhs[73] * (-params.B[19]) - rhs[74] * (-params.B[20]) -
             rhs[75] * (-params.B[21]) - rhs[76] * (-params.B[22]) - rhs[77] * (-params.B[23]) -
             rhs[78] * (-params.B[24]) - rhs[79] * (-params.B[25]) - rhs[80] * (-params.B[26]);
  lhs[118] = -rhs[81] * (-params.B[0]) - rhs[82] * (-params.B[1]) - rhs[83] * (-params.B[2]) -
             rhs[84] * (-params.B[3]) - rhs[85] * (-params.B[4]) - rhs[86] * (-params.B[5]) - rhs[87] * (-params.B[6]) -
             rhs[88] * (-params.B[7]) - rhs[89] * (-params.B[8]);
  lhs[119] = -rhs[81] * (-params.B[9]) - rhs[82] * (-params.B[10]) - rhs[83] * (-params.B[11]) -
             rhs[84] * (-params.B[12]) - rhs[85] * (-params.B[13]) - rhs[86] * (-params.B[14]) -
             rhs[87] * (-params.B[15]) - rhs[88] * (-params.B[16]) - rhs[89] * (-params.B[17]);
  lhs[120] = -rhs[81] * (-params.B[18]) - rhs[82] * (-params.B[19]) - rhs[83] * (-params.B[20]) -
             rhs[84] * (-params.B[21]) - rhs[85] * (-params.B[22]) - rhs[86] * (-params.B[23]) -
             rhs[87] * (-params.B[24]) - rhs[88] * (-params.B[25]) - rhs[89] * (-params.B[26]);
  lhs[121] = 0;
  lhs[122] = 0;
  lhs[123] = 0;
  lhs[124] = -rhs[0] * (1) - rhs[9] * (-params.A[0]) - rhs[10] * (-params.A[1]) - rhs[11] * (-params.A[2]) -
             rhs[12] * (-params.A[3]) - rhs[13] * (-params.A[4]) - rhs[14] * (-params.A[5]) - rhs[15] * (-params.A[6]) -
             rhs[16] * (-params.A[7]) - rhs[17] * (-params.A[8]);
  lhs[125] = -rhs[1] * (1) - rhs[9] * (-params.A[9]) - rhs[10] * (-params.A[10]) - rhs[11] * (-params.A[11]) -
             rhs[12] * (-params.A[12]) - rhs[13] * (-params.A[13]) - rhs[14] * (-params.A[14]) -
             rhs[15] * (-params.A[15]) - rhs[16] * (-params.A[16]) - rhs[17] * (-params.A[17]);
  lhs[126] = -rhs[2] * (1) - rhs[9] * (-params.A[18]) - rhs[10] * (-params.A[19]) - rhs[11] * (-params.A[20]) -
             rhs[12] * (-params.A[21]) - rhs[13] * (-params.A[22]) - rhs[14] * (-params.A[23]) -
             rhs[15] * (-params.A[24]) - rhs[16] * (-params.A[25]) - rhs[17] * (-params.A[26]);
  lhs[127] = -rhs[3] * (1) - rhs[9] * (-params.A[27]) - rhs[10] * (-params.A[28]) - rhs[11] * (-params.A[29]) -
             rhs[12] * (-params.A[30]) - rhs[13] * (-params.A[31]) - rhs[14] * (-params.A[32]) -
             rhs[15] * (-params.A[33]) - rhs[16] * (-params.A[34]) - rhs[17] * (-params.A[35]);
  lhs[128] = -rhs[4] * (1) - rhs[9] * (-params.A[36]) - rhs[10] * (-params.A[37]) - rhs[11] * (-params.A[38]) -
             rhs[12] * (-params.A[39]) - rhs[13] * (-params.A[40]) - rhs[14] * (-params.A[41]) -
             rhs[15] * (-params.A[42]) - rhs[16] * (-params.A[43]) - rhs[17] * (-params.A[44]);
  lhs[129] = -rhs[5] * (1) - rhs[9] * (-params.A[45]) - rhs[10] * (-params.A[46]) - rhs[11] * (-params.A[47]) -
             rhs[12] * (-params.A[48]) - rhs[13] * (-params.A[49]) - rhs[14] * (-params.A[50]) -
             rhs[15] * (-params.A[51]) - rhs[16] * (-params.A[52]) - rhs[17] * (-params.A[53]);
  lhs[130] = -rhs[6] * (1) - rhs[9] * (-params.A[54]) - rhs[10] * (-params.A[55]) - rhs[11] * (-params.A[56]) -
             rhs[12] * (-params.A[57]) - rhs[13] * (-params.A[58]) - rhs[14] * (-params.A[59]) -
             rhs[15] * (-params.A[60]) - rhs[16] * (-params.A[61]) - rhs[17] * (-params.A[62]);
  lhs[131] = -rhs[7] * (1) - rhs[9] * (-params.A[63]) - rhs[10] * (-params.A[64]) - rhs[11] * (-params.A[65]) -
             rhs[12] * (-params.A[66]) - rhs[13] * (-params.A[67]) - rhs[14] * (-params.A[68]) -
             rhs[15] * (-params.A[69]) - rhs[16] * (-params.A[70]) - rhs[17] * (-params.A[71]);
  lhs[132] = -rhs[8] * (1) - rhs[9] * (-params.A[72]) - rhs[10] * (-params.A[73]) - rhs[11] * (-params.A[74]) -
             rhs[12] * (-params.A[75]) - rhs[13] * (-params.A[76]) - rhs[14] * (-params.A[77]) -
             rhs[15] * (-params.A[78]) - rhs[16] * (-params.A[79]) - rhs[17] * (-params.A[80]);
  lhs[133] = -rhs[9] * (1) - rhs[18] * (-params.A[0]) - rhs[19] * (-params.A[1]) - rhs[20] * (-params.A[2]) -
             rhs[21] * (-params.A[3]) - rhs[22] * (-params.A[4]) - rhs[23] * (-params.A[5]) - rhs[24] * (-params.A[6]) -
             rhs[25] * (-params.A[7]) - rhs[26] * (-params.A[8]);
  lhs[134] = -rhs[10] * (1) - rhs[18] * (-params.A[9]) - rhs[19] * (-params.A[10]) - rhs[20] * (-params.A[11]) -
             rhs[21] * (-params.A[12]) - rhs[22] * (-params.A[13]) - rhs[23] * (-params.A[14]) -
             rhs[24] * (-params.A[15]) - rhs[25] * (-params.A[16]) - rhs[26] * (-params.A[17]);
  lhs[135] = -rhs[11] * (1) - rhs[18] * (-params.A[18]) - rhs[19] * (-params.A[19]) - rhs[20] * (-params.A[20]) -
             rhs[21] * (-params.A[21]) - rhs[22] * (-params.A[22]) - rhs[23] * (-params.A[23]) -
             rhs[24] * (-params.A[24]) - rhs[25] * (-params.A[25]) - rhs[26] * (-params.A[26]);
  lhs[136] = -rhs[12] * (1) - rhs[18] * (-params.A[27]) - rhs[19] * (-params.A[28]) - rhs[20] * (-params.A[29]) -
             rhs[21] * (-params.A[30]) - rhs[22] * (-params.A[31]) - rhs[23] * (-params.A[32]) -
             rhs[24] * (-params.A[33]) - rhs[25] * (-params.A[34]) - rhs[26] * (-params.A[35]);
  lhs[137] = -rhs[13] * (1) - rhs[18] * (-params.A[36]) - rhs[19] * (-params.A[37]) - rhs[20] * (-params.A[38]) -
             rhs[21] * (-params.A[39]) - rhs[22] * (-params.A[40]) - rhs[23] * (-params.A[41]) -
             rhs[24] * (-params.A[42]) - rhs[25] * (-params.A[43]) - rhs[26] * (-params.A[44]);
  lhs[138] = -rhs[14] * (1) - rhs[18] * (-params.A[45]) - rhs[19] * (-params.A[46]) - rhs[20] * (-params.A[47]) -
             rhs[21] * (-params.A[48]) - rhs[22] * (-params.A[49]) - rhs[23] * (-params.A[50]) -
             rhs[24] * (-params.A[51]) - rhs[25] * (-params.A[52]) - rhs[26] * (-params.A[53]);
  lhs[139] = -rhs[15] * (1) - rhs[18] * (-params.A[54]) - rhs[19] * (-params.A[55]) - rhs[20] * (-params.A[56]) -
             rhs[21] * (-params.A[57]) - rhs[22] * (-params.A[58]) - rhs[23] * (-params.A[59]) -
             rhs[24] * (-params.A[60]) - rhs[25] * (-params.A[61]) - rhs[26] * (-params.A[62]);
  lhs[140] = -rhs[16] * (1) - rhs[18] * (-params.A[63]) - rhs[19] * (-params.A[64]) - rhs[20] * (-params.A[65]) -
             rhs[21] * (-params.A[66]) - rhs[22] * (-params.A[67]) - rhs[23] * (-params.A[68]) -
             rhs[24] * (-params.A[69]) - rhs[25] * (-params.A[70]) - rhs[26] * (-params.A[71]);
  lhs[141] = -rhs[17] * (1) - rhs[18] * (-params.A[72]) - rhs[19] * (-params.A[73]) - rhs[20] * (-params.A[74]) -
             rhs[21] * (-params.A[75]) - rhs[22] * (-params.A[76]) - rhs[23] * (-params.A[77]) -
             rhs[24] * (-params.A[78]) - rhs[25] * (-params.A[79]) - rhs[26] * (-params.A[80]);
  lhs[142] = -rhs[18] * (1) - rhs[27] * (-params.A[0]) - rhs[28] * (-params.A[1]) - rhs[29] * (-params.A[2]) -
             rhs[30] * (-params.A[3]) - rhs[31] * (-params.A[4]) - rhs[32] * (-params.A[5]) - rhs[33] * (-params.A[6]) -
             rhs[34] * (-params.A[7]) - rhs[35] * (-params.A[8]);
  lhs[143] = -rhs[19] * (1) - rhs[27] * (-params.A[9]) - rhs[28] * (-params.A[10]) - rhs[29] * (-params.A[11]) -
             rhs[30] * (-params.A[12]) - rhs[31] * (-params.A[13]) - rhs[32] * (-params.A[14]) -
             rhs[33] * (-params.A[15]) - rhs[34] * (-params.A[16]) - rhs[35] * (-params.A[17]);
  lhs[144] = -rhs[20] * (1) - rhs[27] * (-params.A[18]) - rhs[28] * (-params.A[19]) - rhs[29] * (-params.A[20]) -
             rhs[30] * (-params.A[21]) - rhs[31] * (-params.A[22]) - rhs[32] * (-params.A[23]) -
             rhs[33] * (-params.A[24]) - rhs[34] * (-params.A[25]) - rhs[35] * (-params.A[26]);
  lhs[145] = -rhs[21] * (1) - rhs[27] * (-params.A[27]) - rhs[28] * (-params.A[28]) - rhs[29] * (-params.A[29]) -
             rhs[30] * (-params.A[30]) - rhs[31] * (-params.A[31]) - rhs[32] * (-params.A[32]) -
             rhs[33] * (-params.A[33]) - rhs[34] * (-params.A[34]) - rhs[35] * (-params.A[35]);
  lhs[146] = -rhs[22] * (1) - rhs[27] * (-params.A[36]) - rhs[28] * (-params.A[37]) - rhs[29] * (-params.A[38]) -
             rhs[30] * (-params.A[39]) - rhs[31] * (-params.A[40]) - rhs[32] * (-params.A[41]) -
             rhs[33] * (-params.A[42]) - rhs[34] * (-params.A[43]) - rhs[35] * (-params.A[44]);
  lhs[147] = -rhs[23] * (1) - rhs[27] * (-params.A[45]) - rhs[28] * (-params.A[46]) - rhs[29] * (-params.A[47]) -
             rhs[30] * (-params.A[48]) - rhs[31] * (-params.A[49]) - rhs[32] * (-params.A[50]) -
             rhs[33] * (-params.A[51]) - rhs[34] * (-params.A[52]) - rhs[35] * (-params.A[53]);
  lhs[148] = -rhs[24] * (1) - rhs[27] * (-params.A[54]) - rhs[28] * (-params.A[55]) - rhs[29] * (-params.A[56]) -
             rhs[30] * (-params.A[57]) - rhs[31] * (-params.A[58]) - rhs[32] * (-params.A[59]) -
             rhs[33] * (-params.A[60]) - rhs[34] * (-params.A[61]) - rhs[35] * (-params.A[62]);
  lhs[149] = -rhs[25] * (1) - rhs[27] * (-params.A[63]) - rhs[28] * (-params.A[64]) - rhs[29] * (-params.A[65]) -
             rhs[30] * (-params.A[66]) - rhs[31] * (-params.A[67]) - rhs[32] * (-params.A[68]) -
             rhs[33] * (-params.A[69]) - rhs[34] * (-params.A[70]) - rhs[35] * (-params.A[71]);
  lhs[150] = -rhs[26] * (1) - rhs[27] * (-params.A[72]) - rhs[28] * (-params.A[73]) - rhs[29] * (-params.A[74]) -
             rhs[30] * (-params.A[75]) - rhs[31] * (-params.A[76]) - rhs[32] * (-params.A[77]) -
             rhs[33] * (-params.A[78]) - rhs[34] * (-params.A[79]) - rhs[35] * (-params.A[80]);
  lhs[151] = -rhs[27] * (1) - rhs[36] * (-params.A[0]) - rhs[37] * (-params.A[1]) - rhs[38] * (-params.A[2]) -
             rhs[39] * (-params.A[3]) - rhs[40] * (-params.A[4]) - rhs[41] * (-params.A[5]) - rhs[42] * (-params.A[6]) -
             rhs[43] * (-params.A[7]) - rhs[44] * (-params.A[8]);
  lhs[152] = -rhs[28] * (1) - rhs[36] * (-params.A[9]) - rhs[37] * (-params.A[10]) - rhs[38] * (-params.A[11]) -
             rhs[39] * (-params.A[12]) - rhs[40] * (-params.A[13]) - rhs[41] * (-params.A[14]) -
             rhs[42] * (-params.A[15]) - rhs[43] * (-params.A[16]) - rhs[44] * (-params.A[17]);
  lhs[153] = -rhs[29] * (1) - rhs[36] * (-params.A[18]) - rhs[37] * (-params.A[19]) - rhs[38] * (-params.A[20]) -
             rhs[39] * (-params.A[21]) - rhs[40] * (-params.A[22]) - rhs[41] * (-params.A[23]) -
             rhs[42] * (-params.A[24]) - rhs[43] * (-params.A[25]) - rhs[44] * (-params.A[26]);
  lhs[154] = -rhs[30] * (1) - rhs[36] * (-params.A[27]) - rhs[37] * (-params.A[28]) - rhs[38] * (-params.A[29]) -
             rhs[39] * (-params.A[30]) - rhs[40] * (-params.A[31]) - rhs[41] * (-params.A[32]) -
             rhs[42] * (-params.A[33]) - rhs[43] * (-params.A[34]) - rhs[44] * (-params.A[35]);
  lhs[155] = -rhs[31] * (1) - rhs[36] * (-params.A[36]) - rhs[37] * (-params.A[37]) - rhs[38] * (-params.A[38]) -
             rhs[39] * (-params.A[39]) - rhs[40] * (-params.A[40]) - rhs[41] * (-params.A[41]) -
             rhs[42] * (-params.A[42]) - rhs[43] * (-params.A[43]) - rhs[44] * (-params.A[44]);
  lhs[156] = -rhs[32] * (1) - rhs[36] * (-params.A[45]) - rhs[37] * (-params.A[46]) - rhs[38] * (-params.A[47]) -
             rhs[39] * (-params.A[48]) - rhs[40] * (-params.A[49]) - rhs[41] * (-params.A[50]) -
             rhs[42] * (-params.A[51]) - rhs[43] * (-params.A[52]) - rhs[44] * (-params.A[53]);
  lhs[157] = -rhs[33] * (1) - rhs[36] * (-params.A[54]) - rhs[37] * (-params.A[55]) - rhs[38] * (-params.A[56]) -
             rhs[39] * (-params.A[57]) - rhs[40] * (-params.A[58]) - rhs[41] * (-params.A[59]) -
             rhs[42] * (-params.A[60]) - rhs[43] * (-params.A[61]) - rhs[44] * (-params.A[62]);
  lhs[158] = -rhs[34] * (1) - rhs[36] * (-params.A[63]) - rhs[37] * (-params.A[64]) - rhs[38] * (-params.A[65]) -
             rhs[39] * (-params.A[66]) - rhs[40] * (-params.A[67]) - rhs[41] * (-params.A[68]) -
             rhs[42] * (-params.A[69]) - rhs[43] * (-params.A[70]) - rhs[44] * (-params.A[71]);
  lhs[159] = -rhs[35] * (1) - rhs[36] * (-params.A[72]) - rhs[37] * (-params.A[73]) - rhs[38] * (-params.A[74]) -
             rhs[39] * (-params.A[75]) - rhs[40] * (-params.A[76]) - rhs[41] * (-params.A[77]) -
             rhs[42] * (-params.A[78]) - rhs[43] * (-params.A[79]) - rhs[44] * (-params.A[80]);
  lhs[160] = -rhs[36] * (1) - rhs[45] * (-params.A[0]) - rhs[46] * (-params.A[1]) - rhs[47] * (-params.A[2]) -
             rhs[48] * (-params.A[3]) - rhs[49] * (-params.A[4]) - rhs[50] * (-params.A[5]) - rhs[51] * (-params.A[6]) -
             rhs[52] * (-params.A[7]) - rhs[53] * (-params.A[8]);
  lhs[161] = -rhs[37] * (1) - rhs[45] * (-params.A[9]) - rhs[46] * (-params.A[10]) - rhs[47] * (-params.A[11]) -
             rhs[48] * (-params.A[12]) - rhs[49] * (-params.A[13]) - rhs[50] * (-params.A[14]) -
             rhs[51] * (-params.A[15]) - rhs[52] * (-params.A[16]) - rhs[53] * (-params.A[17]);
  lhs[162] = -rhs[38] * (1) - rhs[45] * (-params.A[18]) - rhs[46] * (-params.A[19]) - rhs[47] * (-params.A[20]) -
             rhs[48] * (-params.A[21]) - rhs[49] * (-params.A[22]) - rhs[50] * (-params.A[23]) -
             rhs[51] * (-params.A[24]) - rhs[52] * (-params.A[25]) - rhs[53] * (-params.A[26]);
  lhs[163] = -rhs[39] * (1) - rhs[45] * (-params.A[27]) - rhs[46] * (-params.A[28]) - rhs[47] * (-params.A[29]) -
             rhs[48] * (-params.A[30]) - rhs[49] * (-params.A[31]) - rhs[50] * (-params.A[32]) -
             rhs[51] * (-params.A[33]) - rhs[52] * (-params.A[34]) - rhs[53] * (-params.A[35]);
  lhs[164] = -rhs[40] * (1) - rhs[45] * (-params.A[36]) - rhs[46] * (-params.A[37]) - rhs[47] * (-params.A[38]) -
             rhs[48] * (-params.A[39]) - rhs[49] * (-params.A[40]) - rhs[50] * (-params.A[41]) -
             rhs[51] * (-params.A[42]) - rhs[52] * (-params.A[43]) - rhs[53] * (-params.A[44]);
  lhs[165] = -rhs[41] * (1) - rhs[45] * (-params.A[45]) - rhs[46] * (-params.A[46]) - rhs[47] * (-params.A[47]) -
             rhs[48] * (-params.A[48]) - rhs[49] * (-params.A[49]) - rhs[50] * (-params.A[50]) -
             rhs[51] * (-params.A[51]) - rhs[52] * (-params.A[52]) - rhs[53] * (-params.A[53]);
  lhs[166] = -rhs[42] * (1) - rhs[45] * (-params.A[54]) - rhs[46] * (-params.A[55]) - rhs[47] * (-params.A[56]) -
             rhs[48] * (-params.A[57]) - rhs[49] * (-params.A[58]) - rhs[50] * (-params.A[59]) -
             rhs[51] * (-params.A[60]) - rhs[52] * (-params.A[61]) - rhs[53] * (-params.A[62]);
  lhs[167] = -rhs[43] * (1) - rhs[45] * (-params.A[63]) - rhs[46] * (-params.A[64]) - rhs[47] * (-params.A[65]) -
             rhs[48] * (-params.A[66]) - rhs[49] * (-params.A[67]) - rhs[50] * (-params.A[68]) -
             rhs[51] * (-params.A[69]) - rhs[52] * (-params.A[70]) - rhs[53] * (-params.A[71]);
  lhs[168] = -rhs[44] * (1) - rhs[45] * (-params.A[72]) - rhs[46] * (-params.A[73]) - rhs[47] * (-params.A[74]) -
             rhs[48] * (-params.A[75]) - rhs[49] * (-params.A[76]) - rhs[50] * (-params.A[77]) -
             rhs[51] * (-params.A[78]) - rhs[52] * (-params.A[79]) - rhs[53] * (-params.A[80]);
  lhs[169] = -rhs[45] * (1) - rhs[54] * (-params.A[0]) - rhs[55] * (-params.A[1]) - rhs[56] * (-params.A[2]) -
             rhs[57] * (-params.A[3]) - rhs[58] * (-params.A[4]) - rhs[59] * (-params.A[5]) - rhs[60] * (-params.A[6]) -
             rhs[61] * (-params.A[7]) - rhs[62] * (-params.A[8]);
  lhs[170] = -rhs[46] * (1) - rhs[54] * (-params.A[9]) - rhs[55] * (-params.A[10]) - rhs[56] * (-params.A[11]) -
             rhs[57] * (-params.A[12]) - rhs[58] * (-params.A[13]) - rhs[59] * (-params.A[14]) -
             rhs[60] * (-params.A[15]) - rhs[61] * (-params.A[16]) - rhs[62] * (-params.A[17]);
  lhs[171] = -rhs[47] * (1) - rhs[54] * (-params.A[18]) - rhs[55] * (-params.A[19]) - rhs[56] * (-params.A[20]) -
             rhs[57] * (-params.A[21]) - rhs[58] * (-params.A[22]) - rhs[59] * (-params.A[23]) -
             rhs[60] * (-params.A[24]) - rhs[61] * (-params.A[25]) - rhs[62] * (-params.A[26]);
  lhs[172] = -rhs[48] * (1) - rhs[54] * (-params.A[27]) - rhs[55] * (-params.A[28]) - rhs[56] * (-params.A[29]) -
             rhs[57] * (-params.A[30]) - rhs[58] * (-params.A[31]) - rhs[59] * (-params.A[32]) -
             rhs[60] * (-params.A[33]) - rhs[61] * (-params.A[34]) - rhs[62] * (-params.A[35]);
  lhs[173] = -rhs[49] * (1) - rhs[54] * (-params.A[36]) - rhs[55] * (-params.A[37]) - rhs[56] * (-params.A[38]) -
             rhs[57] * (-params.A[39]) - rhs[58] * (-params.A[40]) - rhs[59] * (-params.A[41]) -
             rhs[60] * (-params.A[42]) - rhs[61] * (-params.A[43]) - rhs[62] * (-params.A[44]);
  lhs[174] = -rhs[50] * (1) - rhs[54] * (-params.A[45]) - rhs[55] * (-params.A[46]) - rhs[56] * (-params.A[47]) -
             rhs[57] * (-params.A[48]) - rhs[58] * (-params.A[49]) - rhs[59] * (-params.A[50]) -
             rhs[60] * (-params.A[51]) - rhs[61] * (-params.A[52]) - rhs[62] * (-params.A[53]);
  lhs[175] = -rhs[51] * (1) - rhs[54] * (-params.A[54]) - rhs[55] * (-params.A[55]) - rhs[56] * (-params.A[56]) -
             rhs[57] * (-params.A[57]) - rhs[58] * (-params.A[58]) - rhs[59] * (-params.A[59]) -
             rhs[60] * (-params.A[60]) - rhs[61] * (-params.A[61]) - rhs[62] * (-params.A[62]);
  lhs[176] = -rhs[52] * (1) - rhs[54] * (-params.A[63]) - rhs[55] * (-params.A[64]) - rhs[56] * (-params.A[65]) -
             rhs[57] * (-params.A[66]) - rhs[58] * (-params.A[67]) - rhs[59] * (-params.A[68]) -
             rhs[60] * (-params.A[69]) - rhs[61] * (-params.A[70]) - rhs[62] * (-params.A[71]);
  lhs[177] = -rhs[53] * (1) - rhs[54] * (-params.A[72]) - rhs[55] * (-params.A[73]) - rhs[56] * (-params.A[74]) -
             rhs[57] * (-params.A[75]) - rhs[58] * (-params.A[76]) - rhs[59] * (-params.A[77]) -
             rhs[60] * (-params.A[78]) - rhs[61] * (-params.A[79]) - rhs[62] * (-params.A[80]);
  lhs[178] = -rhs[54] * (1) - rhs[63] * (-params.A[0]) - rhs[64] * (-params.A[1]) - rhs[65] * (-params.A[2]) -
             rhs[66] * (-params.A[3]) - rhs[67] * (-params.A[4]) - rhs[68] * (-params.A[5]) - rhs[69] * (-params.A[6]) -
             rhs[70] * (-params.A[7]) - rhs[71] * (-params.A[8]);
  lhs[179] = -rhs[55] * (1) - rhs[63] * (-params.A[9]) - rhs[64] * (-params.A[10]) - rhs[65] * (-params.A[11]) -
             rhs[66] * (-params.A[12]) - rhs[67] * (-params.A[13]) - rhs[68] * (-params.A[14]) -
             rhs[69] * (-params.A[15]) - rhs[70] * (-params.A[16]) - rhs[71] * (-params.A[17]);
  lhs[180] = -rhs[56] * (1) - rhs[63] * (-params.A[18]) - rhs[64] * (-params.A[19]) - rhs[65] * (-params.A[20]) -
             rhs[66] * (-params.A[21]) - rhs[67] * (-params.A[22]) - rhs[68] * (-params.A[23]) -
             rhs[69] * (-params.A[24]) - rhs[70] * (-params.A[25]) - rhs[71] * (-params.A[26]);
  lhs[181] = -rhs[57] * (1) - rhs[63] * (-params.A[27]) - rhs[64] * (-params.A[28]) - rhs[65] * (-params.A[29]) -
             rhs[66] * (-params.A[30]) - rhs[67] * (-params.A[31]) - rhs[68] * (-params.A[32]) -
             rhs[69] * (-params.A[33]) - rhs[70] * (-params.A[34]) - rhs[71] * (-params.A[35]);
  lhs[182] = -rhs[58] * (1) - rhs[63] * (-params.A[36]) - rhs[64] * (-params.A[37]) - rhs[65] * (-params.A[38]) -
             rhs[66] * (-params.A[39]) - rhs[67] * (-params.A[40]) - rhs[68] * (-params.A[41]) -
             rhs[69] * (-params.A[42]) - rhs[70] * (-params.A[43]) - rhs[71] * (-params.A[44]);
  lhs[183] = -rhs[59] * (1) - rhs[63] * (-params.A[45]) - rhs[64] * (-params.A[46]) - rhs[65] * (-params.A[47]) -
             rhs[66] * (-params.A[48]) - rhs[67] * (-params.A[49]) - rhs[68] * (-params.A[50]) -
             rhs[69] * (-params.A[51]) - rhs[70] * (-params.A[52]) - rhs[71] * (-params.A[53]);
  lhs[184] = -rhs[60] * (1) - rhs[63] * (-params.A[54]) - rhs[64] * (-params.A[55]) - rhs[65] * (-params.A[56]) -
             rhs[66] * (-params.A[57]) - rhs[67] * (-params.A[58]) - rhs[68] * (-params.A[59]) -
             rhs[69] * (-params.A[60]) - rhs[70] * (-params.A[61]) - rhs[71] * (-params.A[62]);
  lhs[185] = -rhs[61] * (1) - rhs[63] * (-params.A[63]) - rhs[64] * (-params.A[64]) - rhs[65] * (-params.A[65]) -
             rhs[66] * (-params.A[66]) - rhs[67] * (-params.A[67]) - rhs[68] * (-params.A[68]) -
             rhs[69] * (-params.A[69]) - rhs[70] * (-params.A[70]) - rhs[71] * (-params.A[71]);
  lhs[186] = -rhs[62] * (1) - rhs[63] * (-params.A[72]) - rhs[64] * (-params.A[73]) - rhs[65] * (-params.A[74]) -
             rhs[66] * (-params.A[75]) - rhs[67] * (-params.A[76]) - rhs[68] * (-params.A[77]) -
             rhs[69] * (-params.A[78]) - rhs[70] * (-params.A[79]) - rhs[71] * (-params.A[80]);
  lhs[187] = -rhs[63] * (1) - rhs[72] * (-params.A[0]) - rhs[73] * (-params.A[1]) - rhs[74] * (-params.A[2]) -
             rhs[75] * (-params.A[3]) - rhs[76] * (-params.A[4]) - rhs[77] * (-params.A[5]) - rhs[78] * (-params.A[6]) -
             rhs[79] * (-params.A[7]) - rhs[80] * (-params.A[8]);
  lhs[188] = -rhs[64] * (1) - rhs[72] * (-params.A[9]) - rhs[73] * (-params.A[10]) - rhs[74] * (-params.A[11]) -
             rhs[75] * (-params.A[12]) - rhs[76] * (-params.A[13]) - rhs[77] * (-params.A[14]) -
             rhs[78] * (-params.A[15]) - rhs[79] * (-params.A[16]) - rhs[80] * (-params.A[17]);
  lhs[189] = -rhs[65] * (1) - rhs[72] * (-params.A[18]) - rhs[73] * (-params.A[19]) - rhs[74] * (-params.A[20]) -
             rhs[75] * (-params.A[21]) - rhs[76] * (-params.A[22]) - rhs[77] * (-params.A[23]) -
             rhs[78] * (-params.A[24]) - rhs[79] * (-params.A[25]) - rhs[80] * (-params.A[26]);
  lhs[190] = -rhs[66] * (1) - rhs[72] * (-params.A[27]) - rhs[73] * (-params.A[28]) - rhs[74] * (-params.A[29]) -
             rhs[75] * (-params.A[30]) - rhs[76] * (-params.A[31]) - rhs[77] * (-params.A[32]) -
             rhs[78] * (-params.A[33]) - rhs[79] * (-params.A[34]) - rhs[80] * (-params.A[35]);
  lhs[191] = -rhs[67] * (1) - rhs[72] * (-params.A[36]) - rhs[73] * (-params.A[37]) - rhs[74] * (-params.A[38]) -
             rhs[75] * (-params.A[39]) - rhs[76] * (-params.A[40]) - rhs[77] * (-params.A[41]) -
             rhs[78] * (-params.A[42]) - rhs[79] * (-params.A[43]) - rhs[80] * (-params.A[44]);
  lhs[192] = -rhs[68] * (1) - rhs[72] * (-params.A[45]) - rhs[73] * (-params.A[46]) - rhs[74] * (-params.A[47]) -
             rhs[75] * (-params.A[48]) - rhs[76] * (-params.A[49]) - rhs[77] * (-params.A[50]) -
             rhs[78] * (-params.A[51]) - rhs[79] * (-params.A[52]) - rhs[80] * (-params.A[53]);
  lhs[193] = -rhs[69] * (1) - rhs[72] * (-params.A[54]) - rhs[73] * (-params.A[55]) - rhs[74] * (-params.A[56]) -
             rhs[75] * (-params.A[57]) - rhs[76] * (-params.A[58]) - rhs[77] * (-params.A[59]) -
             rhs[78] * (-params.A[60]) - rhs[79] * (-params.A[61]) - rhs[80] * (-params.A[62]);
  lhs[194] = -rhs[70] * (1) - rhs[72] * (-params.A[63]) - rhs[73] * (-params.A[64]) - rhs[74] * (-params.A[65]) -
             rhs[75] * (-params.A[66]) - rhs[76] * (-params.A[67]) - rhs[77] * (-params.A[68]) -
             rhs[78] * (-params.A[69]) - rhs[79] * (-params.A[70]) - rhs[80] * (-params.A[71]);
  lhs[195] = -rhs[71] * (1) - rhs[72] * (-params.A[72]) - rhs[73] * (-params.A[73]) - rhs[74] * (-params.A[74]) -
             rhs[75] * (-params.A[75]) - rhs[76] * (-params.A[76]) - rhs[77] * (-params.A[77]) -
             rhs[78] * (-params.A[78]) - rhs[79] * (-params.A[79]) - rhs[80] * (-params.A[80]);
  lhs[196] = -rhs[72] * (1) - rhs[81] * (-params.A[0]) - rhs[82] * (-params.A[1]) - rhs[83] * (-params.A[2]) -
             rhs[84] * (-params.A[3]) - rhs[85] * (-params.A[4]) - rhs[86] * (-params.A[5]) - rhs[87] * (-params.A[6]) -
             rhs[88] * (-params.A[7]) - rhs[89] * (-params.A[8]);
  lhs[197] = -rhs[73] * (1) - rhs[81] * (-params.A[9]) - rhs[82] * (-params.A[10]) - rhs[83] * (-params.A[11]) -
             rhs[84] * (-params.A[12]) - rhs[85] * (-params.A[13]) - rhs[86] * (-params.A[14]) -
             rhs[87] * (-params.A[15]) - rhs[88] * (-params.A[16]) - rhs[89] * (-params.A[17]);
  lhs[198] = -rhs[74] * (1) - rhs[81] * (-params.A[18]) - rhs[82] * (-params.A[19]) - rhs[83] * (-params.A[20]) -
             rhs[84] * (-params.A[21]) - rhs[85] * (-params.A[22]) - rhs[86] * (-params.A[23]) -
             rhs[87] * (-params.A[24]) - rhs[88] * (-params.A[25]) - rhs[89] * (-params.A[26]);
  lhs[199] = -rhs[75] * (1) - rhs[81] * (-params.A[27]) - rhs[82] * (-params.A[28]) - rhs[83] * (-params.A[29]) -
             rhs[84] * (-params.A[30]) - rhs[85] * (-params.A[31]) - rhs[86] * (-params.A[32]) -
             rhs[87] * (-params.A[33]) - rhs[88] * (-params.A[34]) - rhs[89] * (-params.A[35]);
  lhs[200] = -rhs[76] * (1) - rhs[81] * (-params.A[36]) - rhs[82] * (-params.A[37]) - rhs[83] * (-params.A[38]) -
             rhs[84] * (-params.A[39]) - rhs[85] * (-params.A[40]) - rhs[86] * (-params.A[41]) -
             rhs[87] * (-params.A[42]) - rhs[88] * (-params.A[43]) - rhs[89] * (-params.A[44]);
  lhs[201] = -rhs[77] * (1) - rhs[81] * (-params.A[45]) - rhs[82] * (-params.A[46]) - rhs[83] * (-params.A[47]) -
             rhs[84] * (-params.A[48]) - rhs[85] * (-params.A[49]) - rhs[86] * (-params.A[50]) -
             rhs[87] * (-params.A[51]) - rhs[88] * (-params.A[52]) - rhs[89] * (-params.A[53]);
  lhs[202] = -rhs[78] * (1) - rhs[81] * (-params.A[54]) - rhs[82] * (-params.A[55]) - rhs[83] * (-params.A[56]) -
             rhs[84] * (-params.A[57]) - rhs[85] * (-params.A[58]) - rhs[86] * (-params.A[59]) -
             rhs[87] * (-params.A[60]) - rhs[88] * (-params.A[61]) - rhs[89] * (-params.A[62]);
  lhs[203] = -rhs[79] * (1) - rhs[81] * (-params.A[63]) - rhs[82] * (-params.A[64]) - rhs[83] * (-params.A[65]) -
             rhs[84] * (-params.A[66]) - rhs[85] * (-params.A[67]) - rhs[86] * (-params.A[68]) -
             rhs[87] * (-params.A[69]) - rhs[88] * (-params.A[70]) - rhs[89] * (-params.A[71]);
  lhs[204] = -rhs[80] * (1) - rhs[81] * (-params.A[72]) - rhs[82] * (-params.A[73]) - rhs[83] * (-params.A[74]) -
             rhs[84] * (-params.A[75]) - rhs[85] * (-params.A[76]) - rhs[86] * (-params.A[77]) -
             rhs[87] * (-params.A[78]) - rhs[88] * (-params.A[79]) - rhs[89] * (-params.A[80]);
  lhs[205] = -rhs[81] * (1);
  lhs[206] = -rhs[82] * (1);
  lhs[207] = -rhs[83] * (1);
  lhs[208] = -rhs[84] * (1);
  lhs[209] = -rhs[85] * (1);
  lhs[210] = -rhs[86] * (1);
  lhs[211] = -rhs[87] * (1);
  lhs[212] = -rhs[88] * (1);
  lhs[213] = -rhs[89] * (1);
}
void multbymG(double *lhs, double *rhs)
{
  lhs[0] = -rhs[0] * (1);
  lhs[1] = -rhs[0] * (-1) - rhs[91] * (1);
  lhs[2] = -rhs[0] * (-1) - rhs[92] * (1);
  lhs[3] = -rhs[0] * (-1) - rhs[93] * (1);
  lhs[4] = -rhs[0] * (-1) - rhs[91] * (-1);
  lhs[5] = -rhs[0] * (-1) - rhs[92] * (-1);
  lhs[6] = -rhs[0] * (-1) - rhs[93] * (-1);
  lhs[7] = -rhs[1] * (1);
  lhs[8] = -rhs[1] * (-1) - rhs[94] * (1);
  lhs[9] = -rhs[1] * (-1) - rhs[95] * (1);
  lhs[10] = -rhs[1] * (-1) - rhs[96] * (1);
  lhs[11] = -rhs[1] * (-1) - rhs[94] * (-1);
  lhs[12] = -rhs[1] * (-1) - rhs[95] * (-1);
  lhs[13] = -rhs[1] * (-1) - rhs[96] * (-1);
  lhs[14] = -rhs[2] * (1);
  lhs[15] = -rhs[2] * (-1) - rhs[97] * (1);
  lhs[16] = -rhs[2] * (-1) - rhs[98] * (1);
  lhs[17] = -rhs[2] * (-1) - rhs[99] * (1);
  lhs[18] = -rhs[2] * (-1) - rhs[97] * (-1);
  lhs[19] = -rhs[2] * (-1) - rhs[98] * (-1);
  lhs[20] = -rhs[2] * (-1) - rhs[99] * (-1);
  lhs[21] = -rhs[3] * (1);
  lhs[22] = -rhs[3] * (-1) - rhs[100] * (1);
  lhs[23] = -rhs[3] * (-1) - rhs[101] * (1);
  lhs[24] = -rhs[3] * (-1) - rhs[102] * (1);
  lhs[25] = -rhs[3] * (-1) - rhs[100] * (-1);
  lhs[26] = -rhs[3] * (-1) - rhs[101] * (-1);
  lhs[27] = -rhs[3] * (-1) - rhs[102] * (-1);
  lhs[28] = -rhs[4] * (1);
  lhs[29] = -rhs[4] * (-1) - rhs[103] * (1);
  lhs[30] = -rhs[4] * (-1) - rhs[104] * (1);
  lhs[31] = -rhs[4] * (-1) - rhs[105] * (1);
  lhs[32] = -rhs[4] * (-1) - rhs[103] * (-1);
  lhs[33] = -rhs[4] * (-1) - rhs[104] * (-1);
  lhs[34] = -rhs[4] * (-1) - rhs[105] * (-1);
  lhs[35] = -rhs[5] * (1);
  lhs[36] = -rhs[5] * (-1) - rhs[106] * (1);
  lhs[37] = -rhs[5] * (-1) - rhs[107] * (1);
  lhs[38] = -rhs[5] * (-1) - rhs[108] * (1);
  lhs[39] = -rhs[5] * (-1) - rhs[106] * (-1);
  lhs[40] = -rhs[5] * (-1) - rhs[107] * (-1);
  lhs[41] = -rhs[5] * (-1) - rhs[108] * (-1);
  lhs[42] = -rhs[6] * (1);
  lhs[43] = -rhs[6] * (-1) - rhs[109] * (1);
  lhs[44] = -rhs[6] * (-1) - rhs[110] * (1);
  lhs[45] = -rhs[6] * (-1) - rhs[111] * (1);
  lhs[46] = -rhs[6] * (-1) - rhs[109] * (-1);
  lhs[47] = -rhs[6] * (-1) - rhs[110] * (-1);
  lhs[48] = -rhs[6] * (-1) - rhs[111] * (-1);
  lhs[49] = -rhs[7] * (1);
  lhs[50] = -rhs[7] * (-1) - rhs[112] * (1);
  lhs[51] = -rhs[7] * (-1) - rhs[113] * (1);
  lhs[52] = -rhs[7] * (-1) - rhs[114] * (1);
  lhs[53] = -rhs[7] * (-1) - rhs[112] * (-1);
  lhs[54] = -rhs[7] * (-1) - rhs[113] * (-1);
  lhs[55] = -rhs[7] * (-1) - rhs[114] * (-1);
  lhs[56] = -rhs[8] * (1);
  lhs[57] = -rhs[8] * (-1) - rhs[115] * (1);
  lhs[58] = -rhs[8] * (-1) - rhs[116] * (1);
  lhs[59] = -rhs[8] * (-1) - rhs[117] * (1);
  lhs[60] = -rhs[8] * (-1) - rhs[115] * (-1);
  lhs[61] = -rhs[8] * (-1) - rhs[116] * (-1);
  lhs[62] = -rhs[8] * (-1) - rhs[117] * (-1);
  lhs[63] = -rhs[9] * (1);
  lhs[64] = -rhs[9] * (-1) - rhs[118] * (1);
  lhs[65] = -rhs[9] * (-1) - rhs[119] * (1);
  lhs[66] = -rhs[9] * (-1) - rhs[120] * (1);
  lhs[67] = -rhs[9] * (-1) - rhs[118] * (-1);
  lhs[68] = -rhs[9] * (-1) - rhs[119] * (-1);
  lhs[69] = -rhs[9] * (-1) - rhs[120] * (-1);
  lhs[70] = -rhs[10] * (1);
  lhs[71] = -rhs[10] * (-1) - rhs[121] * (1);
  lhs[72] = -rhs[10] * (-1) - rhs[122] * (1);
  lhs[73] = -rhs[10] * (-1) - rhs[123] * (1);
  lhs[74] = -rhs[10] * (-1) - rhs[121] * (-1);
  lhs[75] = -rhs[10] * (-1) - rhs[122] * (-1);
  lhs[76] = -rhs[10] * (-1) - rhs[123] * (-1);
  lhs[77] = -rhs[11] * (1);
  lhs[78] = -rhs[11] * (-1) - rhs[12] * (1);
  lhs[79] = -rhs[12] * (-1) - rhs[127] * (1);
  lhs[80] = -rhs[12] * (-1) - rhs[127] * (-1);
  lhs[81] = -rhs[11] * (-1) - rhs[13] * (1);
  lhs[82] = -rhs[13] * (-1) - rhs[128] * (1);
  lhs[83] = -rhs[13] * (-1) - rhs[128] * (-1);
  lhs[84] = -rhs[11] * (-1) - rhs[14] * (1);
  lhs[85] = -rhs[14] * (-1) - rhs[129] * (1);
  lhs[86] = -rhs[14] * (-1) - rhs[129] * (-1);
  lhs[87] = -rhs[15] * (1);
  lhs[88] = -rhs[15] * (-1) - rhs[16] * (1);
  lhs[89] = -rhs[16] * (-1) - rhs[136] * (1);
  lhs[90] = -rhs[16] * (-1) - rhs[136] * (-1);
  lhs[91] = -rhs[15] * (-1) - rhs[17] * (1);
  lhs[92] = -rhs[17] * (-1) - rhs[137] * (1);
  lhs[93] = -rhs[17] * (-1) - rhs[137] * (-1);
  lhs[94] = -rhs[15] * (-1) - rhs[18] * (1);
  lhs[95] = -rhs[18] * (-1) - rhs[138] * (1);
  lhs[96] = -rhs[18] * (-1) - rhs[138] * (-1);
  lhs[97] = -rhs[19] * (1);
  lhs[98] = -rhs[19] * (-1) - rhs[20] * (1);
  lhs[99] = -rhs[20] * (-1) - rhs[145] * (1);
  lhs[100] = -rhs[20] * (-1) - rhs[145] * (-1);
  lhs[101] = -rhs[19] * (-1) - rhs[21] * (1);
  lhs[102] = -rhs[21] * (-1) - rhs[146] * (1);
  lhs[103] = -rhs[21] * (-1) - rhs[146] * (-1);
  lhs[104] = -rhs[19] * (-1) - rhs[22] * (1);
  lhs[105] = -rhs[22] * (-1) - rhs[147] * (1);
  lhs[106] = -rhs[22] * (-1) - rhs[147] * (-1);
  lhs[107] = -rhs[23] * (1);
  lhs[108] = -rhs[23] * (-1) - rhs[24] * (1);
  lhs[109] = -rhs[24] * (-1) - rhs[154] * (1);
  lhs[110] = -rhs[24] * (-1) - rhs[154] * (-1);
  lhs[111] = -rhs[23] * (-1) - rhs[25] * (1);
  lhs[112] = -rhs[25] * (-1) - rhs[155] * (1);
  lhs[113] = -rhs[25] * (-1) - rhs[155] * (-1);
  lhs[114] = -rhs[23] * (-1) - rhs[26] * (1);
  lhs[115] = -rhs[26] * (-1) - rhs[156] * (1);
  lhs[116] = -rhs[26] * (-1) - rhs[156] * (-1);
  lhs[117] = -rhs[27] * (1);
  lhs[118] = -rhs[27] * (-1) - rhs[28] * (1);
  lhs[119] = -rhs[28] * (-1) - rhs[163] * (1);
  lhs[120] = -rhs[28] * (-1) - rhs[163] * (-1);
  lhs[121] = -rhs[27] * (-1) - rhs[29] * (1);
  lhs[122] = -rhs[29] * (-1) - rhs[164] * (1);
  lhs[123] = -rhs[29] * (-1) - rhs[164] * (-1);
  lhs[124] = -rhs[27] * (-1) - rhs[30] * (1);
  lhs[125] = -rhs[30] * (-1) - rhs[165] * (1);
  lhs[126] = -rhs[30] * (-1) - rhs[165] * (-1);
  lhs[127] = -rhs[31] * (1);
  lhs[128] = -rhs[31] * (-1) - rhs[32] * (1);
  lhs[129] = -rhs[32] * (-1) - rhs[172] * (1);
  lhs[130] = -rhs[32] * (-1) - rhs[172] * (-1);
  lhs[131] = -rhs[31] * (-1) - rhs[33] * (1);
  lhs[132] = -rhs[33] * (-1) - rhs[173] * (1);
  lhs[133] = -rhs[33] * (-1) - rhs[173] * (-1);
  lhs[134] = -rhs[31] * (-1) - rhs[34] * (1);
  lhs[135] = -rhs[34] * (-1) - rhs[174] * (1);
  lhs[136] = -rhs[34] * (-1) - rhs[174] * (-1);
  lhs[137] = -rhs[35] * (1);
  lhs[138] = -rhs[35] * (-1) - rhs[36] * (1);
  lhs[139] = -rhs[36] * (-1) - rhs[181] * (1);
  lhs[140] = -rhs[36] * (-1) - rhs[181] * (-1);
  lhs[141] = -rhs[35] * (-1) - rhs[37] * (1);
  lhs[142] = -rhs[37] * (-1) - rhs[182] * (1);
  lhs[143] = -rhs[37] * (-1) - rhs[182] * (-1);
  lhs[144] = -rhs[35] * (-1) - rhs[38] * (1);
  lhs[145] = -rhs[38] * (-1) - rhs[183] * (1);
  lhs[146] = -rhs[38] * (-1) - rhs[183] * (-1);
  lhs[147] = -rhs[39] * (1);
  lhs[148] = -rhs[39] * (-1) - rhs[40] * (1);
  lhs[149] = -rhs[40] * (-1) - rhs[190] * (1);
  lhs[150] = -rhs[40] * (-1) - rhs[190] * (-1);
  lhs[151] = -rhs[39] * (-1) - rhs[41] * (1);
  lhs[152] = -rhs[41] * (-1) - rhs[191] * (1);
  lhs[153] = -rhs[41] * (-1) - rhs[191] * (-1);
  lhs[154] = -rhs[39] * (-1) - rhs[42] * (1);
  lhs[155] = -rhs[42] * (-1) - rhs[192] * (1);
  lhs[156] = -rhs[42] * (-1) - rhs[192] * (-1);
  lhs[157] = -rhs[43] * (1);
  lhs[158] = -rhs[43] * (-1) - rhs[44] * (1);
  lhs[159] = -rhs[44] * (-1) - rhs[199] * (1);
  lhs[160] = -rhs[44] * (-1) - rhs[199] * (-1);
  lhs[161] = -rhs[43] * (-1) - rhs[45] * (1);
  lhs[162] = -rhs[45] * (-1) - rhs[200] * (1);
  lhs[163] = -rhs[45] * (-1) - rhs[200] * (-1);
  lhs[164] = -rhs[43] * (-1) - rhs[46] * (1);
  lhs[165] = -rhs[46] * (-1) - rhs[201] * (1);
  lhs[166] = -rhs[46] * (-1) - rhs[201] * (-1);
  lhs[167] = -rhs[47] * (1);
  lhs[168] = -rhs[47] * (-1) - rhs[48] * (1);
  lhs[169] = -rhs[48] * (-1) - rhs[208] * (1);
  lhs[170] = -rhs[48] * (-1) - rhs[208] * (-1);
  lhs[171] = -rhs[47] * (-1) - rhs[49] * (1);
  lhs[172] = -rhs[49] * (-1) - rhs[209] * (1);
  lhs[173] = -rhs[49] * (-1) - rhs[209] * (-1);
  lhs[174] = -rhs[47] * (-1) - rhs[50] * (1);
  lhs[175] = -rhs[50] * (-1) - rhs[210] * (1);
  lhs[176] = -rhs[50] * (-1) - rhs[210] * (-1);
  lhs[177] = -rhs[51] * (1);
  lhs[178] = -rhs[51] * (-1) - rhs[52] * (1);
  lhs[179] = -rhs[52] * (-1) - rhs[130] * (1);
  lhs[180] = -rhs[52] * (-1) - rhs[130] * (-1);
  lhs[181] = -rhs[51] * (-1) - rhs[53] * (1);
  lhs[182] = -rhs[53] * (-1) - rhs[131] * (1);
  lhs[183] = -rhs[53] * (-1) - rhs[131] * (-1);
  lhs[184] = -rhs[51] * (-1) - rhs[54] * (1);
  lhs[185] = -rhs[54] * (-1) - rhs[132] * (1);
  lhs[186] = -rhs[54] * (-1) - rhs[132] * (-1);
  lhs[187] = -rhs[55] * (1);
  lhs[188] = -rhs[55] * (-1) - rhs[56] * (1);
  lhs[189] = -rhs[56] * (-1) - rhs[139] * (1);
  lhs[190] = -rhs[56] * (-1) - rhs[139] * (-1);
  lhs[191] = -rhs[55] * (-1) - rhs[57] * (1);
  lhs[192] = -rhs[57] * (-1) - rhs[140] * (1);
  lhs[193] = -rhs[57] * (-1) - rhs[140] * (-1);
  lhs[194] = -rhs[55] * (-1) - rhs[58] * (1);
  lhs[195] = -rhs[58] * (-1) - rhs[141] * (1);
  lhs[196] = -rhs[58] * (-1) - rhs[141] * (-1);
  lhs[197] = -rhs[59] * (1);
  lhs[198] = -rhs[59] * (-1) - rhs[60] * (1);
  lhs[199] = -rhs[60] * (-1) - rhs[148] * (1);
  lhs[200] = -rhs[60] * (-1) - rhs[148] * (-1);
  lhs[201] = -rhs[59] * (-1) - rhs[61] * (1);
  lhs[202] = -rhs[61] * (-1) - rhs[149] * (1);
  lhs[203] = -rhs[61] * (-1) - rhs[149] * (-1);
  lhs[204] = -rhs[59] * (-1) - rhs[62] * (1);
  lhs[205] = -rhs[62] * (-1) - rhs[150] * (1);
  lhs[206] = -rhs[62] * (-1) - rhs[150] * (-1);
  lhs[207] = -rhs[63] * (1);
  lhs[208] = -rhs[63] * (-1) - rhs[64] * (1);
  lhs[209] = -rhs[64] * (-1) - rhs[157] * (1);
  lhs[210] = -rhs[64] * (-1) - rhs[157] * (-1);
  lhs[211] = -rhs[63] * (-1) - rhs[65] * (1);
  lhs[212] = -rhs[65] * (-1) - rhs[158] * (1);
  lhs[213] = -rhs[65] * (-1) - rhs[158] * (-1);
  lhs[214] = -rhs[63] * (-1) - rhs[66] * (1);
  lhs[215] = -rhs[66] * (-1) - rhs[159] * (1);
  lhs[216] = -rhs[66] * (-1) - rhs[159] * (-1);
  lhs[217] = -rhs[67] * (1);
  lhs[218] = -rhs[67] * (-1) - rhs[68] * (1);
  lhs[219] = -rhs[68] * (-1) - rhs[166] * (1);
  lhs[220] = -rhs[68] * (-1) - rhs[166] * (-1);
  lhs[221] = -rhs[67] * (-1) - rhs[69] * (1);
  lhs[222] = -rhs[69] * (-1) - rhs[167] * (1);
  lhs[223] = -rhs[69] * (-1) - rhs[167] * (-1);
  lhs[224] = -rhs[67] * (-1) - rhs[70] * (1);
  lhs[225] = -rhs[70] * (-1) - rhs[168] * (1);
  lhs[226] = -rhs[70] * (-1) - rhs[168] * (-1);
  lhs[227] = -rhs[71] * (1);
  lhs[228] = -rhs[71] * (-1) - rhs[72] * (1);
  lhs[229] = -rhs[72] * (-1) - rhs[175] * (1);
  lhs[230] = -rhs[72] * (-1) - rhs[175] * (-1);
  lhs[231] = -rhs[71] * (-1) - rhs[73] * (1);
  lhs[232] = -rhs[73] * (-1) - rhs[176] * (1);
  lhs[233] = -rhs[73] * (-1) - rhs[176] * (-1);
  lhs[234] = -rhs[71] * (-1) - rhs[74] * (1);
  lhs[235] = -rhs[74] * (-1) - rhs[177] * (1);
  lhs[236] = -rhs[74] * (-1) - rhs[177] * (-1);
  lhs[237] = -rhs[75] * (1);
  lhs[238] = -rhs[75] * (-1) - rhs[76] * (1);
  lhs[239] = -rhs[76] * (-1) - rhs[184] * (1);
  lhs[240] = -rhs[76] * (-1) - rhs[184] * (-1);
  lhs[241] = -rhs[75] * (-1) - rhs[77] * (1);
  lhs[242] = -rhs[77] * (-1) - rhs[185] * (1);
  lhs[243] = -rhs[77] * (-1) - rhs[185] * (-1);
  lhs[244] = -rhs[75] * (-1) - rhs[78] * (1);
  lhs[245] = -rhs[78] * (-1) - rhs[186] * (1);
  lhs[246] = -rhs[78] * (-1) - rhs[186] * (-1);
  lhs[247] = -rhs[79] * (1);
  lhs[248] = -rhs[79] * (-1) - rhs[80] * (1);
  lhs[249] = -rhs[80] * (-1) - rhs[193] * (1);
  lhs[250] = -rhs[80] * (-1) - rhs[193] * (-1);
  lhs[251] = -rhs[79] * (-1) - rhs[81] * (1);
  lhs[252] = -rhs[81] * (-1) - rhs[194] * (1);
  lhs[253] = -rhs[81] * (-1) - rhs[194] * (-1);
  lhs[254] = -rhs[79] * (-1) - rhs[82] * (1);
  lhs[255] = -rhs[82] * (-1) - rhs[195] * (1);
  lhs[256] = -rhs[82] * (-1) - rhs[195] * (-1);
  lhs[257] = -rhs[83] * (1);
  lhs[258] = -rhs[83] * (-1) - rhs[84] * (1);
  lhs[259] = -rhs[84] * (-1) - rhs[202] * (1);
  lhs[260] = -rhs[84] * (-1) - rhs[202] * (-1);
  lhs[261] = -rhs[83] * (-1) - rhs[85] * (1);
  lhs[262] = -rhs[85] * (-1) - rhs[203] * (1);
  lhs[263] = -rhs[85] * (-1) - rhs[203] * (-1);
  lhs[264] = -rhs[83] * (-1) - rhs[86] * (1);
  lhs[265] = -rhs[86] * (-1) - rhs[204] * (1);
  lhs[266] = -rhs[86] * (-1) - rhs[204] * (-1);
  lhs[267] = -rhs[87] * (1);
  lhs[268] = -rhs[87] * (-1) - rhs[88] * (1);
  lhs[269] = -rhs[88] * (-1) - rhs[211] * (1);
  lhs[270] = -rhs[88] * (-1) - rhs[211] * (-1);
  lhs[271] = -rhs[87] * (-1) - rhs[89] * (1);
  lhs[272] = -rhs[89] * (-1) - rhs[212] * (1);
  lhs[273] = -rhs[89] * (-1) - rhs[212] * (-1);
  lhs[274] = -rhs[87] * (-1) - rhs[90] * (1);
  lhs[275] = -rhs[90] * (-1) - rhs[213] * (1);
  lhs[276] = -rhs[90] * (-1) - rhs[213] * (-1);
}
void multbymGT(double *lhs, double *rhs)
{
  lhs[0] =
      -rhs[0] * (1) - rhs[1] * (-1) - rhs[2] * (-1) - rhs[3] * (-1) - rhs[4] * (-1) - rhs[5] * (-1) - rhs[6] * (-1);
  lhs[1] =
      -rhs[7] * (1) - rhs[8] * (-1) - rhs[9] * (-1) - rhs[10] * (-1) - rhs[11] * (-1) - rhs[12] * (-1) - rhs[13] * (-1);
  lhs[2] = -rhs[14] * (1) - rhs[15] * (-1) - rhs[16] * (-1) - rhs[17] * (-1) - rhs[18] * (-1) - rhs[19] * (-1) -
           rhs[20] * (-1);
  lhs[3] = -rhs[21] * (1) - rhs[22] * (-1) - rhs[23] * (-1) - rhs[24] * (-1) - rhs[25] * (-1) - rhs[26] * (-1) -
           rhs[27] * (-1);
  lhs[4] = -rhs[28] * (1) - rhs[29] * (-1) - rhs[30] * (-1) - rhs[31] * (-1) - rhs[32] * (-1) - rhs[33] * (-1) -
           rhs[34] * (-1);
  lhs[5] = -rhs[35] * (1) - rhs[36] * (-1) - rhs[37] * (-1) - rhs[38] * (-1) - rhs[39] * (-1) - rhs[40] * (-1) -
           rhs[41] * (-1);
  lhs[6] = -rhs[42] * (1) - rhs[43] * (-1) - rhs[44] * (-1) - rhs[45] * (-1) - rhs[46] * (-1) - rhs[47] * (-1) -
           rhs[48] * (-1);
  lhs[7] = -rhs[49] * (1) - rhs[50] * (-1) - rhs[51] * (-1) - rhs[52] * (-1) - rhs[53] * (-1) - rhs[54] * (-1) -
           rhs[55] * (-1);
  lhs[8] = -rhs[56] * (1) - rhs[57] * (-1) - rhs[58] * (-1) - rhs[59] * (-1) - rhs[60] * (-1) - rhs[61] * (-1) -
           rhs[62] * (-1);
  lhs[9] = -rhs[63] * (1) - rhs[64] * (-1) - rhs[65] * (-1) - rhs[66] * (-1) - rhs[67] * (-1) - rhs[68] * (-1) -
           rhs[69] * (-1);
  lhs[10] = -rhs[70] * (1) - rhs[71] * (-1) - rhs[72] * (-1) - rhs[73] * (-1) - rhs[74] * (-1) - rhs[75] * (-1) -
            rhs[76] * (-1);
  lhs[11] = -rhs[77] * (1) - rhs[78] * (-1) - rhs[81] * (-1) - rhs[84] * (-1);
  lhs[12] = -rhs[78] * (1) - rhs[79] * (-1) - rhs[80] * (-1);
  lhs[13] = -rhs[81] * (1) - rhs[82] * (-1) - rhs[83] * (-1);
  lhs[14] = -rhs[84] * (1) - rhs[85] * (-1) - rhs[86] * (-1);
  lhs[15] = -rhs[87] * (1) - rhs[88] * (-1) - rhs[91] * (-1) - rhs[94] * (-1);
  lhs[16] = -rhs[88] * (1) - rhs[89] * (-1) - rhs[90] * (-1);
  lhs[17] = -rhs[91] * (1) - rhs[92] * (-1) - rhs[93] * (-1);
  lhs[18] = -rhs[94] * (1) - rhs[95] * (-1) - rhs[96] * (-1);
  lhs[19] = -rhs[97] * (1) - rhs[98] * (-1) - rhs[101] * (-1) - rhs[104] * (-1);
  lhs[20] = -rhs[98] * (1) - rhs[99] * (-1) - rhs[100] * (-1);
  lhs[21] = -rhs[101] * (1) - rhs[102] * (-1) - rhs[103] * (-1);
  lhs[22] = -rhs[104] * (1) - rhs[105] * (-1) - rhs[106] * (-1);
  lhs[23] = -rhs[107] * (1) - rhs[108] * (-1) - rhs[111] * (-1) - rhs[114] * (-1);
  lhs[24] = -rhs[108] * (1) - rhs[109] * (-1) - rhs[110] * (-1);
  lhs[25] = -rhs[111] * (1) - rhs[112] * (-1) - rhs[113] * (-1);
  lhs[26] = -rhs[114] * (1) - rhs[115] * (-1) - rhs[116] * (-1);
  lhs[27] = -rhs[117] * (1) - rhs[118] * (-1) - rhs[121] * (-1) - rhs[124] * (-1);
  lhs[28] = -rhs[118] * (1) - rhs[119] * (-1) - rhs[120] * (-1);
  lhs[29] = -rhs[121] * (1) - rhs[122] * (-1) - rhs[123] * (-1);
  lhs[30] = -rhs[124] * (1) - rhs[125] * (-1) - rhs[126] * (-1);
  lhs[31] = -rhs[127] * (1) - rhs[128] * (-1) - rhs[131] * (-1) - rhs[134] * (-1);
  lhs[32] = -rhs[128] * (1) - rhs[129] * (-1) - rhs[130] * (-1);
  lhs[33] = -rhs[131] * (1) - rhs[132] * (-1) - rhs[133] * (-1);
  lhs[34] = -rhs[134] * (1) - rhs[135] * (-1) - rhs[136] * (-1);
  lhs[35] = -rhs[137] * (1) - rhs[138] * (-1) - rhs[141] * (-1) - rhs[144] * (-1);
  lhs[36] = -rhs[138] * (1) - rhs[139] * (-1) - rhs[140] * (-1);
  lhs[37] = -rhs[141] * (1) - rhs[142] * (-1) - rhs[143] * (-1);
  lhs[38] = -rhs[144] * (1) - rhs[145] * (-1) - rhs[146] * (-1);
  lhs[39] = -rhs[147] * (1) - rhs[148] * (-1) - rhs[151] * (-1) - rhs[154] * (-1);
  lhs[40] = -rhs[148] * (1) - rhs[149] * (-1) - rhs[150] * (-1);
  lhs[41] = -rhs[151] * (1) - rhs[152] * (-1) - rhs[153] * (-1);
  lhs[42] = -rhs[154] * (1) - rhs[155] * (-1) - rhs[156] * (-1);
  lhs[43] = -rhs[157] * (1) - rhs[158] * (-1) - rhs[161] * (-1) - rhs[164] * (-1);
  lhs[44] = -rhs[158] * (1) - rhs[159] * (-1) - rhs[160] * (-1);
  lhs[45] = -rhs[161] * (1) - rhs[162] * (-1) - rhs[163] * (-1);
  lhs[46] = -rhs[164] * (1) - rhs[165] * (-1) - rhs[166] * (-1);
  lhs[47] = -rhs[167] * (1) - rhs[168] * (-1) - rhs[171] * (-1) - rhs[174] * (-1);
  lhs[48] = -rhs[168] * (1) - rhs[169] * (-1) - rhs[170] * (-1);
  lhs[49] = -rhs[171] * (1) - rhs[172] * (-1) - rhs[173] * (-1);
  lhs[50] = -rhs[174] * (1) - rhs[175] * (-1) - rhs[176] * (-1);
  lhs[51] = -rhs[177] * (1) - rhs[178] * (-1) - rhs[181] * (-1) - rhs[184] * (-1);
  lhs[52] = -rhs[178] * (1) - rhs[179] * (-1) - rhs[180] * (-1);
  lhs[53] = -rhs[181] * (1) - rhs[182] * (-1) - rhs[183] * (-1);
  lhs[54] = -rhs[184] * (1) - rhs[185] * (-1) - rhs[186] * (-1);
  lhs[55] = -rhs[187] * (1) - rhs[188] * (-1) - rhs[191] * (-1) - rhs[194] * (-1);
  lhs[56] = -rhs[188] * (1) - rhs[189] * (-1) - rhs[190] * (-1);
  lhs[57] = -rhs[191] * (1) - rhs[192] * (-1) - rhs[193] * (-1);
  lhs[58] = -rhs[194] * (1) - rhs[195] * (-1) - rhs[196] * (-1);
  lhs[59] = -rhs[197] * (1) - rhs[198] * (-1) - rhs[201] * (-1) - rhs[204] * (-1);
  lhs[60] = -rhs[198] * (1) - rhs[199] * (-1) - rhs[200] * (-1);
  lhs[61] = -rhs[201] * (1) - rhs[202] * (-1) - rhs[203] * (-1);
  lhs[62] = -rhs[204] * (1) - rhs[205] * (-1) - rhs[206] * (-1);
  lhs[63] = -rhs[207] * (1) - rhs[208] * (-1) - rhs[211] * (-1) - rhs[214] * (-1);
  lhs[64] = -rhs[208] * (1) - rhs[209] * (-1) - rhs[210] * (-1);
  lhs[65] = -rhs[211] * (1) - rhs[212] * (-1) - rhs[213] * (-1);
  lhs[66] = -rhs[214] * (1) - rhs[215] * (-1) - rhs[216] * (-1);
  lhs[67] = -rhs[217] * (1) - rhs[218] * (-1) - rhs[221] * (-1) - rhs[224] * (-1);
  lhs[68] = -rhs[218] * (1) - rhs[219] * (-1) - rhs[220] * (-1);
  lhs[69] = -rhs[221] * (1) - rhs[222] * (-1) - rhs[223] * (-1);
  lhs[70] = -rhs[224] * (1) - rhs[225] * (-1) - rhs[226] * (-1);
  lhs[71] = -rhs[227] * (1) - rhs[228] * (-1) - rhs[231] * (-1) - rhs[234] * (-1);
  lhs[72] = -rhs[228] * (1) - rhs[229] * (-1) - rhs[230] * (-1);
  lhs[73] = -rhs[231] * (1) - rhs[232] * (-1) - rhs[233] * (-1);
  lhs[74] = -rhs[234] * (1) - rhs[235] * (-1) - rhs[236] * (-1);
  lhs[75] = -rhs[237] * (1) - rhs[238] * (-1) - rhs[241] * (-1) - rhs[244] * (-1);
  lhs[76] = -rhs[238] * (1) - rhs[239] * (-1) - rhs[240] * (-1);
  lhs[77] = -rhs[241] * (1) - rhs[242] * (-1) - rhs[243] * (-1);
  lhs[78] = -rhs[244] * (1) - rhs[245] * (-1) - rhs[246] * (-1);
  lhs[79] = -rhs[247] * (1) - rhs[248] * (-1) - rhs[251] * (-1) - rhs[254] * (-1);
  lhs[80] = -rhs[248] * (1) - rhs[249] * (-1) - rhs[250] * (-1);
  lhs[81] = -rhs[251] * (1) - rhs[252] * (-1) - rhs[253] * (-1);
  lhs[82] = -rhs[254] * (1) - rhs[255] * (-1) - rhs[256] * (-1);
  lhs[83] = -rhs[257] * (1) - rhs[258] * (-1) - rhs[261] * (-1) - rhs[264] * (-1);
  lhs[84] = -rhs[258] * (1) - rhs[259] * (-1) - rhs[260] * (-1);
  lhs[85] = -rhs[261] * (1) - rhs[262] * (-1) - rhs[263] * (-1);
  lhs[86] = -rhs[264] * (1) - rhs[265] * (-1) - rhs[266] * (-1);
  lhs[87] = -rhs[267] * (1) - rhs[268] * (-1) - rhs[271] * (-1) - rhs[274] * (-1);
  lhs[88] = -rhs[268] * (1) - rhs[269] * (-1) - rhs[270] * (-1);
  lhs[89] = -rhs[271] * (1) - rhs[272] * (-1) - rhs[273] * (-1);
  lhs[90] = -rhs[274] * (1) - rhs[275] * (-1) - rhs[276] * (-1);
  lhs[91] = -rhs[1] * (1) - rhs[4] * (-1);
  lhs[92] = -rhs[2] * (1) - rhs[5] * (-1);
  lhs[93] = -rhs[3] * (1) - rhs[6] * (-1);
  lhs[94] = -rhs[8] * (1) - rhs[11] * (-1);
  lhs[95] = -rhs[9] * (1) - rhs[12] * (-1);
  lhs[96] = -rhs[10] * (1) - rhs[13] * (-1);
  lhs[97] = -rhs[15] * (1) - rhs[18] * (-1);
  lhs[98] = -rhs[16] * (1) - rhs[19] * (-1);
  lhs[99] = -rhs[17] * (1) - rhs[20] * (-1);
  lhs[100] = -rhs[22] * (1) - rhs[25] * (-1);
  lhs[101] = -rhs[23] * (1) - rhs[26] * (-1);
  lhs[102] = -rhs[24] * (1) - rhs[27] * (-1);
  lhs[103] = -rhs[29] * (1) - rhs[32] * (-1);
  lhs[104] = -rhs[30] * (1) - rhs[33] * (-1);
  lhs[105] = -rhs[31] * (1) - rhs[34] * (-1);
  lhs[106] = -rhs[36] * (1) - rhs[39] * (-1);
  lhs[107] = -rhs[37] * (1) - rhs[40] * (-1);
  lhs[108] = -rhs[38] * (1) - rhs[41] * (-1);
  lhs[109] = -rhs[43] * (1) - rhs[46] * (-1);
  lhs[110] = -rhs[44] * (1) - rhs[47] * (-1);
  lhs[111] = -rhs[45] * (1) - rhs[48] * (-1);
  lhs[112] = -rhs[50] * (1) - rhs[53] * (-1);
  lhs[113] = -rhs[51] * (1) - rhs[54] * (-1);
  lhs[114] = -rhs[52] * (1) - rhs[55] * (-1);
  lhs[115] = -rhs[57] * (1) - rhs[60] * (-1);
  lhs[116] = -rhs[58] * (1) - rhs[61] * (-1);
  lhs[117] = -rhs[59] * (1) - rhs[62] * (-1);
  lhs[118] = -rhs[64] * (1) - rhs[67] * (-1);
  lhs[119] = -rhs[65] * (1) - rhs[68] * (-1);
  lhs[120] = -rhs[66] * (1) - rhs[69] * (-1);
  lhs[121] = -rhs[71] * (1) - rhs[74] * (-1);
  lhs[122] = -rhs[72] * (1) - rhs[75] * (-1);
  lhs[123] = -rhs[73] * (1) - rhs[76] * (-1);
  lhs[124] = 0;
  lhs[125] = 0;
  lhs[126] = 0;
  lhs[127] = -rhs[79] * (1) - rhs[80] * (-1);
  lhs[128] = -rhs[82] * (1) - rhs[83] * (-1);
  lhs[129] = -rhs[85] * (1) - rhs[86] * (-1);
  lhs[130] = -rhs[179] * (1) - rhs[180] * (-1);
  lhs[131] = -rhs[182] * (1) - rhs[183] * (-1);
  lhs[132] = -rhs[185] * (1) - rhs[186] * (-1);
  lhs[133] = 0;
  lhs[134] = 0;
  lhs[135] = 0;
  lhs[136] = -rhs[89] * (1) - rhs[90] * (-1);
  lhs[137] = -rhs[92] * (1) - rhs[93] * (-1);
  lhs[138] = -rhs[95] * (1) - rhs[96] * (-1);
  lhs[139] = -rhs[189] * (1) - rhs[190] * (-1);
  lhs[140] = -rhs[192] * (1) - rhs[193] * (-1);
  lhs[141] = -rhs[195] * (1) - rhs[196] * (-1);
  lhs[142] = 0;
  lhs[143] = 0;
  lhs[144] = 0;
  lhs[145] = -rhs[99] * (1) - rhs[100] * (-1);
  lhs[146] = -rhs[102] * (1) - rhs[103] * (-1);
  lhs[147] = -rhs[105] * (1) - rhs[106] * (-1);
  lhs[148] = -rhs[199] * (1) - rhs[200] * (-1);
  lhs[149] = -rhs[202] * (1) - rhs[203] * (-1);
  lhs[150] = -rhs[205] * (1) - rhs[206] * (-1);
  lhs[151] = 0;
  lhs[152] = 0;
  lhs[153] = 0;
  lhs[154] = -rhs[109] * (1) - rhs[110] * (-1);
  lhs[155] = -rhs[112] * (1) - rhs[113] * (-1);
  lhs[156] = -rhs[115] * (1) - rhs[116] * (-1);
  lhs[157] = -rhs[209] * (1) - rhs[210] * (-1);
  lhs[158] = -rhs[212] * (1) - rhs[213] * (-1);
  lhs[159] = -rhs[215] * (1) - rhs[216] * (-1);
  lhs[160] = 0;
  lhs[161] = 0;
  lhs[162] = 0;
  lhs[163] = -rhs[119] * (1) - rhs[120] * (-1);
  lhs[164] = -rhs[122] * (1) - rhs[123] * (-1);
  lhs[165] = -rhs[125] * (1) - rhs[126] * (-1);
  lhs[166] = -rhs[219] * (1) - rhs[220] * (-1);
  lhs[167] = -rhs[222] * (1) - rhs[223] * (-1);
  lhs[168] = -rhs[225] * (1) - rhs[226] * (-1);
  lhs[169] = 0;
  lhs[170] = 0;
  lhs[171] = 0;
  lhs[172] = -rhs[129] * (1) - rhs[130] * (-1);
  lhs[173] = -rhs[132] * (1) - rhs[133] * (-1);
  lhs[174] = -rhs[135] * (1) - rhs[136] * (-1);
  lhs[175] = -rhs[229] * (1) - rhs[230] * (-1);
  lhs[176] = -rhs[232] * (1) - rhs[233] * (-1);
  lhs[177] = -rhs[235] * (1) - rhs[236] * (-1);
  lhs[178] = 0;
  lhs[179] = 0;
  lhs[180] = 0;
  lhs[181] = -rhs[139] * (1) - rhs[140] * (-1);
  lhs[182] = -rhs[142] * (1) - rhs[143] * (-1);
  lhs[183] = -rhs[145] * (1) - rhs[146] * (-1);
  lhs[184] = -rhs[239] * (1) - rhs[240] * (-1);
  lhs[185] = -rhs[242] * (1) - rhs[243] * (-1);
  lhs[186] = -rhs[245] * (1) - rhs[246] * (-1);
  lhs[187] = 0;
  lhs[188] = 0;
  lhs[189] = 0;
  lhs[190] = -rhs[149] * (1) - rhs[150] * (-1);
  lhs[191] = -rhs[152] * (1) - rhs[153] * (-1);
  lhs[192] = -rhs[155] * (1) - rhs[156] * (-1);
  lhs[193] = -rhs[249] * (1) - rhs[250] * (-1);
  lhs[194] = -rhs[252] * (1) - rhs[253] * (-1);
  lhs[195] = -rhs[255] * (1) - rhs[256] * (-1);
  lhs[196] = 0;
  lhs[197] = 0;
  lhs[198] = 0;
  lhs[199] = -rhs[159] * (1) - rhs[160] * (-1);
  lhs[200] = -rhs[162] * (1) - rhs[163] * (-1);
  lhs[201] = -rhs[165] * (1) - rhs[166] * (-1);
  lhs[202] = -rhs[259] * (1) - rhs[260] * (-1);
  lhs[203] = -rhs[262] * (1) - rhs[263] * (-1);
  lhs[204] = -rhs[265] * (1) - rhs[266] * (-1);
  lhs[205] = 0;
  lhs[206] = 0;
  lhs[207] = 0;
  lhs[208] = -rhs[169] * (1) - rhs[170] * (-1);
  lhs[209] = -rhs[172] * (1) - rhs[173] * (-1);
  lhs[210] = -rhs[175] * (1) - rhs[176] * (-1);
  lhs[211] = -rhs[269] * (1) - rhs[270] * (-1);
  lhs[212] = -rhs[272] * (1) - rhs[273] * (-1);
  lhs[213] = -rhs[275] * (1) - rhs[276] * (-1);
}
void multbyP(double *lhs, double *rhs)
{
  /* TODO use the fact that P is symmetric? */
  /* TODO check doubling / half factor etc. */
  lhs[0] = 0;
  lhs[1] = 0;
  lhs[2] = 0;
  lhs[3] = 0;
  lhs[4] = 0;
  lhs[5] = 0;
  lhs[6] = 0;
  lhs[7] = 0;
  lhs[8] = 0;
  lhs[9] = 0;
  lhs[10] = 0;
  lhs[11] = 0;
  lhs[12] = 0;
  lhs[13] = 0;
  lhs[14] = 0;
  lhs[15] = 0;
  lhs[16] = 0;
  lhs[17] = 0;
  lhs[18] = 0;
  lhs[19] = 0;
  lhs[20] = 0;
  lhs[21] = 0;
  lhs[22] = 0;
  lhs[23] = 0;
  lhs[24] = 0;
  lhs[25] = 0;
  lhs[26] = 0;
  lhs[27] = 0;
  lhs[28] = 0;
  lhs[29] = 0;
  lhs[30] = 0;
  lhs[31] = 0;
  lhs[32] = 0;
  lhs[33] = 0;
  lhs[34] = 0;
  lhs[35] = 0;
  lhs[36] = 0;
  lhs[37] = 0;
  lhs[38] = 0;
  lhs[39] = 0;
  lhs[40] = 0;
  lhs[41] = 0;
  lhs[42] = 0;
  lhs[43] = 0;
  lhs[44] = 0;
  lhs[45] = 0;
  lhs[46] = 0;
  lhs[47] = 0;
  lhs[48] = 0;
  lhs[49] = 0;
  lhs[50] = 0;
  lhs[51] = 0;
  lhs[52] = 0;
  lhs[53] = 0;
  lhs[54] = 0;
  lhs[55] = 0;
  lhs[56] = 0;
  lhs[57] = 0;
  lhs[58] = 0;
  lhs[59] = 0;
  lhs[60] = 0;
  lhs[61] = 0;
  lhs[62] = 0;
  lhs[63] = 0;
  lhs[64] = 0;
  lhs[65] = 0;
  lhs[66] = 0;
  lhs[67] = 0;
  lhs[68] = 0;
  lhs[69] = 0;
  lhs[70] = 0;
  lhs[71] = 0;
  lhs[72] = 0;
  lhs[73] = 0;
  lhs[74] = 0;
  lhs[75] = 0;
  lhs[76] = 0;
  lhs[77] = 0;
  lhs[78] = 0;
  lhs[79] = 0;
  lhs[80] = 0;
  lhs[81] = 0;
  lhs[82] = 0;
  lhs[83] = 0;
  lhs[84] = 0;
  lhs[85] = 0;
  lhs[86] = 0;
  lhs[87] = 0;
  lhs[88] = 0;
  lhs[89] = 0;
  lhs[90] = 0;
  lhs[91] = rhs[91] * (2);
  lhs[92] = rhs[92] * (2);
  lhs[93] = rhs[93] * (2);
  lhs[94] = rhs[94] * (2);
  lhs[95] = rhs[95] * (2);
  lhs[96] = rhs[96] * (2);
  lhs[97] = rhs[97] * (2);
  lhs[98] = rhs[98] * (2);
  lhs[99] = rhs[99] * (2);
  lhs[100] = rhs[100] * (2);
  lhs[101] = rhs[101] * (2);
  lhs[102] = rhs[102] * (2);
  lhs[103] = rhs[103] * (2);
  lhs[104] = rhs[104] * (2);
  lhs[105] = rhs[105] * (2);
  lhs[106] = rhs[106] * (2);
  lhs[107] = rhs[107] * (2);
  lhs[108] = rhs[108] * (2);
  lhs[109] = rhs[109] * (2);
  lhs[110] = rhs[110] * (2);
  lhs[111] = rhs[111] * (2);
  lhs[112] = rhs[112] * (2);
  lhs[113] = rhs[113] * (2);
  lhs[114] = rhs[114] * (2);
  lhs[115] = rhs[115] * (2);
  lhs[116] = rhs[116] * (2);
  lhs[117] = rhs[117] * (2);
  lhs[118] = rhs[118] * (2);
  lhs[119] = rhs[119] * (2);
  lhs[120] = rhs[120] * (2);
  lhs[121] = 0;
  lhs[122] = 0;
  lhs[123] = 0;
  lhs[124] = 0;
  lhs[125] = 0;
  lhs[126] = 0;
  lhs[127] = 0;
  lhs[128] = 0;
  lhs[129] = 0;
  lhs[130] = 0;
  lhs[131] = 0;
  lhs[132] = 0;
  lhs[133] = 0;
  lhs[134] = 0;
  lhs[135] = 0;
  lhs[136] = 0;
  lhs[137] = 0;
  lhs[138] = 0;
  lhs[139] = 0;
  lhs[140] = 0;
  lhs[141] = 0;
  lhs[142] = 0;
  lhs[143] = 0;
  lhs[144] = 0;
  lhs[145] = 0;
  lhs[146] = 0;
  lhs[147] = 0;
  lhs[148] = 0;
  lhs[149] = 0;
  lhs[150] = 0;
  lhs[151] = 0;
  lhs[152] = 0;
  lhs[153] = 0;
  lhs[154] = 0;
  lhs[155] = 0;
  lhs[156] = 0;
  lhs[157] = 0;
  lhs[158] = 0;
  lhs[159] = 0;
  lhs[160] = 0;
  lhs[161] = 0;
  lhs[162] = 0;
  lhs[163] = 0;
  lhs[164] = 0;
  lhs[165] = 0;
  lhs[166] = 0;
  lhs[167] = 0;
  lhs[168] = 0;
  lhs[169] = 0;
  lhs[170] = 0;
  lhs[171] = 0;
  lhs[172] = 0;
  lhs[173] = 0;
  lhs[174] = 0;
  lhs[175] = 0;
  lhs[176] = 0;
  lhs[177] = 0;
  lhs[178] = 0;
  lhs[179] = 0;
  lhs[180] = 0;
  lhs[181] = 0;
  lhs[182] = 0;
  lhs[183] = 0;
  lhs[184] = 0;
  lhs[185] = 0;
  lhs[186] = 0;
  lhs[187] = 0;
  lhs[188] = 0;
  lhs[189] = 0;
  lhs[190] = 0;
  lhs[191] = 0;
  lhs[192] = 0;
  lhs[193] = 0;
  lhs[194] = 0;
  lhs[195] = 0;
  lhs[196] = 0;
  lhs[197] = 0;
  lhs[198] = 0;
  lhs[199] = 0;
  lhs[200] = 0;
  lhs[201] = 0;
  lhs[202] = 0;
  lhs[203] = 0;
  lhs[204] = 0;
  lhs[205] =
      rhs[205] * (2 * params.Q_final[0]) + rhs[206] * (2 * params.Q_final[9]) + rhs[207] * (2 * params.Q_final[18]) +
      rhs[208] * (2 * params.Q_final[27]) + rhs[209] * (2 * params.Q_final[36]) + rhs[210] * (2 * params.Q_final[45]) +
      rhs[211] * (2 * params.Q_final[54]) + rhs[212] * (2 * params.Q_final[63]) + rhs[213] * (2 * params.Q_final[72]);
  lhs[206] =
      rhs[205] * (2 * params.Q_final[1]) + rhs[206] * (2 * params.Q_final[10]) + rhs[207] * (2 * params.Q_final[19]) +
      rhs[208] * (2 * params.Q_final[28]) + rhs[209] * (2 * params.Q_final[37]) + rhs[210] * (2 * params.Q_final[46]) +
      rhs[211] * (2 * params.Q_final[55]) + rhs[212] * (2 * params.Q_final[64]) + rhs[213] * (2 * params.Q_final[73]);
  lhs[207] =
      rhs[205] * (2 * params.Q_final[2]) + rhs[206] * (2 * params.Q_final[11]) + rhs[207] * (2 * params.Q_final[20]) +
      rhs[208] * (2 * params.Q_final[29]) + rhs[209] * (2 * params.Q_final[38]) + rhs[210] * (2 * params.Q_final[47]) +
      rhs[211] * (2 * params.Q_final[56]) + rhs[212] * (2 * params.Q_final[65]) + rhs[213] * (2 * params.Q_final[74]);
  lhs[208] =
      rhs[205] * (2 * params.Q_final[3]) + rhs[206] * (2 * params.Q_final[12]) + rhs[207] * (2 * params.Q_final[21]) +
      rhs[208] * (2 * params.Q_final[30]) + rhs[209] * (2 * params.Q_final[39]) + rhs[210] * (2 * params.Q_final[48]) +
      rhs[211] * (2 * params.Q_final[57]) + rhs[212] * (2 * params.Q_final[66]) + rhs[213] * (2 * params.Q_final[75]);
  lhs[209] =
      rhs[205] * (2 * params.Q_final[4]) + rhs[206] * (2 * params.Q_final[13]) + rhs[207] * (2 * params.Q_final[22]) +
      rhs[208] * (2 * params.Q_final[31]) + rhs[209] * (2 * params.Q_final[40]) + rhs[210] * (2 * params.Q_final[49]) +
      rhs[211] * (2 * params.Q_final[58]) + rhs[212] * (2 * params.Q_final[67]) + rhs[213] * (2 * params.Q_final[76]);
  lhs[210] =
      rhs[205] * (2 * params.Q_final[5]) + rhs[206] * (2 * params.Q_final[14]) + rhs[207] * (2 * params.Q_final[23]) +
      rhs[208] * (2 * params.Q_final[32]) + rhs[209] * (2 * params.Q_final[41]) + rhs[210] * (2 * params.Q_final[50]) +
      rhs[211] * (2 * params.Q_final[59]) + rhs[212] * (2 * params.Q_final[68]) + rhs[213] * (2 * params.Q_final[77]);
  lhs[211] =
      rhs[205] * (2 * params.Q_final[6]) + rhs[206] * (2 * params.Q_final[15]) + rhs[207] * (2 * params.Q_final[24]) +
      rhs[208] * (2 * params.Q_final[33]) + rhs[209] * (2 * params.Q_final[42]) + rhs[210] * (2 * params.Q_final[51]) +
      rhs[211] * (2 * params.Q_final[60]) + rhs[212] * (2 * params.Q_final[69]) + rhs[213] * (2 * params.Q_final[78]);
  lhs[212] =
      rhs[205] * (2 * params.Q_final[7]) + rhs[206] * (2 * params.Q_final[16]) + rhs[207] * (2 * params.Q_final[25]) +
      rhs[208] * (2 * params.Q_final[34]) + rhs[209] * (2 * params.Q_final[43]) + rhs[210] * (2 * params.Q_final[52]) +
      rhs[211] * (2 * params.Q_final[61]) + rhs[212] * (2 * params.Q_final[70]) + rhs[213] * (2 * params.Q_final[79]);
  lhs[213] =
      rhs[205] * (2 * params.Q_final[8]) + rhs[206] * (2 * params.Q_final[17]) + rhs[207] * (2 * params.Q_final[26]) +
      rhs[208] * (2 * params.Q_final[35]) + rhs[209] * (2 * params.Q_final[44]) + rhs[210] * (2 * params.Q_final[53]) +
      rhs[211] * (2 * params.Q_final[62]) + rhs[212] * (2 * params.Q_final[71]) + rhs[213] * (2 * params.Q_final[80]);
}
void fillq(void)
{
  work.q[0] = 0;
  work.q[1] = 0;
  work.q[2] = 0;
  work.q[3] = 0;
  work.q[4] = 0;
  work.q[5] = 0;
  work.q[6] = 0;
  work.q[7] = 0;
  work.q[8] = 0;
  work.q[9] = 0;
  work.q[10] = 0;
  work.q[11] = 0;
  work.q[12] = 0;
  work.q[13] = 0;
  work.q[14] = 0;
  work.q[15] = 0;
  work.q[16] = 0;
  work.q[17] = 0;
  work.q[18] = 0;
  work.q[19] = 0;
  work.q[20] = 0;
  work.q[21] = 0;
  work.q[22] = 0;
  work.q[23] = 0;
  work.q[24] = 0;
  work.q[25] = 0;
  work.q[26] = 0;
  work.q[27] = 0;
  work.q[28] = 0;
  work.q[29] = 0;
  work.q[30] = 0;
  work.q[31] = 0;
  work.q[32] = 0;
  work.q[33] = 0;
  work.q[34] = 0;
  work.q[35] = 0;
  work.q[36] = 0;
  work.q[37] = 0;
  work.q[38] = 0;
  work.q[39] = 0;
  work.q[40] = 0;
  work.q[41] = 0;
  work.q[42] = 0;
  work.q[43] = 0;
  work.q[44] = 0;
  work.q[45] = 0;
  work.q[46] = 0;
  work.q[47] = 0;
  work.q[48] = 0;
  work.q[49] = 0;
  work.q[50] = 0;
  work.q[51] = 0;
  work.q[52] = 0;
  work.q[53] = 0;
  work.q[54] = 0;
  work.q[55] = 0;
  work.q[56] = 0;
  work.q[57] = 0;
  work.q[58] = 0;
  work.q[59] = 0;
  work.q[60] = 0;
  work.q[61] = 0;
  work.q[62] = 0;
  work.q[63] = 0;
  work.q[64] = 0;
  work.q[65] = 0;
  work.q[66] = 0;
  work.q[67] = 0;
  work.q[68] = 0;
  work.q[69] = 0;
  work.q[70] = 0;
  work.q[71] = 0;
  work.q[72] = 0;
  work.q[73] = 0;
  work.q[74] = 0;
  work.q[75] = 0;
  work.q[76] = 0;
  work.q[77] = 0;
  work.q[78] = 0;
  work.q[79] = 0;
  work.q[80] = 0;
  work.q[81] = 0;
  work.q[82] = 0;
  work.q[83] = 0;
  work.q[84] = 0;
  work.q[85] = 0;
  work.q[86] = 0;
  work.q[87] = 0;
  work.q[88] = 0;
  work.q[89] = 0;
  work.q[90] = 0;
  work.q[91] = 0;
  work.q[92] = 0;
  work.q[93] = 0;
  work.q[94] = 0;
  work.q[95] = 0;
  work.q[96] = 0;
  work.q[97] = 0;
  work.q[98] = 0;
  work.q[99] = 0;
  work.q[100] = 0;
  work.q[101] = 0;
  work.q[102] = 0;
  work.q[103] = 0;
  work.q[104] = 0;
  work.q[105] = 0;
  work.q[106] = 0;
  work.q[107] = 0;
  work.q[108] = 0;
  work.q[109] = 0;
  work.q[110] = 0;
  work.q[111] = 0;
  work.q[112] = 0;
  work.q[113] = 0;
  work.q[114] = 0;
  work.q[115] = 0;
  work.q[116] = 0;
  work.q[117] = 0;
  work.q[118] = 0;
  work.q[119] = 0;
  work.q[120] = 0;
  work.q[121] = 0;
  work.q[122] = 0;
  work.q[123] = 0;
  work.q[124] = 0;
  work.q[125] = 0;
  work.q[126] = 0;
  work.q[127] = 0;
  work.q[128] = 0;
  work.q[129] = 0;
  work.q[130] = 0;
  work.q[131] = 0;
  work.q[132] = 0;
  work.q[133] = 0;
  work.q[134] = 0;
  work.q[135] = 0;
  work.q[136] = 0;
  work.q[137] = 0;
  work.q[138] = 0;
  work.q[139] = 0;
  work.q[140] = 0;
  work.q[141] = 0;
  work.q[142] = 0;
  work.q[143] = 0;
  work.q[144] = 0;
  work.q[145] = 0;
  work.q[146] = 0;
  work.q[147] = 0;
  work.q[148] = 0;
  work.q[149] = 0;
  work.q[150] = 0;
  work.q[151] = 0;
  work.q[152] = 0;
  work.q[153] = 0;
  work.q[154] = 0;
  work.q[155] = 0;
  work.q[156] = 0;
  work.q[157] = 0;
  work.q[158] = 0;
  work.q[159] = 0;
  work.q[160] = 0;
  work.q[161] = 0;
  work.q[162] = 0;
  work.q[163] = 0;
  work.q[164] = 0;
  work.q[165] = 0;
  work.q[166] = 0;
  work.q[167] = 0;
  work.q[168] = 0;
  work.q[169] = 0;
  work.q[170] = 0;
  work.q[171] = 0;
  work.q[172] = 0;
  work.q[173] = 0;
  work.q[174] = 0;
  work.q[175] = 0;
  work.q[176] = 0;
  work.q[177] = 0;
  work.q[178] = 0;
  work.q[179] = 0;
  work.q[180] = 0;
  work.q[181] = 0;
  work.q[182] = 0;
  work.q[183] = 0;
  work.q[184] = 0;
  work.q[185] = 0;
  work.q[186] = 0;
  work.q[187] = 0;
  work.q[188] = 0;
  work.q[189] = 0;
  work.q[190] = 0;
  work.q[191] = 0;
  work.q[192] = 0;
  work.q[193] = 0;
  work.q[194] = 0;
  work.q[195] = 0;
  work.q[196] = 0;
  work.q[197] = 0;
  work.q[198] = 0;
  work.q[199] = 0;
  work.q[200] = 0;
  work.q[201] = 0;
  work.q[202] = 0;
  work.q[203] = 0;
  work.q[204] = 0;
  work.q[205] =
      -2 * (params.Q_final[0] * params.xf[0] + params.Q_final[9] * params.xf[1] + params.Q_final[18] * params.xf[2] +
            params.Q_final[27] * params.xf[3] + params.Q_final[36] * params.xf[4] + params.Q_final[45] * params.xf[5] +
            params.Q_final[54] * params.xf[6] + params.Q_final[63] * params.xf[7] + params.Q_final[72] * params.xf[8]);
  work.q[206] =
      -2 * (params.Q_final[1] * params.xf[0] + params.Q_final[10] * params.xf[1] + params.Q_final[19] * params.xf[2] +
            params.Q_final[28] * params.xf[3] + params.Q_final[37] * params.xf[4] + params.Q_final[46] * params.xf[5] +
            params.Q_final[55] * params.xf[6] + params.Q_final[64] * params.xf[7] + params.Q_final[73] * params.xf[8]);
  work.q[207] =
      -2 * (params.Q_final[2] * params.xf[0] + params.Q_final[11] * params.xf[1] + params.Q_final[20] * params.xf[2] +
            params.Q_final[29] * params.xf[3] + params.Q_final[38] * params.xf[4] + params.Q_final[47] * params.xf[5] +
            params.Q_final[56] * params.xf[6] + params.Q_final[65] * params.xf[7] + params.Q_final[74] * params.xf[8]);
  work.q[208] =
      -2 * (params.Q_final[3] * params.xf[0] + params.Q_final[12] * params.xf[1] + params.Q_final[21] * params.xf[2] +
            params.Q_final[30] * params.xf[3] + params.Q_final[39] * params.xf[4] + params.Q_final[48] * params.xf[5] +
            params.Q_final[57] * params.xf[6] + params.Q_final[66] * params.xf[7] + params.Q_final[75] * params.xf[8]);
  work.q[209] =
      -2 * (params.Q_final[4] * params.xf[0] + params.Q_final[13] * params.xf[1] + params.Q_final[22] * params.xf[2] +
            params.Q_final[31] * params.xf[3] + params.Q_final[40] * params.xf[4] + params.Q_final[49] * params.xf[5] +
            params.Q_final[58] * params.xf[6] + params.Q_final[67] * params.xf[7] + params.Q_final[76] * params.xf[8]);
  work.q[210] =
      -2 * (params.Q_final[5] * params.xf[0] + params.Q_final[14] * params.xf[1] + params.Q_final[23] * params.xf[2] +
            params.Q_final[32] * params.xf[3] + params.Q_final[41] * params.xf[4] + params.Q_final[50] * params.xf[5] +
            params.Q_final[59] * params.xf[6] + params.Q_final[68] * params.xf[7] + params.Q_final[77] * params.xf[8]);
  work.q[211] =
      -2 * (params.Q_final[6] * params.xf[0] + params.Q_final[15] * params.xf[1] + params.Q_final[24] * params.xf[2] +
            params.Q_final[33] * params.xf[3] + params.Q_final[42] * params.xf[4] + params.Q_final[51] * params.xf[5] +
            params.Q_final[60] * params.xf[6] + params.Q_final[69] * params.xf[7] + params.Q_final[78] * params.xf[8]);
  work.q[212] =
      -2 * (params.Q_final[7] * params.xf[0] + params.Q_final[16] * params.xf[1] + params.Q_final[25] * params.xf[2] +
            params.Q_final[34] * params.xf[3] + params.Q_final[43] * params.xf[4] + params.Q_final[52] * params.xf[5] +
            params.Q_final[61] * params.xf[6] + params.Q_final[70] * params.xf[7] + params.Q_final[79] * params.xf[8]);
  work.q[213] =
      -2 * (params.Q_final[8] * params.xf[0] + params.Q_final[17] * params.xf[1] + params.Q_final[26] * params.xf[2] +
            params.Q_final[35] * params.xf[3] + params.Q_final[44] * params.xf[4] + params.Q_final[53] * params.xf[5] +
            params.Q_final[62] * params.xf[6] + params.Q_final[71] * params.xf[7] + params.Q_final[80] * params.xf[8]);
}
void fillh(void)
{
  work.h[0] = params.j_max[0];
  work.h[1] = 0;
  work.h[2] = 0;
  work.h[3] = 0;
  work.h[4] = 0;
  work.h[5] = 0;
  work.h[6] = 0;
  work.h[7] = params.j_max[0];
  work.h[8] = 0;
  work.h[9] = 0;
  work.h[10] = 0;
  work.h[11] = 0;
  work.h[12] = 0;
  work.h[13] = 0;
  work.h[14] = params.j_max[0];
  work.h[15] = 0;
  work.h[16] = 0;
  work.h[17] = 0;
  work.h[18] = 0;
  work.h[19] = 0;
  work.h[20] = 0;
  work.h[21] = params.j_max[0];
  work.h[22] = 0;
  work.h[23] = 0;
  work.h[24] = 0;
  work.h[25] = 0;
  work.h[26] = 0;
  work.h[27] = 0;
  work.h[28] = params.j_max[0];
  work.h[29] = 0;
  work.h[30] = 0;
  work.h[31] = 0;
  work.h[32] = 0;
  work.h[33] = 0;
  work.h[34] = 0;
  work.h[35] = params.j_max[0];
  work.h[36] = 0;
  work.h[37] = 0;
  work.h[38] = 0;
  work.h[39] = 0;
  work.h[40] = 0;
  work.h[41] = 0;
  work.h[42] = params.j_max[0];
  work.h[43] = 0;
  work.h[44] = 0;
  work.h[45] = 0;
  work.h[46] = 0;
  work.h[47] = 0;
  work.h[48] = 0;
  work.h[49] = params.j_max[0];
  work.h[50] = 0;
  work.h[51] = 0;
  work.h[52] = 0;
  work.h[53] = 0;
  work.h[54] = 0;
  work.h[55] = 0;
  work.h[56] = params.j_max[0];
  work.h[57] = 0;
  work.h[58] = 0;
  work.h[59] = 0;
  work.h[60] = 0;
  work.h[61] = 0;
  work.h[62] = 0;
  work.h[63] = params.j_max[0];
  work.h[64] = 0;
  work.h[65] = 0;
  work.h[66] = 0;
  work.h[67] = 0;
  work.h[68] = 0;
  work.h[69] = 0;
  work.h[70] = params.j_max[0];
  work.h[71] = 0;
  work.h[72] = 0;
  work.h[73] = 0;
  work.h[74] = 0;
  work.h[75] = 0;
  work.h[76] = 0;
  work.h[77] = params.v_max[0];
  work.h[78] = 0;
  work.h[79] = 0;
  work.h[80] = 0;
  work.h[81] = 0;
  work.h[82] = 0;
  work.h[83] = 0;
  work.h[84] = 0;
  work.h[85] = 0;
  work.h[86] = 0;
  work.h[87] = params.v_max[0];
  work.h[88] = 0;
  work.h[89] = 0;
  work.h[90] = 0;
  work.h[91] = 0;
  work.h[92] = 0;
  work.h[93] = 0;
  work.h[94] = 0;
  work.h[95] = 0;
  work.h[96] = 0;
  work.h[97] = params.v_max[0];
  work.h[98] = 0;
  work.h[99] = 0;
  work.h[100] = 0;
  work.h[101] = 0;
  work.h[102] = 0;
  work.h[103] = 0;
  work.h[104] = 0;
  work.h[105] = 0;
  work.h[106] = 0;
  work.h[107] = params.v_max[0];
  work.h[108] = 0;
  work.h[109] = 0;
  work.h[110] = 0;
  work.h[111] = 0;
  work.h[112] = 0;
  work.h[113] = 0;
  work.h[114] = 0;
  work.h[115] = 0;
  work.h[116] = 0;
  work.h[117] = params.v_max[0];
  work.h[118] = 0;
  work.h[119] = 0;
  work.h[120] = 0;
  work.h[121] = 0;
  work.h[122] = 0;
  work.h[123] = 0;
  work.h[124] = 0;
  work.h[125] = 0;
  work.h[126] = 0;
  work.h[127] = params.v_max[0];
  work.h[128] = 0;
  work.h[129] = 0;
  work.h[130] = 0;
  work.h[131] = 0;
  work.h[132] = 0;
  work.h[133] = 0;
  work.h[134] = 0;
  work.h[135] = 0;
  work.h[136] = 0;
  work.h[137] = params.v_max[0];
  work.h[138] = 0;
  work.h[139] = 0;
  work.h[140] = 0;
  work.h[141] = 0;
  work.h[142] = 0;
  work.h[143] = 0;
  work.h[144] = 0;
  work.h[145] = 0;
  work.h[146] = 0;
  work.h[147] = params.v_max[0];
  work.h[148] = 0;
  work.h[149] = 0;
  work.h[150] = 0;
  work.h[151] = 0;
  work.h[152] = 0;
  work.h[153] = 0;
  work.h[154] = 0;
  work.h[155] = 0;
  work.h[156] = 0;
  work.h[157] = params.v_max[0];
  work.h[158] = 0;
  work.h[159] = 0;
  work.h[160] = 0;
  work.h[161] = 0;
  work.h[162] = 0;
  work.h[163] = 0;
  work.h[164] = 0;
  work.h[165] = 0;
  work.h[166] = 0;
  work.h[167] = params.v_max[0];
  work.h[168] = 0;
  work.h[169] = 0;
  work.h[170] = 0;
  work.h[171] = 0;
  work.h[172] = 0;
  work.h[173] = 0;
  work.h[174] = 0;
  work.h[175] = 0;
  work.h[176] = 0;
  work.h[177] = params.a_max[0];
  work.h[178] = 0;
  work.h[179] = 0;
  work.h[180] = 0;
  work.h[181] = 0;
  work.h[182] = 0;
  work.h[183] = 0;
  work.h[184] = 0;
  work.h[185] = 0;
  work.h[186] = 0;
  work.h[187] = params.a_max[0];
  work.h[188] = 0;
  work.h[189] = 0;
  work.h[190] = 0;
  work.h[191] = 0;
  work.h[192] = 0;
  work.h[193] = 0;
  work.h[194] = 0;
  work.h[195] = 0;
  work.h[196] = 0;
  work.h[197] = params.a_max[0];
  work.h[198] = 0;
  work.h[199] = 0;
  work.h[200] = 0;
  work.h[201] = 0;
  work.h[202] = 0;
  work.h[203] = 0;
  work.h[204] = 0;
  work.h[205] = 0;
  work.h[206] = 0;
  work.h[207] = params.a_max[0];
  work.h[208] = 0;
  work.h[209] = 0;
  work.h[210] = 0;
  work.h[211] = 0;
  work.h[212] = 0;
  work.h[213] = 0;
  work.h[214] = 0;
  work.h[215] = 0;
  work.h[216] = 0;
  work.h[217] = params.a_max[0];
  work.h[218] = 0;
  work.h[219] = 0;
  work.h[220] = 0;
  work.h[221] = 0;
  work.h[222] = 0;
  work.h[223] = 0;
  work.h[224] = 0;
  work.h[225] = 0;
  work.h[226] = 0;
  work.h[227] = params.a_max[0];
  work.h[228] = 0;
  work.h[229] = 0;
  work.h[230] = 0;
  work.h[231] = 0;
  work.h[232] = 0;
  work.h[233] = 0;
  work.h[234] = 0;
  work.h[235] = 0;
  work.h[236] = 0;
  work.h[237] = params.a_max[0];
  work.h[238] = 0;
  work.h[239] = 0;
  work.h[240] = 0;
  work.h[241] = 0;
  work.h[242] = 0;
  work.h[243] = 0;
  work.h[244] = 0;
  work.h[245] = 0;
  work.h[246] = 0;
  work.h[247] = params.a_max[0];
  work.h[248] = 0;
  work.h[249] = 0;
  work.h[250] = 0;
  work.h[251] = 0;
  work.h[252] = 0;
  work.h[253] = 0;
  work.h[254] = 0;
  work.h[255] = 0;
  work.h[256] = 0;
  work.h[257] = params.a_max[0];
  work.h[258] = 0;
  work.h[259] = 0;
  work.h[260] = 0;
  work.h[261] = 0;
  work.h[262] = 0;
  work.h[263] = 0;
  work.h[264] = 0;
  work.h[265] = 0;
  work.h[266] = 0;
  work.h[267] = params.a_max[0];
  work.h[268] = 0;
  work.h[269] = 0;
  work.h[270] = 0;
  work.h[271] = 0;
  work.h[272] = 0;
  work.h[273] = 0;
  work.h[274] = 0;
  work.h[275] = 0;
  work.h[276] = 0;
}
void fillb(void)
{
  work.b[0] = params.A[0] * params.x_0[0] + params.A[9] * params.x_0[1] + params.A[18] * params.x_0[2] +
              params.A[27] * params.x_0[3] + params.A[36] * params.x_0[4] + params.A[45] * params.x_0[5] +
              params.A[54] * params.x_0[6] + params.A[63] * params.x_0[7] + params.A[72] * params.x_0[8];
  work.b[1] = params.A[1] * params.x_0[0] + params.A[10] * params.x_0[1] + params.A[19] * params.x_0[2] +
              params.A[28] * params.x_0[3] + params.A[37] * params.x_0[4] + params.A[46] * params.x_0[5] +
              params.A[55] * params.x_0[6] + params.A[64] * params.x_0[7] + params.A[73] * params.x_0[8];
  work.b[2] = params.A[2] * params.x_0[0] + params.A[11] * params.x_0[1] + params.A[20] * params.x_0[2] +
              params.A[29] * params.x_0[3] + params.A[38] * params.x_0[4] + params.A[47] * params.x_0[5] +
              params.A[56] * params.x_0[6] + params.A[65] * params.x_0[7] + params.A[74] * params.x_0[8];
  work.b[3] = params.A[3] * params.x_0[0] + params.A[12] * params.x_0[1] + params.A[21] * params.x_0[2] +
              params.A[30] * params.x_0[3] + params.A[39] * params.x_0[4] + params.A[48] * params.x_0[5] +
              params.A[57] * params.x_0[6] + params.A[66] * params.x_0[7] + params.A[75] * params.x_0[8];
  work.b[4] = params.A[4] * params.x_0[0] + params.A[13] * params.x_0[1] + params.A[22] * params.x_0[2] +
              params.A[31] * params.x_0[3] + params.A[40] * params.x_0[4] + params.A[49] * params.x_0[5] +
              params.A[58] * params.x_0[6] + params.A[67] * params.x_0[7] + params.A[76] * params.x_0[8];
  work.b[5] = params.A[5] * params.x_0[0] + params.A[14] * params.x_0[1] + params.A[23] * params.x_0[2] +
              params.A[32] * params.x_0[3] + params.A[41] * params.x_0[4] + params.A[50] * params.x_0[5] +
              params.A[59] * params.x_0[6] + params.A[68] * params.x_0[7] + params.A[77] * params.x_0[8];
  work.b[6] = params.A[6] * params.x_0[0] + params.A[15] * params.x_0[1] + params.A[24] * params.x_0[2] +
              params.A[33] * params.x_0[3] + params.A[42] * params.x_0[4] + params.A[51] * params.x_0[5] +
              params.A[60] * params.x_0[6] + params.A[69] * params.x_0[7] + params.A[78] * params.x_0[8];
  work.b[7] = params.A[7] * params.x_0[0] + params.A[16] * params.x_0[1] + params.A[25] * params.x_0[2] +
              params.A[34] * params.x_0[3] + params.A[43] * params.x_0[4] + params.A[52] * params.x_0[5] +
              params.A[61] * params.x_0[6] + params.A[70] * params.x_0[7] + params.A[79] * params.x_0[8];
  work.b[8] = params.A[8] * params.x_0[0] + params.A[17] * params.x_0[1] + params.A[26] * params.x_0[2] +
              params.A[35] * params.x_0[3] + params.A[44] * params.x_0[4] + params.A[53] * params.x_0[5] +
              params.A[62] * params.x_0[6] + params.A[71] * params.x_0[7] + params.A[80] * params.x_0[8];
  work.b[9] = 0;
  work.b[10] = 0;
  work.b[11] = 0;
  work.b[12] = 0;
  work.b[13] = 0;
  work.b[14] = 0;
  work.b[15] = 0;
  work.b[16] = 0;
  work.b[17] = 0;
  work.b[18] = 0;
  work.b[19] = 0;
  work.b[20] = 0;
  work.b[21] = 0;
  work.b[22] = 0;
  work.b[23] = 0;
  work.b[24] = 0;
  work.b[25] = 0;
  work.b[26] = 0;
  work.b[27] = 0;
  work.b[28] = 0;
  work.b[29] = 0;
  work.b[30] = 0;
  work.b[31] = 0;
  work.b[32] = 0;
  work.b[33] = 0;
  work.b[34] = 0;
  work.b[35] = 0;
  work.b[36] = 0;
  work.b[37] = 0;
  work.b[38] = 0;
  work.b[39] = 0;
  work.b[40] = 0;
  work.b[41] = 0;
  work.b[42] = 0;
  work.b[43] = 0;
  work.b[44] = 0;
  work.b[45] = 0;
  work.b[46] = 0;
  work.b[47] = 0;
  work.b[48] = 0;
  work.b[49] = 0;
  work.b[50] = 0;
  work.b[51] = 0;
  work.b[52] = 0;
  work.b[53] = 0;
  work.b[54] = 0;
  work.b[55] = 0;
  work.b[56] = 0;
  work.b[57] = 0;
  work.b[58] = 0;
  work.b[59] = 0;
  work.b[60] = 0;
  work.b[61] = 0;
  work.b[62] = 0;
  work.b[63] = 0;
  work.b[64] = 0;
  work.b[65] = 0;
  work.b[66] = 0;
  work.b[67] = 0;
  work.b[68] = 0;
  work.b[69] = 0;
  work.b[70] = 0;
  work.b[71] = 0;
  work.b[72] = 0;
  work.b[73] = 0;
  work.b[74] = 0;
  work.b[75] = 0;
  work.b[76] = 0;
  work.b[77] = 0;
  work.b[78] = 0;
  work.b[79] = 0;
  work.b[80] = 0;
  work.b[81] = 0;
  work.b[82] = 0;
  work.b[83] = 0;
  work.b[84] = 0;
  work.b[85] = 0;
  work.b[86] = 0;
  work.b[87] = 0;
  work.b[88] = 0;
  work.b[89] = 0;
}
void pre_ops(void)
{
  work.quad_416097357824[0] =
      (params.xf[0] *
           (params.Q_final[0] * params.xf[0] + params.Q_final[9] * params.xf[1] + params.Q_final[18] * params.xf[2] +
            params.Q_final[27] * params.xf[3] + params.Q_final[36] * params.xf[4] + params.Q_final[45] * params.xf[5] +
            params.Q_final[54] * params.xf[6] + params.Q_final[63] * params.xf[7] + params.Q_final[72] * params.xf[8]) +
       params.xf[1] *
           (params.Q_final[1] * params.xf[0] + params.Q_final[10] * params.xf[1] + params.Q_final[19] * params.xf[2] +
            params.Q_final[28] * params.xf[3] + params.Q_final[37] * params.xf[4] + params.Q_final[46] * params.xf[5] +
            params.Q_final[55] * params.xf[6] + params.Q_final[64] * params.xf[7] + params.Q_final[73] * params.xf[8]) +
       params.xf[2] *
           (params.Q_final[2] * params.xf[0] + params.Q_final[11] * params.xf[1] + params.Q_final[20] * params.xf[2] +
            params.Q_final[29] * params.xf[3] + params.Q_final[38] * params.xf[4] + params.Q_final[47] * params.xf[5] +
            params.Q_final[56] * params.xf[6] + params.Q_final[65] * params.xf[7] + params.Q_final[74] * params.xf[8]) +
       params.xf[3] *
           (params.Q_final[3] * params.xf[0] + params.Q_final[12] * params.xf[1] + params.Q_final[21] * params.xf[2] +
            params.Q_final[30] * params.xf[3] + params.Q_final[39] * params.xf[4] + params.Q_final[48] * params.xf[5] +
            params.Q_final[57] * params.xf[6] + params.Q_final[66] * params.xf[7] + params.Q_final[75] * params.xf[8]) +
       params.xf[4] *
           (params.Q_final[4] * params.xf[0] + params.Q_final[13] * params.xf[1] + params.Q_final[22] * params.xf[2] +
            params.Q_final[31] * params.xf[3] + params.Q_final[40] * params.xf[4] + params.Q_final[49] * params.xf[5] +
            params.Q_final[58] * params.xf[6] + params.Q_final[67] * params.xf[7] + params.Q_final[76] * params.xf[8]) +
       params.xf[5] *
           (params.Q_final[5] * params.xf[0] + params.Q_final[14] * params.xf[1] + params.Q_final[23] * params.xf[2] +
            params.Q_final[32] * params.xf[3] + params.Q_final[41] * params.xf[4] + params.Q_final[50] * params.xf[5] +
            params.Q_final[59] * params.xf[6] + params.Q_final[68] * params.xf[7] + params.Q_final[77] * params.xf[8]) +
       params.xf[6] *
           (params.Q_final[6] * params.xf[0] + params.Q_final[15] * params.xf[1] + params.Q_final[24] * params.xf[2] +
            params.Q_final[33] * params.xf[3] + params.Q_final[42] * params.xf[4] + params.Q_final[51] * params.xf[5] +
            params.Q_final[60] * params.xf[6] + params.Q_final[69] * params.xf[7] + params.Q_final[78] * params.xf[8]) +
       params.xf[7] *
           (params.Q_final[7] * params.xf[0] + params.Q_final[16] * params.xf[1] + params.Q_final[25] * params.xf[2] +
            params.Q_final[34] * params.xf[3] + params.Q_final[43] * params.xf[4] + params.Q_final[52] * params.xf[5] +
            params.Q_final[61] * params.xf[6] + params.Q_final[70] * params.xf[7] + params.Q_final[79] * params.xf[8]) +
       params.xf[8] *
           (params.Q_final[8] * params.xf[0] + params.Q_final[17] * params.xf[1] + params.Q_final[26] * params.xf[2] +
            params.Q_final[35] * params.xf[3] + params.Q_final[44] * params.xf[4] + params.Q_final[53] * params.xf[5] +
            params.Q_final[62] * params.xf[6] + params.Q_final[71] * params.xf[7] + params.Q_final[80] * params.xf[8]));
}
