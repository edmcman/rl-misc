
# 1 
void ClearBit( int A[ ], int k )
{
   int i = k/32;
   int pos = k%32;

   unsigned int flag = 1;

   flag = flag << pos;
   flag = ~flag;

   A[i] = A[i] & flag;
}