
















# 1 
const char * jx9ExtractDirName(const char *zPath, int nByte, int *pLen)
{
 const char *zEnd = &zPath[nByte - 1];
 int c, d;
 c = d = '/';



 while( zEnd > zPath && ( (int)zEnd[0] != c && (int)zEnd[0] != d ) ){
  zEnd--;
 }
 *pLen = (int)(zEnd-zPath);






 if( zEnd == zPath && ( (int)zEnd[0] != c && (int)zEnd[0] != d) ){

  *pLen = sizeof(char);
  return ".";
 }
 if( (*pLen) == 0 ){
  *pLen = sizeof(char);



  return "/";

 }
 return zPath;
}