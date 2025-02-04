
# 1 
void mlt_strupper(char *buffer)
{
 while (*buffer != '\0') {
  if ((*buffer >= 'a') && (*buffer <= 'z')) *buffer -= 32;
  buffer++;
 }
}