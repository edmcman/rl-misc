#include <stdio.h>

# 1 
void findmin(int * row,int * re){
 int cmin,c;
 cmin=row[0];
 for (int i = 1; i < 4; ++i)
 {
  if(cmin>row[i]){
   cmin=row[i];
   re[0]=0;
   re[1]=0;
   re[2]=0;
   re[3]=0;
   re[i]=1;
  }else{if(cmin==row[i])
   re[i]=1;
  }
 }
}