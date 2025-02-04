#include <stdio.h>

# 1 
void reverse( char string[] )
{
 int e, sz;
 char temp[ 100 ];

 for( sz = 0; string[ sz ] != '\0'; ++sz )
 {
  temp[ sz ] = string[ sz ];
 }

 for( e = 0; e < sz; ++e )
 {
  string[ e ] = temp[ sz - ( e + 1 ) ];
 }
}