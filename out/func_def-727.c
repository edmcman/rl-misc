
# 1 
int imcomp_nullvaluesi2(
     short *idata,
     long tilelen,
     short nullflagval,
     short nullval,
     int *status)




{
    long ii;

    for (ii=0; ii < tilelen; ii++)
    {
        if (idata[ii] == nullflagval)
     idata[ii] = nullval;
    }
    return(*status);
}