#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

# 1 
int func0(int param_1,double *param_2,int param_3,double *param_4,long param_5){bool bVar1;double dVar2;uint local_78;uint local_74;int local_70;int local_6c;double local_68;double local_60;double local_58;double local_50;double local_48;double local_40;double local_38;double local_30;dVar2 = *param_2;local_30 = *param_4;local_70 = 0;bVar1 = (double)(DAT_00100410 ^ (ulong)dVar2) < local_30 == local_30 <= dVar2;if (bVar1) {local_38 = param_4[1];local_40 = dVar2;}else {local_40 = param_2[1];local_38 = local_30;local_30 = dVar2;}local_74 = (uint)bVar1;local_78 = (uint)!bVar1;if (((int)local_78 < param_1) &&((param_3 <= (int)local_74 ||((double)(DAT_00100410 ^ (ulong)local_40) < local_38 != local_38 <= local_40)))) {local_50 = local_40 + local_30;local_60 = local_50 - local_40;local_78 = local_78 + 1;local_40 = param_2[(int)local_78];}else {local_50 = local_38 + local_30;local_60 = local_50 - local_38;local_74 = local_74 + 1;local_38 = param_4[(int)local_74];}local_60 = local_30 - local_60;local_68 = local_50;for (local_6c = 2; local_6c < param_3 + param_1; local_6c = local_6c + 1) {if (((int)local_78 < param_1) &&((param_3 <= (int)local_74 ||((double)(DAT_00100410 ^ (ulong)local_40) < local_38 != local_38 <= local_40)))) {local_48 = local_40 + local_60;local_58 = local_48 - local_40;local_78 = local_78 + 1;local_40 = param_2[(int)local_78];}else {local_48 = local_38 + local_60;local_58 = local_48 - local_38;local_74 = local_74 + 1;local_38 = param_4[(int)local_74];}local_58 = local_60 - local_58;dVar2 = local_68 + local_48;local_60 = (local_68 - (dVar2 - (dVar2 - local_68))) + (local_48 - (dVar2 - local_68));if (local_58 != 0.0) {*(double *)(param_5 + (long)local_70 * 8) = local_58;local_70 = local_70 + 1;}local_68 = dVar2;}if (local_60 != 0.0) {*(double *)(param_5 + (long)local_70 * 8) = local_60;local_70 = local_70 + 1;}if ((local_68 != 0.0) || (local_70 == 0)) {*(double *)(param_5 + (long)local_70 * 8) = local_68;local_70 = local_70 + 1;}return local_70;}