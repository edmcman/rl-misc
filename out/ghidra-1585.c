#include <ctype.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/stat.h>

#include <unistd.h>

#include <termios.h>

# 1 
void func0(int param_1,int param_2,long param_3){undefined4 local_10;undefined4 local_c;for (local_10 = param_1; local_c = 0, local_10 < param_2; local_10 = local_10 + param_1) {do {*(undefined4 *)(param_3 + (long)(local_c + local_10) * 4) =*(undefined4 *)(param_3 + (long)local_c * 4);local_c = local_c + 1;} while (local_c < param_1);}return;}