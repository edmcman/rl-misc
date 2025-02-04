#include <stdio.h>   /* FILE */

#include <stdlib.h>  /* malloc(), calloc(), free() */

#include <string.h>  /* strcmp() */

# 1 
void func0(long param_1,long param_2){undefined4 local_c;for (local_c = 0; *(char *)(param_2 + local_c) != '\0'; local_c = local_c + 1) {if ((*(char *)(param_2 + local_c) < 'A') || ('Z' < *(char *)(param_2 + local_c))) {*(undefined *)(param_1 + local_c) = *(undefined *)(param_2 + local_c);}else {*(char *)(param_1 + local_c) = *(char *)(param_2 + local_c) + ' ';}}*(undefined *)(param_1 + local_c) = 0;return;}