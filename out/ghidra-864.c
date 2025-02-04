#include <netdb.h>

#include <string.h>

# 1 
int func0(int __port,char *__proto,servent *__result_buf,char *__buf,size_t __buflen,servent **__result){int iVar1;servent *psVar2;psVar2 = getservbyport(__port,__proto);*__result = psVar2;if (*__result == (servent *)0x0) {iVar1 = -1;}else {iVar1 = 0;}return iVar1;}