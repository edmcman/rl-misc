
# 1 
int util_str_copy(char *dest, char *src, int max_count)
{
 int cnt = 0;

 if (max_count <= 0) return cnt;
 while (*src != '\0')
 {
  *(dest++) = *(src++);
  cnt++;

  if (cnt >= max_count) break;
 }
 *dest = '\0';
 return cnt;
}