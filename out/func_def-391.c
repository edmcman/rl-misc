#include <math.h>

#include <stdio.h>

# 1 
int planeBoxOverlap(float normal[3], float vert[3], float maxbox[3]) {
  int q;
  float vmin[3],vmax[3],v;
  for (q = 0; q <= 2; q++) {
    v=vert[q];
    if(normal[q]>0.0f) {
      vmin[q]=-maxbox[q] - v;
      vmax[q]= maxbox[q] - v;
    } else {
      vmin[q]= maxbox[q] - v;
      vmax[q]=-maxbox[q] - v;
    }
  }
  if((normal[0] * vmin[0] + normal[1] * vmin[1] + normal[2] * vmin[2])>0.0f) return 0;
  if((normal[0] * vmax[0] + normal[1] * vmax[1] + normal[2] * vmax[2])>=0.0f) return 1;
  return 0;
}