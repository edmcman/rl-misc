
# 1 
void func0(char *param_1,byte param_2){*param_1 = "0123456789ABCDEF"[param_2 >> 4];param_1[1] = "0123456789ABCDEF"[param_2 & 0xf];param_1[2] = '\0';return;}