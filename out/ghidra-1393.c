



























# 1 
void func0(float param_1,float param_2,float param_3,float *param_4,float *param_5,float *param_6){*param_4 = *param_5;*param_5 = *param_6;*param_4 = (*param_5 + *param_4) * param_1;*param_5 = (*param_5 + *param_4) * param_2;*param_6 = (*param_5 + *param_4) / param_3;return;}