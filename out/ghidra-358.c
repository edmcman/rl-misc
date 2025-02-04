#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(double *param_1,double *param_2,double *param_3){if ((*param_3 <= *param_2) || (*param_3 <= *param_1)) {if ((*param_2 <= *param_1) || (*param_2 <= *param_3)) {if ((*param_2 < *param_1) && (*param_3 < *param_1)) {*param_1 = *param_3;}}else {*param_2 = *param_1;}}else {*param_3 = *param_2;}return;}