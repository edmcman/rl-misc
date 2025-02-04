
# 1 
char *strcpy_e(char *dest, const char *src)
{
    for(; *src; ++src, ++dest)
        *dest = *src;

    *dest = 0;
    return dest;
}