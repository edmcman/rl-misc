#include <stdbool.h>

#include <string.h>

# 1 
int userHashFunctionDJB2 (char *pKey, unsigned int size,
   unsigned int *pResult, unsigned int tableSize)
{
 unsigned long hash = 5381;
 int c;

 while ((c = *pKey++))
 {
  hash = ((hash << 5) + hash) + c;
 }

 *pResult = hash % tableSize;

 return true;
}