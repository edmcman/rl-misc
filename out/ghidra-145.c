
# 1 
undefined8 func0(int param_1,short *param_2){undefined8 uVar1;if (param_1 < 0) {uVar1 = 0;}else if (param_1 < 0x10000) {*param_2 = (short)param_1;uVar1 = 1;}else if (param_1 < 0x110000) {*param_2 = (short)(param_1 + -0x10000 >> 10) + -0x2800;param_2[1] = ((ushort)(param_1 + -0x10000) & 0x3ff) + 0xdc00;uVar1 = 2;}else {uVar1 = 0;}return uVar1;}