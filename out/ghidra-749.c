
# 1 
char * func0(char *__dest,char *__src){int local_c;for (local_c = 0; __src[local_c] != '\0'; local_c = local_c + 1) {__dest[local_c] = __src[local_c];}__dest[local_c] = '\0';return __dest + local_c;}