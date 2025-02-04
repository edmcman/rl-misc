#include <stdio.h>

#include <stddef.h>

#include <stdlib.h>

#include <string.h>

# 1 
void count_motif(int *m_p,int n_occurrences,int init_index,int lower_border,int upper_border,int *out)
{
# 1575 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/kreimanlab/CisRegulatoryCodes/refs/heads/master/cisregul/crm_lib.c"
  int i;
  int p;
  int n=0;



  i=init_index;
  p=m_p[i] ;
  while (p<upper_border) {
    if (p<lower_border) {
      init_index++;
    } else {
      n++;
    }

    i++;
    if (i <= n_occurrences) {
      p=m_p[i];
    } else {
      p=upper_border+1;
    }
  }

  out[0]=n;
  out[1]=init_index;
}