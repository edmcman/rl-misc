#include <stdlib.h>

#include <stdio.h>

# 1 
int sceltaPrimaClasse( unsigned int mappaPosti[], unsigned int postiPrimaClasse)
{
    size_t indiceMappaPosti;

    indiceMappaPosti = 0;
    do{
        if( mappaPosti[indiceMappaPosti] == 0 ){
            mappaPosti[indiceMappaPosti] = 1;
            return (indiceMappaPosti + 1);
        }
        else{
            indiceMappaPosti++;
        }

    }while( indiceMappaPosti < postiPrimaClasse );

return 0;
}