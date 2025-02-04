





# 1 
static void vkel_strpy(char *dest, char *src)
 {
  while (*src) {
   *dest = *src;
   dest++;
   src++;
  }
 }