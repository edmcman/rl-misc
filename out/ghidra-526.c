
# 1 
char * func0(char *__dest,char *__src){char *local_28;char *local_20;local_28 = __src;local_20 = __dest;while (*local_28 != '\0') {*local_20 = *local_28;local_28 = local_28 + 1;local_20 = local_20 + 1;}*local_20 = '\0';return __dest;}