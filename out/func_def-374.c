
# 1 
char* strcpy(char *to, const char *from)
{
    const char *src;
    char *dst;

    src = from;
    dst = to;
    while ((*dst++ = *src++));

    return to;
}