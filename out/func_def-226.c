
# 1 
void string_copy(char *dest, const char* src)
{
 while (*src)
 {
  *dest=*src;
  dest++;
  src++;
 }
}