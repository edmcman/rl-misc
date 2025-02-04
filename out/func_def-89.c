
# 1 
void BGBBTJ_BC7_EncodeBlock_VecSwapR(int *clra, int *clrb)
 { int t; t=clra[0]; clra[0]=clrb[0]; clrb[0]=t; }