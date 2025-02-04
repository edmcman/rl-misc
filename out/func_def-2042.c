#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
float diff_stat_reg1_reg2(float mx, float bx,
     float my, float by,
     float scale12, int *split,
     float *fl,
     int xmax, int ymax){
# 480 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/cdiener/bar1_project/refs/heads/master/cellid/cellID-1.4.3_hack/split_and_overlap.c"
  int ui,uj;
  int i,j;
  int u1,u2;
  float sum;
  float total;
  float tmp;

  int offx,offy;

  sum=0.0;
  total=0.0;

  for(i=50;i<xmax-50;i++){
    offx=(int)(bx+mx*((float)i)+0.5);
    offy=(int)(by+my*((float)i)+0.5);
    for(j=50;j<ymax-50;j++){
      u1=j*xmax+i;
      if (split[u1]==1){
 ui=i+offx;
 uj=j+offy;
 if ((ui>=0)&&(ui<xmax)&&(uj>=0)&&(uj<ymax)){
   u2=uj*xmax+ui;
   if (split[u2]==2){
     tmp=((fl[u2]*scale12)-fl[u1]);
     sum+=(tmp*tmp);
     total+=1.0;
   }
 }else{


 }
      }
    }
  }


  if (total<=0.0){

    return 1.0e30;
  }


  return (sum/total);


}