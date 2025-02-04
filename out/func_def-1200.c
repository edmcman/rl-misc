
# 1 
void define_ranges(float *vec_ranges_lo, float *vec_ranges_hi, float maxsep, int *vec_nbins, float *vec_binwidths)
{

    float r;
    int i = 0;
    for(i=0;i<3;i++)
    {
        r = vec_ranges_hi[i] - vec_ranges_lo[i];
        vec_nbins[i] = (int)(r/maxsep);
        vec_binwidths[i] = r/vec_nbins[i];

    }

}