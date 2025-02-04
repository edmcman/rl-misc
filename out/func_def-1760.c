#include <stdio.h>

# 1 
void findmax(int * row,int * re){
 int cmax,c;
 cmax=row[0];
 for (int i = 1; i < 4; ++i)
 {
  if(cmax<row[i]){
   cmax=row[i];
   re[0]=0;
   re[1]=0;
   re[2]=0;
   re[3]=0;
   re[i]=1;
  }else{if(cmax==row[i])
   re[i]=1;
  }
 }

}