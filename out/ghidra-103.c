
# 1 
void func0(int param_1,char *param_2,int param_3){char cVar1;int local_3c;int local_28;char *local_20;char *local_18;char *local_10;local_28 = 10;local_3c = param_1;local_20 = param_2;if (param_3 == 0x78) {local_28 = 0x10;}do {local_10 = local_20;cVar1 = (char)(local_3c % local_28);if (local_3c % local_28 < 10) {*local_20 = cVar1 + '0';}else {*local_20 = cVar1 + 'W';}local_20 = local_20 + 1;local_3c = local_3c / local_28;} while (local_3c != 0);*local_20 = '\0';for (local_18 = param_2; local_18 < local_10; local_18 = local_18 + 1) {cVar1 = *local_18;*local_18 = *local_10;*local_10 = cVar1;local_10 = local_10 + -1;}return;}