
# 1 
int obdRevConvert_1F (float val, unsigned int *A, unsigned int *B, unsigned int *C, unsigned int *D) {
 *A = (unsigned int)((long)val / 256);
 *B = (unsigned int)((long)val % 256);
 return 2;
}