



# 1 
void func0(double param_1,double param_2,double *param_3,double *param_4,int param_5,double *param_6,double *param_7,double *param_8){int local_14;double local_10;*param_4 = 0.0;for (local_14 = 0; local_14 < param_5; local_14 = local_14 + 1) {if (local_14 == 0) {local_10 = ((param_6[1] + *param_6) *(DAT_001002a8 + *param_3) * param_2 * (DAT_001002b0 + *param_8) * *param_7) /DAT_001002b8;}else if (local_14 == param_5 + -1) {local_10 = (param_6[local_14] *(DAT_001002a8 + param_3[local_14]) * param_1 * (DAT_001002b0 + param_8[local_14]) *param_7[local_14]) / DAT_001002b8;}else {local_10 = ((param_6[(long)local_14 + 1] + param_6[local_14]) *(DAT_001002a8 + param_3[local_14]) * param_1 * (DAT_001002b0 + param_8[local_14]) *param_7[local_14]) / DAT_001002b8;}*param_4 = *param_4 + local_10;}return;}