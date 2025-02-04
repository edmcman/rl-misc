#include <stdint.h>

# 1 
void intToString(int n, char*buffer, int digits)
{
 *buffer = ((n/10)%10)+'0';
 *(buffer+1)=(n%10)+'0';
 *(buffer+2)=0;
}