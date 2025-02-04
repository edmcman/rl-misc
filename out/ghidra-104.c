
# 1 
undefined8 func0(float param_1,undefined4 *param_2,int *param_3){byte bVar1;long lVar2;lVar2 = (long)param_1;if (lVar2 < 0) {lVar2 = lVar2 + 0xff;}*param_2 = (int)((ulong)lVar2 >> 8);bVar1 = (byte)((long)param_1 >> 0x3f);*param_3 = (uint)(byte)((char)(long)param_1 + bVar1) - (uint)bVar1;return 2;}