
# 1 
void COM_BitSet( int array[], int bitNum ) {
 int i;

 i = 0;
 while ( bitNum > 31 ) {
  i++;
  bitNum -= 32;
 }

 array[i] |= ( 1 << bitNum );
}