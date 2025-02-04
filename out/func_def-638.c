
# 1 
int is_swapped(int * a, int * b)
{
    int temp,va,vb;
    va=*a;
    vb=*b;
    if(va==vb)
        return 0;
    else if(va>vb)
    {
        temp=*a;
        *a=*b;
        *b=temp;
        return 1;
    }
    return 0;
}