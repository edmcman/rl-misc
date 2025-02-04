
# 1 
void iKinv (int K,int nC,int* iC,int* ic1,int* ic2) {





    iC[0]=nC-1;

    while (K>=(nC-iC[0])*(nC-iC[0]))
    { K-=(nC-iC[0])*(nC-iC[0]);
        iC[0]--;
    }



    if (K<(nC-iC[0]-1)*(nC-iC[0]-1))
    {
        ic1[0]=K/(nC-iC[0]-1) +iC[0]+1;
        ic2[0]=K%(nC-iC[0]-1) +iC[0]+1;
        return;
    }
    K-=(nC-iC[0]-1)*(nC-iC[0]-1);


    if (K<nC-iC[0]-1)
    {
        ic2[0]=iC[0];
        ic1[0]=K +iC[0]+1;
        return;
    }
    K-=(nC-iC[0]-1);
    if (K<nC-iC[0]-1)
    {
        ic2[0]=K +iC[0]+1;
        ic1[0]=iC[0];
        return;
    }


    ic2[0]=iC[0];
    ic1[0]=iC[0];
    return;
}