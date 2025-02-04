#include <math.h>

# 1 
void dot_matrix_vector_did(double *matrix, long *in, double *out) {
  out[0] = matrix[0]*in[0] + matrix[1]*in[1] + matrix[2]*in[2];
  out[1] = matrix[3]*in[0] + matrix[4]*in[1] + matrix[5]*in[2];
  out[2] = matrix[6]*in[0] + matrix[7]*in[1] + matrix[8]*in[2];
}