
# 1 
void func0(byte param_1,byte param_2,char param_3,undefined param_4,long param_5,undefined *param_6){byte bVar1;byte bVar2;undefined *local_38;char local_24;bVar1 = param_1 & 0xaa | param_2 >> 1 & 0x55;bVar2 = param_1 * '\x02' & 0xaa | param_2 & 0x55;local_38 = param_6;local_24 = param_3;switch(param_4) {case 0:if ((bVar2 & 3) != 0) {*param_6 = *(undefined *)(param_5 + (ulong)(bVar2 & 3));}local_38 = param_6 + 1;local_24 = param_3 + -1;if (local_24 == '\0') {return;}break;case 1:break;case 2:goto switchD_0010007d_caseD_2;case 3:goto switchD_0010007d_caseD_3;case 4:goto switchD_0010007d_caseD_4;case 5:goto switchD_0010007d_caseD_5;case 6:goto switchD_0010007d_caseD_6;case 7:goto switchD_0010007d_caseD_7;default:goto switchD_0010007d_caseD_8;}if ((bVar1 & 3) != 0) {*local_38 = *(undefined *)(param_5 + (ulong)(bVar1 & 3));}local_38 = local_38 + 1;local_24 = local_24 + -1;if (local_24 != '\0') {switchD_0010007d_caseD_2:if ((bVar2 & 0xc) != 0) {*local_38 = *(undefined *)(param_5 + (ulong)(bVar2 >> 2 & 3));}local_38 = local_38 + 1;local_24 = local_24 + -1;if (local_24 != '\0') {switchD_0010007d_caseD_3:if ((bVar1 & 0xc) != 0) {*local_38 = *(undefined *)(param_5 + (ulong)(bVar1 >> 2 & 3));}local_38 = local_38 + 1;local_24 = local_24 + -1;if (local_24 != '\0') {switchD_0010007d_caseD_4:if ((bVar2 & 0x30) != 0) {*local_38 = *(undefined *)(param_5 + (ulong)(bVar2 >> 4 & 3));}local_38 = local_38 + 1;local_24 = local_24 + -1;if (local_24 != '\0') {switchD_0010007d_caseD_5:if ((bVar1 & 0x30) != 0) {*local_38 = *(undefined *)(param_5 + (ulong)(bVar1 >> 4 & 3));}local_38 = local_38 + 1;local_24 = local_24 + -1;if (local_24 != '\0') {switchD_0010007d_caseD_6:if ((bVar2 & 0xc0) != 0) {*local_38 = *(undefined *)(param_5 + (ulong)(bVar2 >> 6));}local_38 = local_38 + 1;if (local_24 != '\x01') {switchD_0010007d_caseD_7:if ((bVar1 & 0xc0) != 0) {*local_38 = *(undefined *)(param_5 + (ulong)(bVar1 >> 6));}}}}}}}switchD_0010007d_caseD_8:return;}