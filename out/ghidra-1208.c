
# 1 
void func0(long param_1,long param_2,int param_3){int local_10;int local_c;local_10 = 0;for (local_c = param_3;((local_c < 0x400 && (*(char *)(param_1 + local_c) != ' ')) &&(*(char *)(param_1 + local_c) != '\n')); local_c = local_c + 1) {*(undefined *)(param_2 + local_10) = *(undefined *)(param_1 + local_c);local_10 = local_10 + 1;}return;}