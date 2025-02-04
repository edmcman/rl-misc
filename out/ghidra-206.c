
# 1 
char * func0(char *__dest,char *__src){byte bVar1;byte *local_18;byte *local_10;local_18 = (byte *)__src;local_10 = (byte *)__dest;do {*local_10 = *local_18;bVar1 = *local_10;local_18 = local_18 + 1;local_10 = local_10 + 1;} while (bVar1 != 0);return (char *)(ulong)bVar1;}