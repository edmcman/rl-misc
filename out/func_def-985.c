
# 1 
static double PeakInterpolation(double fMaxVal, double fLeftBinVal,
                                double fRightBinVal, double *pFDiffFromMax)
{

    *pFDiffFromMax = (.5 * (fLeftBinVal - fRightBinVal) /
                      (fLeftBinVal - (2*fMaxVal) + fRightBinVal));

    return fMaxVal - (.25 * (fLeftBinVal - fRightBinVal) * *pFDiffFromMax);
}