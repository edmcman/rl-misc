
# 1 
void quant_decode(int du[64], int qtab[64])
{
    int i; for (i=0; i<64; i++) du[i] *= qtab[i];
}