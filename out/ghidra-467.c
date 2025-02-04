
# 1 
void func0(long param_1,long param_2){undefined4 local_10;undefined4 local_c;local_10 = 0;local_c = 0;while( true ) {for (; *(char *)(param_2 + local_c) == '\r'; local_c = local_c + 1) {}*(undefined *)(param_1 + local_10) = *(undefined *)(param_2 + local_c);if (*(char *)(param_2 + local_c) == '\0') break;local_10 = local_10 + 1;local_c = local_c + 1;}return;}