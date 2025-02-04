#include <stdio.h>

# 1 
void reverse_string( char *str )
{
 char *last_char;





 for(last_char = str; *last_char != '\0'; last_char++)
  ;
 last_char--;






 while(str < last_char) {
  char temp;

  temp = *str;
  *str++ = *last_char;
  *last_char-- = temp;
 }
}