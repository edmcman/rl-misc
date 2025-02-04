










# 1 
ulong func0(ulong param_1,ushort *param_2,ushort *param_3){ushort local_12;ulong local_10;if (param_1 == 0) {*param_2 = 0;*param_3 = 0;local_10 = 0;}else {local_12 = 0;for (local_10 = param_1; (local_12 < 0x20 && (local_10 == ((uint)local_10 & 0x7fffffff)));local_10 = local_10 << 1) {local_12 = local_12 + 1;}*param_2 = local_12;local_12 = 0;for (local_10 = param_1; (local_12 < 0x20 && (local_10 == (local_10 & 0xfffffffffffffffe)));local_10 = local_10 >> 1) {local_12 = local_12 + 1;}*param_3 = local_12;}return local_10;}