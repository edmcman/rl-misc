#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <ctype.h>

#include <math.h>

#include <limits.h>

# 1 
int ident_codon(char *codon)
{
   int icode = 0;
   int x;

   for (x = 0; x < 3; x++) {
      switch (codon[x]) {
      case 'T':
      case 't':
      case 'U':
      case 'u':
     codon[x] = (char) 1;
     continue;
      case 'C':
      case 'c':
     codon[x] = (char) 2;
     continue;
      case 'A':
      case 'a':
     codon[x] = (char) 3;
     continue;
      case 'G':
      case 'g':
     codon[x] = (char) 4;
     continue;
      case '\0':
     return 0;
      default:
     codon[x] = (char) 0;
     break;
      }
   }
   if (codon[0] * codon[1] * codon[2] != 0)
      icode = (codon[0] - 1) * 16 + codon[1]
     + (codon[2] - 1) * 4;
   else
      icode = 0;

   return icode;
}