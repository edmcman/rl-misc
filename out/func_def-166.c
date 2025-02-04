






# 1 
void wad_cleanname(char *in, char *out)
{
 int i, c;
 for (i = 0;i < 16 && *in;i++)
 {
  c = *in++;
  if (c >= 'A' && c <= 'Z')
   c += 'a' - 'A';
  *out++ = c;
 }
 for (;i < 17;i++)
  *out++ = 0;
}