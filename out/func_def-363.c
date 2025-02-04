
# 1 
int obdRevConvert_4C (float val, unsigned int *A, unsigned int *B, unsigned int *C, unsigned int *D) {
 *A = (unsigned int)(255.0f*val/100.0f);
 return 1;
}