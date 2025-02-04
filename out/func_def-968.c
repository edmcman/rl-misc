
# 1 
int obdRevConvert_06_09 (float val, unsigned int *A, unsigned int *B, unsigned int *C, unsigned int *D) {
 *A = (unsigned int)(128.0f*val/100.0f) + 128;
 return 1;
}