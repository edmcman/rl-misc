#include <math.h>

# 1 
int intersect_triangle3(double orig[3], double dir[3],
   double vert0[3], double vert1[3], double vert2[3],
   double *t, double *u, double *v)
{
   double edge1[3], edge2[3], tvec[3], pvec[3], qvec[3];
   double det,inv_det;


   edge1[0]=vert1[0]-vert0[0]; edge1[1]=vert1[1]-vert0[1]; edge1[2]=vert1[2]-vert0[2];;
   edge2[0]=vert2[0]-vert0[0]; edge2[1]=vert2[1]-vert0[1]; edge2[2]=vert2[2]-vert0[2];;


   pvec[0]=dir[1]*edge2[2]-dir[2]*edge2[1]; pvec[1]=dir[2]*edge2[0]-dir[0]*edge2[2]; pvec[2]=dir[0]*edge2[1]-dir[1]*edge2[0];;


   det = (edge1[0]*pvec[0]+edge1[1]*pvec[1]+edge1[2]*pvec[2]);


   tvec[0]=orig[0]-vert0[0]; tvec[1]=orig[1]-vert0[1]; tvec[2]=orig[2]-vert0[2];;
   inv_det = 1.0 / det;

   qvec[0]=tvec[1]*edge1[2]-tvec[2]*edge1[1]; qvec[1]=tvec[2]*edge1[0]-tvec[0]*edge1[2]; qvec[2]=tvec[0]*edge1[1]-tvec[1]*edge1[0];;

   if (det > 10e-6)
   {
      *u = (tvec[0]*pvec[0]+tvec[1]*pvec[1]+tvec[2]*pvec[2]);
      if (*u < 0.0 || *u > det)
  return 0;


      *v = (dir[0]*qvec[0]+dir[1]*qvec[1]+dir[2]*qvec[2]);
      if (*v < 0.0 || *u + *v > det)
  return 0;

   }
   else if(det < -10e-6)
   {

      *u = (tvec[0]*pvec[0]+tvec[1]*pvec[1]+tvec[2]*pvec[2]);
      if (*u > 0.0 || *u < det)
  return 0;


      *v = (dir[0]*qvec[0]+dir[1]*qvec[1]+dir[2]*qvec[2]) ;
      if (*v > 0.0 || *u + *v < det)
  return 0;
   }
   else return 0;

   *t = (edge2[0]*qvec[0]+edge2[1]*qvec[1]+edge2[2]*qvec[2]) * inv_det;
   (*u) *= inv_det;
   (*v) *= inv_det;

   return 1;
}