











# 1 
int iter_mgr ( int last_result, long *next_try,
                                 long max_step, int *restart )
{
   static long last_bad, last_good ;
   static int stage;
   long step;

   if ( *restart ) {
      *restart = 0;
      stage = 0 ;
   }

   switch ( stage ) {
      case 0 :

         stage = 1;
         *next_try = 0L;
         return 0;
      case 1 :

         stage = 2 ;
         if ( last_result < 0 ) {
            last_bad = 0L;
            *next_try = 1L;
            return 0;
         }
         else {
            return 1;
         }
      case 2 :

         if ( last_result < 0 ) {
            last_bad = *next_try;
            step = ((*next_try + 1L) < (max_step) ? (*next_try + 1L) : (max_step));
            *next_try += step;
            return 0;
         }
         else {
            last_good = *next_try;
            if ( last_result == 0 || (last_good - last_bad) == 1L )
               return 1;
            else {
               stage = 3;
               *next_try = (last_bad + last_good) / 2L;
               return 0;
            }
         }
      case 3 :


         if ( last_result < 0 ) {
            last_bad = *next_try;
            *next_try = (((last_bad + last_good)/2L) > (last_bad + 1L) ? ((last_bad + last_good)/2L) : (last_bad + 1L));
            return 0;
         }
         else {
            if ( last_result == 0L || (last_good - last_bad) == 1L )
               return 1;
            last_good = *next_try;
            *next_try = (((last_bad + last_good)/2L) > (last_bad + 1L) ? ((last_bad + last_good)/2L) : (last_bad + 1L));
            return 0;
         }
   }
   return 0;
}