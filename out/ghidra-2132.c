
# 1 
char * func0(char *__dest,char *__src,size_t __n){int local_1c;char *local_18;char *local_10;local_1c = (int)__n;local_10 = __dest;for (local_18 = __src; (0 < local_1c && (*local_18 != '\0')); local_18 = local_18 + 1) {*local_10 = *local_18;local_1c = local_1c + -1;local_10 = local_10 + 1;}*local_10 = '\0';return local_10;}