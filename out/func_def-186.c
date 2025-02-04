
# 1 
void soma1bin(int v[], int tam){
 int i, c=1;
 for (i=0;i<tam;i++){
  if(c==1){
   if(v[i]==0){
    v[i]+=c;
    c=0;
   }else if(v[i]==1){
    v[i]=0;
   }
  }
 }
}