
# 1 
char* itos(int n, char ret[])
{
    char const digit[] = "0123456789";
    char* retstring = ret;
    if (n < 0)
    {
        *retstring++ = '-';
        n *= -1;
    }
    int shifter = n;
    do{
        ++retstring;
        shifter = shifter/10;
    } while (shifter);
    *retstring = '\0';
    do {
        *--retstring = digit[n%10];
        n = n/10;
    } while(n);
    return ret;
}