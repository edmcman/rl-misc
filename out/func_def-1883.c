
# 1 
void minmax(int *arr, int *size, int *min, int *max)
{
    if (*min > *arr) *min = *arr;
    if (*max < *arr) *max = *arr;
}