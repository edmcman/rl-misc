
# 1 
uint func0(long param_1,long param_2){undefined4 local_c;local_c = 0;if (param_1 == 0) {for (; *(char *)(param_2 + (ulong)local_c) != '\0'; local_c = local_c + 1) {}}else {while (*(char *)(param_2 + (ulong)local_c) != '\0') {*(char *)((ulong)local_c + param_1) = *(char *)(param_2 + (ulong)local_c);local_c = local_c + 1;}}return local_c;}