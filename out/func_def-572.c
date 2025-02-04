#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <math.h>

#include <dlfcn.h>

# 1 
static void get_yuv2rgb_coeffs(float brightness, float contrast, float uvcos, float uvsin,
                               float *ry, float *ru, float *rv, float *rc,
                               float *gy, float *gu, float *gv, float *gc,
                               float *by, float *bu, float *bv, float *bc) {
  *ry = 1.164 * contrast;
  *gy = 1.164 * contrast;
  *by = 1.164 * contrast;
  *ru = 0 * uvcos + 1.596 * uvsin;
  *rv = 0 * uvsin + 1.596 * uvcos;
  *gu = -0.391 * uvcos + -0.813 * uvsin;
  *gv = -0.391 * uvsin + -0.813 * uvcos;
  *bu = 2.018 * uvcos + 0 * uvsin;
  *bv = 2.018 * uvsin + 0 * uvcos;
  *rc = (-16 * *ry + (-128) * *ru + (-128) * *rv) / 255.0 + brightness;
  *gc = (-16 * *gy + (-128) * *gu + (-128) * *gv) / 255.0 + brightness;
  *bc = (-16 * *by + (-128) * *bu + (-128) * *bv) / 255.0 + brightness;


  *rc += 0.5 - contrast / 2.0;
  *gc += 0.5 - contrast / 2.0;
  *bc += 0.5 - contrast / 2.0;
}