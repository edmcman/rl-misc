
# 1 
char* Client_StrCopy(char* dst, const char* src)
{
    char *address = dst;
    if(!dst || !src){
        return 0;
    }

    while(*src != '\0'){
        *address++ = *src++;
    }
    *address = '\0';
    return dst;
}