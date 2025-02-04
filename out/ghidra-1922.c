#include <stdint.h>

# 1 
void func0(int param_1,char *param_2){*param_2 = (char)(param_1 / 10) + (char)((param_1 / 10) / 10) * -10 + '0';param_2[1] = (char)param_1 + (char)(param_1 / 10) * -10 + '0';param_2[2] = '\0';return;}