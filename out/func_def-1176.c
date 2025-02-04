
# 1 
void
cliffsd(double *control, int *controlcnt, double *pilot, int *pilotcnt,
    double *delta) {
  int i, j, result;
  *delta = 0;

  for (i = 0; i < *pilotcnt; i++) {
    result = 0;
    for (j = 0; j < *controlcnt; j++) {
      if (pilot[i] > control[j]) {
        result --;
      } else if (control[j] > pilot[i]) {
        result ++;
      }
    }
    *delta += ((double)result / *pilotcnt);
  }

  *delta = (double)(*delta / *controlcnt);
}