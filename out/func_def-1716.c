
# 1 
void strcpy(char * dest, const char * source)
{
 int i = 0;
 while ((dest[i] = source[i]) != '\0')
 {
  i++;
 }
}