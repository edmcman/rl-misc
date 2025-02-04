#include <math.h>

# 1 
void cquat_to_matrix(const double *q, double *m) {
# 173 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/jani-hautamaki/gsim/refs/heads/master/euclid/src/libeuclid/src/cquat_matrix.c"
 m[((1)-1)*(3)+((1)-1)] = 1.0-2.0*( q[2]*q[2] + q[1]*q[1] );
 m[((2)-1)*(3)+((1)-1)] = 2.0*( q[2]*q[3] + q[1]*q[0] );
 m[((3)-1)*(3)+((1)-1)] = 2.0*( q[2]*q[0] - q[1]*q[3] );

 m[((1)-1)*(3)+((2)-1)] = 2.0*( q[0]*q[1] - q[2]*q[3] );
 m[((2)-1)*(3)+((2)-1)] = 1.0-2.0*( q[0]*q[0] + q[2]*q[2] );
 m[((3)-1)*(3)+((2)-1)] = 2.0*( q[0]*q[3] + q[2]*q[1] );

 m[((1)-1)*(3)+((3)-1)] = 2.0*( q[1]*q[3] + q[0]*q[2] );
 m[((2)-1)*(3)+((3)-1)] = 2.0*( q[1]*q[2] - q[0]*q[3] );
 m[((3)-1)*(3)+((3)-1)] = 1.0-2.0*( q[1]*q[1] + q[0]*q[0] );
# 193 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/jani-hautamaki/gsim/refs/heads/master/euclid/src/libeuclid/src/cquat_matrix.c"
}