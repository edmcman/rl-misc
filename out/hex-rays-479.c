




# 1 
#include "defs.h"
__int64  func0(int a1, _DWORD *a2)
{
if ( a1 == 48000 )
{
*a2 = 1;
return 1LL;
}
if ( a1 <= 48000 )
{
if ( a1 == 44100 )
{
*a2 = 1;
return 0LL;
}
if ( a1 <= 44100 )
{
if ( a1 == 32000 )
{
*a2 = 1;
return 2LL;
}
if ( a1 <= 32000 )
{
if ( a1 == 24000 )
{
*a2 = 0;
return 1LL;
}
if ( a1 <= 24000 )
{
if ( a1 == 22050 )
{
*a2 = 0;
return 0LL;
}
if ( a1 <= 22050 )
{
if ( a1 == 16000 )
{
*a2 = 0;
return 2LL;
}
if ( a1 <= 16000 )
{
if ( a1 == 12000 )
{
*a2 = 0;
return 1LL;
}
if ( a1 <= 12000 )
{
if ( a1 == 8000 )
{
*a2 = 0;
return 2LL;
}
if ( a1 == 11025 )
{
*a2 = 0;
return 0LL;
}
}
}
}
}
}
}
}
*a2 = 0;
return 0xFFFFFFFFLL;
}