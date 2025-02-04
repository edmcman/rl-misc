#include <stdlib.h>

#include <unistd.h>

# 1 
char *chcopy(char *p, char *q)
{

 while ((*p = *q++) != 0)
  ++p;
 return (p);
}