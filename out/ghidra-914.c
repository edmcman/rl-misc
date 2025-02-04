
# 1 
bool func0(undefined4 *param_1){int iVar1;if ((*(ushort *)((long)param_1 + 2) & 0x7f80) == 0x7f80) {iVar1 = 1;}else if ((*(ushort *)((long)param_1 + 2) & 0x7f80) == 0) {iVar1 = 2;}else {iVar1 = 0;}if (iVar1 == 2) {*param_1 = 0;}return iVar1 != 0;}