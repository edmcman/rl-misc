#include <time.h>

# 1 
void func0(char *param_1,int param_2){*param_1 = (char)(param_2 / 10) + '0';param_1[1] = (char)param_2 + (char)(param_2 / 10) * -10 + '0';return;}