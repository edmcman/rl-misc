
# 1 
char *
my_strcpy2(char *destination, const char *source)
{
    *destination = *source;
    if (*source == '\0')
        return destination;
    else
        return my_strcpy2(destination+1, source+1) - 1;
}