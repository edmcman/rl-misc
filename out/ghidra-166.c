






# 1 
void func0(char *param_1,char *param_2){char *local_28;char *local_20;int local_10;char local_c;local_10 = 0;local_28 = param_2;local_20 = param_1;while ((local_10 < 0x10 && (*local_20 != '\0'))) {local_c = *local_20;if (('@' < local_c) && (local_c < '[')) {local_c = local_c + ' ';}*local_28 = local_c;local_10 = local_10 + 1;local_28 = local_28 + 1;local_20 = local_20 + 1;}for (; local_10 < 0x11; local_10 = local_10 + 1) {*local_28 = '\0';local_28 = local_28 + 1;}return;}