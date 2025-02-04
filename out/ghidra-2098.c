#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
char * func0(int *param_1,int *param_2,int param_3){char *pcVar1;if (param_3 == 0) {if ((*param_1 == 0) && (*param_2 != 0)) {*param_1 = 1;*param_2 = 0;return "OPEN";}if ((*param_1 != 0) && (*param_2 != 0)) {*param_1 = 0;*param_2 = 0;return "CLOSED";}}if (((*param_1 == 0) && (*param_2 == 0)) && (param_3 != 0)) {*param_2 = 1;pcVar1 = "OPENING";}else if (((*param_1 == 0) || (*param_2 != 0)) || (param_3 == 0)) {if (((*param_1 == 0) || (*param_2 == 0)) || (param_3 == 0)) {if (((*param_1 == 0) && (*param_2 != 0)) && (param_3 != 0)) {*param_2 = 0;*param_1 = 1;pcVar1 = "STOPPED_WHILE_OPENING";}else {pcVar1 = "ERROR";}}else {*param_2 = 0;*param_1 = 0;pcVar1 = "STOPPED_WHILE_CLOSING";}}else {*param_2 = 1;pcVar1 = "CLOSING";}return pcVar1;}