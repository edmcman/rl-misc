
# 1 
void saxpy(int a[10], int b[10], int c[10], int alpha){
 int i;
 for(i=0;i<10;i++){
  c[i]=a[i]+alpha*b[i];
 }
 return;
}