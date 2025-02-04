
# 1 
int obdRevConvert_24_2B (float val, unsigned int *A, unsigned int *B, unsigned int *C, unsigned int *D) {
 val = val / 0.0000305f;
 *A = (unsigned int)((long)val / 256);
 *B = (unsigned int)((long)val % 256);
 return 2;
}