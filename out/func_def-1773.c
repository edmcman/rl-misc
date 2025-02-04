
# 1 
int max_index(int idx[], int a[], int n)
{
    int s=0,k;
    int j,max,x=0;
    max=a[0];
    for(j=0; j<n; j++)
    {
        if(max<a[j])
        {
            max=a[j];
            x=j;
        }
    }
    for(j=0,k=0; j<n; j++)
        if(max==a[j])
        {
            idx[k]=j;
            k++,s++;
        }
    return s;
}