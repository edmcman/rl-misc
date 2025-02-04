
# 1 
void removeReturns(char *dest, char *src)



{
int i = 0;
int j = 0;


for (;;)
    {

    while(src[j] == '\r')
 j++;


    dest[i] = src[j];


    if(src[j] == '\0')
 break;


    i++;
    j++;
    }
}