
# 1 
int median_for_sorted_data(const double* sorted_data, int n, double* median)
{
    const int lhs = (n - 1) / 2 ;
    const int rhs = n / 2 ;

    if(n == 0)
    {
        (*median) = 0;
        return 0;
    }

    if (lhs == rhs)
    {
        (*median) = sorted_data[lhs] ;
    }
    else
    {
        (*median) = (sorted_data[lhs] + sorted_data[rhs]) / 2.0 ;
    }

    return 0;
}