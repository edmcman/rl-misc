
# 1 
char * StrCpy( char * to, const char * from )
{
 char * _to = to;
 char * _from = from;

 while( *_from != '\0' )
 {
  *_to++ = *_from++;
 }

 *_to = '\0';

 return to;
}