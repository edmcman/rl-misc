
# 1 
void
hdate_jd_to_gdate (int jd, int *d, int *m, int *y)
{
 int l, n, i, j;
 l = jd + 68569;
 n = (4 * l) / 146097;
 l = l - (146097 * n + 3) / 4;
 i = (4000 * (l + 1)) / 1461001;
 l = l - (1461 * i) / 4 + 31;
 j = (80 * l) / 2447;
 *d = l - (2447 * j) / 80;
 l = j / 11;
 *m = j + 2 - (12 * l);
 *y = 100 * (n - 49) + i + l;

 return;
}