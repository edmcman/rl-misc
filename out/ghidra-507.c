



# 1 
char * func0(char *param_1,char param_2){char cVar1;int local_14;char *local_10;local_14 = 0;local_10 = param_1;do {if (param_2 == *local_10) {local_14 = local_14 + 1;}else {local_10[-(long)local_14] = *local_10;}cVar1 = *local_10;local_10 = local_10 + 1;} while (cVar1 != '\0');return param_1;}