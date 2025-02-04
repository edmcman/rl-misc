
# 1 
static void
make_float_bigendian (float * x)
{
  union {
    float f;
    unsigned char b[4];
  } u,v;

  u.f = *x ;

  v.b[0]=u.b[3] ;
  v.b[1]=u.b[2] ;
  v.b[2]=u.b[1] ;
  v.b[3]=u.b[0] ;

  *x=v.f ;
}