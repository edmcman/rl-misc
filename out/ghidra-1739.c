
# 1 
void func0(int param_1,char *param_2){int iVar1;iVar1 = param_1 / 0x3c;param_1 = param_1 % 0x3c;*param_2 = (char)(iVar1 / 10) + '0';param_2[1] = (char)iVar1 + (char)(iVar1 / 10) * -10 + '0';param_2[2] = ':';param_2[3] = (char)(param_1 / 10) + '0';param_2[4] = (char)param_1 + (char)(param_1 / 10) * -10 + '0';param_2[5] = '\0';return;}