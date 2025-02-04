
# 1 
void func0(char *param_1,byte *param_2){*param_2 = (byte)param_1[1] >> 4 | *param_1 << 2;param_2[1] = param_1[1] << 4 | (byte)param_1[2] >> 2;param_2[2] = param_1[2] << 6 | param_1[3];return;}