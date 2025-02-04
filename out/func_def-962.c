#include <stdlib.h>

#include <stdio.h>

# 1 
void evolTab(double *Arrivee, double *Depart, double *temps, unsigned int *nombre, double D)
{
    int a = 0, d = 0, t = 0;
    int currentClientNumber=0;

    while((Arrivee[a]!= 0.0 || Depart[d]!=0.0 )&& temps[t] >= D )
    {
        if(Arrivee[a] > Depart[d] )
        {
            nombre[t] = --currentClientNumber;
   temps[t++] = Depart[d];
            d++;
        }
        else
        {
   nombre[t] = ++currentClientNumber;
   temps[t++] = Arrivee[a];
   a++;
        }
    }
}