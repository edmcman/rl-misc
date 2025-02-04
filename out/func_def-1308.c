#include <stdarg.h>

# 1 
static char *pfSignedDec(char *parseBuffer, long int value)
{
 parseBuffer[23] = 0;
 char *current = parseBuffer + 22;
 int runningValue = value;

 if (runningValue < 0)
  runningValue *= -1;

 do
 {
  int digit = runningValue % 10;
  runningValue /= 10;
  *current-- = '0' + digit;
 }
 while(runningValue);

 if (value < 0)
  *current-- = '-';

 return current+1;
}