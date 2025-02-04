
# 1 
int obdRevConvert_32 (float val, unsigned int *A, unsigned int *B, unsigned int *C, unsigned int *D) {
 val = val + 8192.0f;
 val = val * 4.0f;
 *A = (unsigned int)((long)val / 256);
 *B = (unsigned int)((long)val % 256);
 return 2;
}