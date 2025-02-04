#include <stdio.h>

# 1 
int registra_venda(int *produto, int valor_desconto){

    if(*produto >= valor_desconto){
        (*produto) -= valor_desconto ;
        return 1;
    }
    else{
        return 0;
    }
}