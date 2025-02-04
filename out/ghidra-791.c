







# 1 
void func0(uint param_1,uint param_2,int *param_3,int *param_4){uint uVar1;uint uVar2;uint uVar3;uint uVar4;uVar1 = (param_1 & 0xffff) * (param_2 & 0xffff);uVar2 = ((int)param_1 >> 0x10) * (param_2 & 0xffff);uVar3 = (param_1 & 0xffff) * ((int)param_2 >> 0x10);uVar4 = (uVar1 >> 0x10) + (uVar3 & 0xffff) + (uVar2 & 0xffff);*param_3 = ((int)param_1 >> 0x10) * ((int)param_2 >> 0x10) +((int)uVar3 >> 0x10) + ((int)uVar2 >> 0x10) + (uVar4 >> 0x10);*param_4 = (uVar1 & 0xffff) + uVar4 * 0x10000;return;}