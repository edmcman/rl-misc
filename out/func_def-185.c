#include <stdlib.h>

#include <stdio.h>

# 1 
void ScrivereElemento(float matrice[], int i, int j, float valore)
{
matrice[(i*(int)matrice[1]+j)] = valore;

return;
}