#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
int matCalcCircleM(float p1[3], float p2[3],float p3[3],float m[3])
{
  double ma,mb,mc,md,me,mf,mg,mh,mi;
  double b1,b2,b3;
  double det,det1,det2,det3;






  ma=2.0*(p1[0]-p2[0]);
  mb=2.0*(p1[1]-p2[1]);
  mc=2.0*(p1[2]-p2[2]);
  md=2.0*(p1[0]-p3[0]);
  me=2.0*(p1[1]-p3[1]);
  mf=2.0*(p1[2]-p3[2]);

  mg=p1[1]*p3[2]-p3[1]*p1[2]+p2[1]*p1[2]-p1[1]*p2[2]+p3[1]*p2[2]-p2[1]*p3[2];
  mh=p2[0]*p3[2]-p2[0]*p1[2]+p3[0]*p1[2]-p3[0]*p2[2]+p1[0]*p2[2]-p1[0]*p3[2];
  mi=p2[0]*p1[1]-p2[0]*p3[1]+p3[0]*p2[1]-p3[0]*p1[1]+p1[0]*p3[1]-p1[0]*p2[1];






  b1=(p1[0]*p1[0]+p1[1]*p1[1]+p1[2]*p1[2])-(p2[0]*p2[0]+p2[1]*p2[1]+p2[2]*p2[2]);
  b2=(p1[0]*p1[0]+p1[1]*p1[1]+p1[2]*p1[2])-(p3[0]*p3[0]+p3[1]*p3[1]+p3[2]*p3[2]);
  b3=p2[0]*p3[1]*p1[2]+p3[0]*p1[1]*p2[2]+p1[0]*p2[1]*p3[2]-p2[0]*p1[1]*p3[2]-p3[0]*p2[1]*p1[2]-p1[0]*p3[1]*p2[2];
  b3*=-1.0;

  det=ma*(me*mi-mh*mf)-mb*(md*mi-mg*mf)+mc*(md*mh-mg*me);

  det1=b1*(me*mi-mh*mf)-mb*(b2*mi-b3*mf)+mc*(b2*mh-b3*me);
  det2=ma*(b2*mi-b3*mf)-b1*(md*mi-mg*mf)+mc*(md*b3-mg*b2);
  det3=ma*(me*b3-mh*b2)-mb*(md*b3-mg*b2)+b1*(md*mh-mg*me);

  if(det==0.0) {



    return -1;
  }






  m[0]=(float)(det1/det);
  m[1]=(float)(det2/det);
  m[2]=(float)(det3/det);







  return 0;
}