
# 1 
void sun_normalize_delta(
    long *delta_day,
    long *delta_timeofday,
    double *delta_subsec
) {
 long carry;


 carry = (long) *delta_subsec;
 *delta_timeofday += carry;
 *delta_subsec -= (double) carry;


 carry = *delta_timeofday/(60*60*24);
 *delta_day += carry;
 *delta_timeofday -= carry*(60*60*24);
}