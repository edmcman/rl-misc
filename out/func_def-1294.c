#include <gmp.h>

# 1 
static const char* parse_opt_sign(const char* cp, int* isNegative)
{
 if (*cp == '+')
 {
  *isNegative = 0;
  cp++;
 }
 else if (*cp == '-')
 {
  *isNegative = 1;
  cp++;
 }
 else
 {
  *isNegative = 0;
 }
 return cp;
}