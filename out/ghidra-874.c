
# 1 
long func0(ulong param_1,ulong param_2,ulong *param_3){undefined8 local_28;undefined8 local_20;undefined8 local_18;undefined8 local_10;local_18 = 0;local_10 = 1;local_28 = param_2;if (param_2 == 0) {local_18 = 0;}else {for (; local_20 = param_1, -1 < (int)local_28; local_28 = local_28 << 1) {local_10 = local_10 << 1;}for (; local_10 != 0; local_10 = local_10 >> 1) {if (local_28 <= local_20) {local_20 = local_20 - local_28;local_18 = local_18 + local_10;}local_28 = local_28 >> 1;}if (param_3 != (ulong *)0x0) {*param_3 = local_20;}}return local_18;}