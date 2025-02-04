
# 1 
int Cfnan( float *val )
{
   int code;


   short *sptr = (short*)val + 1;




   code = ( (*sptr & 0x7F80) == 0x7F80 ? 1 : (*sptr & 0x7F80) == 0 ? 2 : 0);
   if( code==2 ) *val = 0.0;

   return( code!=0 );
}