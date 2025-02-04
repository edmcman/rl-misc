#include <stdio.h>

#include <math.h>

#include <ctype.h>

#include <stdlib.h>

#include <string.h>

# 1 
void check_feat(int featindx, int status, int *setindx)
{
     if(featindx == -1) {
          if(!status)
               *setindx = 0;
     }
     else {
          if(featindx != status)
               *setindx = 0;
     }
     return;
}