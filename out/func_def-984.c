
# 1 
void matvec3(double *A, double *B, double *C, double alpha, double beta) {

    C[0] = beta*C[0] + alpha*(A[0]*B[0] + A[1]*B[1] + A[2]*B[2]);
    C[1] = beta*C[1] + alpha*(A[3]*B[0] + A[4]*B[1] + A[5]*B[2]);
    C[2] = beta*C[2] + alpha*(A[6]*B[0] + A[7]*B[1] + A[8]*B[2]);

    return;
}