
# 1 
void rotr(int *a, int *b, int *c)
{
 int tmp;
 tmp=*c;
 *c=*b;
 *b=*a;
 *a=tmp;
}