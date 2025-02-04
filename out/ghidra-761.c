
# 1 
void func0(int *param_1,int param_2){LOCK();*param_1 = *param_1 + param_2;UNLOCK();LOCK();*param_1 = *param_1 + param_2;UNLOCK();LOCK();*param_1 = *param_1 + param_2;UNLOCK();LOCK();*param_1 = *param_1 + param_2;UNLOCK();LOCK();*param_1 = *param_1 + param_2;UNLOCK();return;}