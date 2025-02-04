#include <stdio.h>

# 1 
void change_position(int *positionI, int *positionJ){
 int aux;

 aux = *positionI;
 *positionI = *positionJ;
 *positionJ = aux;
}