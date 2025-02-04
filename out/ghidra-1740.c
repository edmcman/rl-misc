
# 1 
bool func0(long param_1,int *param_2){*param_2 = *param_2 + 1;while ((*(char *)(param_1 + *param_2) != '\"' && (*(char *)(param_1 + *param_2) != '\0'))) {if (*(char *)(param_1 + *param_2) == '\\') {*param_2 = *param_2 + 1;}*param_2 = *param_2 + 1;}return *(char *)(param_1 + *param_2) != '\"';}