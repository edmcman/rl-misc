#include <stdio.h>

#include <string.h>

#include <ctype.h>

# 1 
void func0(char *param_1,char param_2,char param_3){*param_1 = param_2 + (((char)((uint)(ushort)(short)param_2 * 0x39 >> 8) >> 1) - (param_2 >> 7)) *-9 + 'a';param_1[1] = (((char)((uint)(ushort)(short)param_2 * 0x39 >> 8) >> 1) - (param_2 >> 7)) + '0';param_1[2] = param_3 + (((char)((uint)(ushort)(short)param_3 * 0x39 >> 8) >> 1) - (param_3 >> 7))* -9 + 'a';param_1[3] = param_3 / '\t' + '0';param_1[4] = '\0';return;}