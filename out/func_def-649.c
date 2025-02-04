
# 1 
int cliptest(float p,float q,float *u1,float *u2)
{
float r;
int val=1;
if(p<0.0)
{
r=q/p;
if(r>*u2)
val=0;
else if(r>*u1)
*u1=r;
}
else if(p>0.0)
{
r=q/p;
if(r<*u1)
val=0;
else if(r<*u2)
*u2=r;
}
else if(q<0.0)
val=0;
return val;
}