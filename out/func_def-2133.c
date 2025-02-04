
# 1 
void InnerProduct(double *pV1,double *pV2,int n,double *pS1)
{
 *pS1=0;
 for (int i = 0; i <= n-1; i = i + 1)
 {
  *pS1=*pS1+(*(pV1+i)**(pV2+i));
 }
}