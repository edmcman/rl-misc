#include <stdio.h>

#include <stdlib.h>

#include <arpa/inet.h>

# 1 
undefined8 func0(undefined4 param_1,undefined8 param_2){undefined uVar1;undefined uVar2;undefined uVar3;undefined uVar4;undefined4 local_1c;undefined4 *local_10;local_10 = &local_1c;local_1c._3_1_ = (undefined)((uint)param_1 >> 0x18);uVar3 = local_1c._3_1_;local_1c._2_1_ = (undefined)((uint)param_1 >> 0x10);uVar2 = local_1c._2_1_;local_1c._1_1_ = (undefined)((uint)param_1 >> 8);uVar1 = local_1c._1_1_;local_1c._0_1_ = (undefined)param_1;uVar4 = (undefined)local_1c;local_1c = param_1;__snprintf(param_2,8,"%d.%d.%d.%d",uVar4,uVar1,uVar2,uVar3);return param_2;}