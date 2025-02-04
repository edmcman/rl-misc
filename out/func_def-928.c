#include <math.h>

#include <malloc.h>

# 1 
void

add_underscore(char *nameout, char *namein)





{
   int indexing=0;

   do
   {
      if(namein[indexing]==' ')
         nameout[indexing]='_';
      else
         nameout[indexing]=namein[indexing];

      indexing++;
   } while (namein[indexing-1] != '\0');
}