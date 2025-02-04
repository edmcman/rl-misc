#include <stdio.h>

# 1 
char * func0(char *__dest,char *__src,size_t __n){byte *local_28;byte *local_20;uint local_c;local_c = 0;local_28 = (byte *)__src;local_20 = (byte *)__dest;do {*local_20 = *local_28;if (*local_20 == 0) {return (char *)(ulong)*local_20;}local_c = local_c + 1;local_28 = local_28 + 1;local_20 = local_20 + 1;} while ((int)local_c < (int)__n);return (char *)(ulong)local_c;}