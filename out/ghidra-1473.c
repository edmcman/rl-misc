#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

# 1 
char * func0(char *__dest,char *__src){char cVar1;char *local_28;char *local_20;local_28 = __src;local_20 = __dest;do {*local_20 = *local_28;cVar1 = *local_20;local_28 = local_28 + 1;local_20 = local_20 + 1;} while (cVar1 != '\0');return __dest;}