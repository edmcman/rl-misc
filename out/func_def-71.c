#include <stdio.h>

# 1 
void media_moda(int *media, int *moda, int tam, int vetor[]){

        int soma=0,i,j,maior=0,aux=0;

        for (i=0;i<tam;i++){
              soma+=vetor[i];
              for(j=0;j<tam;j++){
                      if(vetor[i]==vetor[j]){
                            maior++;
                      }
              }
              if(maior>aux){
                 aux=maior;
                 *moda=vetor[i];
              }
              maior=0;
        }
        *media=soma/tam;
}