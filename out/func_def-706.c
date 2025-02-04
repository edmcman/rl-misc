#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <stdbool.h>

#include <string.h>

#include <time.h>

# 1 
int comparer(const char lettre,const char motSecret[], char motEssai[], const int tailleMotSecret)
{
    int i = 0;
    int succes = 0;
    for(i = 0; i < tailleMotSecret; i++)
    {
        if(motSecret[i] == lettre)
        {
            motEssai[i] = lettre;
            succes++;
        }
    }
    if (succes == 0)
        return 0;
    else
        return 1;
}