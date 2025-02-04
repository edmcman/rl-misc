
# 1 
static int imcomp_float2nan(float *indata,
    long tilelen,
    int *outdata,
    float nullflagval,
    int *status)




{
    int ii;

    for (ii = 0; ii < tilelen; ii++) {

      if (indata[ii] == nullflagval)
        outdata[ii] = -1;
    }

    return(*status);
}