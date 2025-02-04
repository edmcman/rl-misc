
# 1 
void
j2jcal(int *y, int *m, int *d, double j)
{
    int i;
    int k;
    int l;
    int n;
    int x;


    x = (int)(j+0.5) + 1402;
    k = (x - 1) / 1461;
    l = x - (1461 * k);
    n = (l - 1) / 365 - (l / 1461);
    i = l - (365 * n) + 30;
    x = (80 * i) / 2447;
    *d = i - (2447 * x) / 80;
    i = x / 11;
    *m = x + 2 - (12 * i);
    *y = (4 * k) + n + i - 4716;

    return;
}