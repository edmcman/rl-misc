#include <stdio.h>

#include <string.h>

#include <stdlib.h>

# 1 
float fadd_byAddress(float *a_firstValue, float *a_secondValue)
{
    float a_resultValue;
    *a_firstValue += 41.0f;
    *a_secondValue += 1.0f;
    a_resultValue = *a_firstValue + *a_secondValue;
    return a_resultValue;
}