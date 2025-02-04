
# 1 
void sse_vecmat_mult(float mat[4*4], float vec[4], float result[4]) {
__asm__ volatile (

   "movups (%1), %%xmm4                    \n"
   "movaps %%xmm4, %%xmm5                  \n"
   "movaps %%xmm4, %%xmm6                  \n"
   "movaps %%xmm4, %%xmm7                  \n"


   "movups 0x00(%0), %%xmm0                \n"
   "movups 0x10(%0), %%xmm1                \n"
   "movups 0x20(%0), %%xmm2                \n"
   "movups 0x30(%0), %%xmm3                \n"


   "shufps $0b00000000, %%xmm4, %%xmm4     \n"
   "shufps $0b01010101, %%xmm5, %%xmm5     \n"
   "shufps $0b10101010, %%xmm6, %%xmm6     \n"
   "shufps $0b11111111, %%xmm7, %%xmm7     \n"


   "mulps %%xmm4, %%xmm0                   \n"
   "mulps %%xmm5, %%xmm1                   \n"
   "mulps %%xmm6, %%xmm2                   \n"
   "mulps %%xmm7, %%xmm3                   \n"


   "addps %%xmm1, %%xmm0                   \n"
   "addps %%xmm3, %%xmm2                   \n"
   "addps %%xmm2, %%xmm0                   \n"


   "movups %%xmm0, (%2)                    \n"
   :
   : "r" (mat), "r" (vec), "r" (result)
   : "memory"
);
}