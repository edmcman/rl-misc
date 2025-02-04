
# 1 
int find(float a[], int n, float x)
{
    int i, flag = 1;
    for(i = 0; i < n; i++)
        if(a[i] == x)
            flag = 0;
    return flag;
}