
# 1 
void sse_cross_prod(float v1[4], float v2[4], float result[4]) {
__asm__ volatile (

    "movups (%0), %%xmm0                    \n"
    "movups (%1), %%xmm1                    \n"


    "movaps %%xmm0, %%xmm2                  \n"
    "movaps %%xmm1, %%xmm3                  \n"


    "shufps $0b00001001, %%xmm0, %%xmm0     \n"
    "shufps $0b00010010, %%xmm1, %%xmm1     \n"

    "shufps $0b00010010, %%xmm2, %%xmm2     \n"
    "shufps $0b00001001, %%xmm3, %%xmm3     \n"


    "mulps %%xmm1, %%xmm0                   \n"
    "mulps %%xmm3, %%xmm2                   \n"


    "subps %%xmm2, %%xmm0                   \n"
    "movups %%xmm0, (%2)                    \n"
    :
    : "r" (v1), "r" (v2), "r" (result)
);
}