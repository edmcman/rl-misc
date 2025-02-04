
# 1 
void decodePosicionAborrar(int *pCoordenadasPosicionAborrar, int length, int posicionAborrar){
 if(posicionAborrar > 80){
  return;
 }

 int i, j, count = 0;

 for (j=0; j < 9; j++) {
      for (i=0; i < 9; i++) {

    if(count == posicionAborrar){
     pCoordenadasPosicionAborrar[0] = i;
     pCoordenadasPosicionAborrar[1] = j;
     return;
    }

    count++;
   }
 }
}