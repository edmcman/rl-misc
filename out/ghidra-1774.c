
# 1 
void func0(int *param_1,undefined8 param_2,int param_3){int local_14;int local_10;int local_c;if (param_3 < 0x51) {local_c = 0;for (local_10 = 0; local_10 < 9; local_10 = local_10 + 1) {for (local_14 = 0; local_14 < 9; local_14 = local_14 + 1) {if (local_c == param_3) {*param_1 = local_14;param_1[1] = local_10;return;}local_c = local_c + 1;}}}return;}