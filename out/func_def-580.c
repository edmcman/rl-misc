
# 1 
int compare(int *min, int *mid, int *max)
{
    int temp;
    if(*min>*mid)
    {
        temp=*min;
        *min=*mid;
        *mid=temp;
    }
    if(*min>*max)
    {
        temp=*min;
        *min=*max;
        *max=temp;
    }
    if(*mid>*max)
    {
        temp=*mid;
        *mid=*max;
        *max=temp;
    }
    return 0;
}