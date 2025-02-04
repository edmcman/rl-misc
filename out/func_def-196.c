

# 1 
char* gkUtf8CharCode(char* str, unsigned int* dstCharCode)
{
 int result = 0, bytesLeft = 0;
 char* p = str, c = *p;
 if (!c) {
  *dstCharCode = 0;
  return p;
 }
 do{
  if ((c & 0xC0) == 0x80) {
   result = (result << 6) | (c & 0x7F);
  } else {
   bytesLeft = 0;
   while (c&0x80) {
    bytesLeft++;
    c = c<<1;
   }
   result = c>>bytesLeft;
  }
  c = *++p;
 }while (c && --bytesLeft>0);
 *dstCharCode = result;
 return p;
}