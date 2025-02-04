
# 1 
long ff_atomic_inc_long(volatile long *val)
{
 return __sync_add_and_fetch(val, 1);
}