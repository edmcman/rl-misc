
# 1 
char * func0(char *param_1,char param_2,char *param_3){char *local_20;if (param_3 == param_1) {*param_3 = '\0';}else {local_20 = param_3;if (param_1 < param_3) {do {if (local_20 <= param_1) break;local_20 = local_20 + -1;} while (param_2 == *local_20);local_20[(int)(uint)(param_2 != *local_20)] = '\0';}}return param_1;}