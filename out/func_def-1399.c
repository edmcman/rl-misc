#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <assert.h>

#include <time.h>

# 1 
static unsigned int prbs15_next_28_bits(unsigned short seed_rev,
     unsigned short *next_seed_rev)
{
 unsigned int prbs_result, temp;

 prbs_result = seed_rev ^ (seed_rev >> 1);

 temp = (prbs_result << (15)) | seed_rev;

 prbs_result = (temp ^ (temp >> 1)) & 0xFFFFFFF;

 if (next_seed_rev) {
  *next_seed_rev = (unsigned short)(prbs_result >>
   ((28) - (15)));
 }

 return prbs_result;
}