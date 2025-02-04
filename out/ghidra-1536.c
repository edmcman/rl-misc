
# 1 
int func0(EVP_PKEY_CTX *ctx){undefined4 *in_RDX;undefined4 *in_RSI;*(undefined4 *)ctx = 0;*(undefined4 *)(ctx + 4) = 1;*(undefined4 *)(ctx + 8) = 2;*(undefined4 *)(ctx + 0xc) = 3;*in_RSI = 9;in_RSI[1] = 5;in_RSI[2] = 3;in_RSI[3] = 4;*in_RDX = 9;in_RDX[1] = 5;in_RDX[2] = 3;in_RDX[3] = 4;return (int)(in_RDX + 3);}