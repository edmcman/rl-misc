
# 1 
char *
my_strcpy1(char *destination, const char *source)
{
    int i;
    for(i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
    return destination;
}