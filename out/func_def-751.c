#include <stdio.h>

#include <string.h>

# 1 
void remove_dupc(char str[])
{
 int i,j,k,match;

 for( i=0; str[i]; i++)
 {
  for( j=i+1; str[j]; j++)
  {
   if( str[i] != str[j] )
    continue;
   else
   {
    match = j;
    while( str[i] == str[j+1] )
     j++;
    k = j-match+1;
    j -= k;
    k += match;
    while( str[match++] = str[k++]) ;
   }
  }
 }

}