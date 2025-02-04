
# 1 
void strcpy(char * dst, const char * src){
 unsigned int i;
 for(i = 0; src[i] != '\0'; i++)
  dst[i] = src[i];
 dst[i] = '\0';
}