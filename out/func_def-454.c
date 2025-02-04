#include <errno.h>

#include <string.h>

#include <unistd.h>

#include <time.h>

# 1 
void wdc_UtilsDeleteCharFromString(char* buffer, int buffSize, char charToRemove)
{
 int i = 0;
 int count = 0;

 if (!buffer || !buffSize)
  return;





 for (i = 0; ((i < buffSize) && (buffer[i] != '\0')); i++) {
  if (buffer[i] != charToRemove)
   buffer[count++] = buffer[i];
 }
 buffer[count] = '\0';
}