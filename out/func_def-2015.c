#include <math.h>

#include <stdio.h>

# 1 
void velocity_error_range(int t, float t1, float v_ini_1, float a, float v_para_prc_err, float v_perp_prc_err, float v_ini_2, float *v_para_range_low_ptr, float *v_para_range_high_ptr, float *v_perp_max_ptr)
{
 float v_exp;

 if(t<=t1)
 {
  v_exp = v_ini_1 + a*t;
  *v_para_range_low_ptr = (1 - v_para_prc_err/100) * v_exp;
  *v_para_range_high_ptr = (1 + v_para_prc_err/100) * v_exp;
  *v_perp_max_ptr = (v_perp_prc_err/100) * v_exp;
 }
 else
 {
  v_exp = v_ini_2 - a*(t-t1);
  *v_para_range_low_ptr = (1 - v_para_prc_err/100) * v_exp;
  *v_para_range_high_ptr = (1 + v_para_prc_err/100) * v_exp;
  *v_perp_max_ptr = (v_perp_prc_err/100) * v_exp;
 }
}