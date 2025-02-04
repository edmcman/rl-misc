
# 1 
void func0(int *param_1,int *param_2){int local_c;local_c = *param_1;while( true ) {if (local_c < 1) {return;}if ((*param_1 % local_c == 0) && (*param_2 % local_c == 0)) break;local_c = local_c + -1;}*param_1 = *param_1 / local_c;*param_2 = *param_2 / local_c;return;}