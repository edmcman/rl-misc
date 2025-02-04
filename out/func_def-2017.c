
# 1 
void BGBBTJ_BC7_EncodeBlock_VecSwapG(int *clra, int *clrb)
 { int t; t=clra[1]; clra[1]=clrb[1]; clrb[1]=t; }