











# 1 
undefined8 func0(char *param_1,char *param_2){undefined8 uVar1;if ((*param_2 == '\0') || (param_2[1] == '\0')) {*param_1 = '\0';uVar1 = 0;}else {*param_1 = param_2[1];if ((param_2[2] == '|') && (param_2[3] != '\0')) {param_1[1] = param_2[3];uVar1 = 1;}else {uVar1 = 0;}}return uVar1;}