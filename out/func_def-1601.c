#include <fcntl.h>

# 1 
void closePipe(int *pPipe)
{
  if(*pPipe != -1)
  {
    close(*pPipe);
    *pPipe = -1;
  }
}