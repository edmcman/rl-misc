
# 1 
undefined8 func0(float param_1,undefined4 *param_2,int *param_3){byte bVar1;long lVar2;float fVar3;fVar3 = DAT_0010009c * (DAT_00100098 + param_1);lVar2 = (long)fVar3;if (lVar2 < 0) {lVar2 = lVar2 + 0xff;}*param_2 = (int)((ulong)lVar2 >> 8);lVar2 = (long)fVar3;bVar1 = (byte)(lVar2 >> 0x3f);*param_3 = (uint)(byte)((char)lVar2 + bVar1) - (uint)bVar1;return 2;}