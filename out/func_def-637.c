
# 1 
int obdRevConvert_22 (float val, unsigned int *A, unsigned int *B, unsigned int *C, unsigned int *D) {
 val = val / 0.079f;
 *A = (unsigned int)((long)val / 256);
 *B = (unsigned int)((long)val % 256);
 return 2;
}