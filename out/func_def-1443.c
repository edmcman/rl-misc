
# 1 
int obdRevConvert_0E (float val, unsigned int *A, unsigned int *B, unsigned int *C, unsigned int *D) {
 *A = (unsigned int)((val + 64.0f) * 2.0f);
 return 1;
}