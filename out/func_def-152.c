
# 1 
void scopy(char *dest, char *src, int len) {
  int i;
  for (i = 0; i < len && src[i]; i++) {
    dest[i] = src[i];
  }
  dest[i] = '\0';
}