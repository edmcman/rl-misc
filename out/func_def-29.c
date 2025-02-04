
# 1 
int kstrcpy(char *dst, const char *src)
{
    int i = 0;
    while((dst[i] = src[i++]));
    return i;
}