#include <ctype.h>

# 1 
static void perform_basic_strip(char *output, char *input)
{
 char sinceK = 0, isCom = 0;
 for(; *input; input++)
 {
  if(strchr("\001\002\017\037\026", *input))
   continue;
  else if(*input == '\003')
   { sinceK = 1; isCom = 0; }
  else if(*input >= '0' && *input <= '9')
  {
   if(sinceK == 0)
    *output++ = *input;
   else if(++sinceK > 2 + isCom)
    sinceK = isCom = 0;
  } else if(*input == ',' && sinceK != 0)
   isCom = 1;
  else
   *output++ = *input;
 }
 *output = '\0';
 return;
}