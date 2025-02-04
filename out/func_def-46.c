#include <stdio.h>

# 1 
float polynomialValue(int level, float polynomialEquation[], float adirissa)
{
    int currentCoefficient;
    float value = 0.0, multiplicand = 1.0;

    for(currentCoefficient = 0; currentCoefficient <= level; currentCoefficient++)
    {
        value += polynomialEquation[currentCoefficient] * (multiplicand);
        multiplicand *= adirissa;
    }

    return value;
}