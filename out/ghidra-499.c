
# 1 
long func0(char *param_1,char *param_2,int param_3){int local_2c;char *local_20;char *local_10;local_2c = param_3;local_20 = param_1;for (local_10 = param_2; *local_10 != '\0'; local_10 = local_10 + 1) {if (1 < local_2c) {*local_20 = *local_10;local_2c = local_2c + -1;local_20 = local_20 + 1;}}if (0 < local_2c) {*local_20 = '\0';}return (long)local_10 - (long)param_2;}