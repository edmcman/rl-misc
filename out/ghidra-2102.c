#include <stdlib.h>		/* snprintf, free */

#include <errno.h>		/* errno */

#include <string.h>		/* strerror, strcoll */

#include <zlib.h>		/* gzerror */

# 1 
char * func0(char *param_1,char *param_2){char cVar1;char *local_28;char *local_20;local_20 = param_1;for (local_28 = param_2; *local_28 != '\0'; local_28 = local_28 + 1) {if (*local_28 == '\\') {cVar1 = '/';}else {cVar1 = *local_28;}*local_20 = cVar1;local_20 = local_20 + 1;}*local_20 = '\0';return param_1;}