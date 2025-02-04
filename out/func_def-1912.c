
# 1 
void sse_dot(float vec1[4], float vec2[4], float* result) {
__asm__ volatile (
   "movups (%0), %%xmm0                    \n"
   "movups (%1), %%xmm1                    \n"
   "                                       \n"
   "mulps   %%xmm1, %%xmm0                 \n"
   "movhlps %%xmm0, %%xmm1                 \n"
   "addps   %%xmm0, %%xmm1                 \n"
   "movaps  %%xmm1, %%xmm0                 \n"
   "shufps  $0x01,  %%xmm1, %%xmm1         \n"
   "addss   %%xmm1, %%xmm0                 \n"
   "movss   %%xmm0, (%2)                   \n"
   :
   : "r" (vec1), "r" (vec2), "r" (result));
}