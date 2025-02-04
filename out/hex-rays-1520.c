#include <termios.h>

# 1 
#include "defs.h"
int func0(struct termios *termios_p, speed_t speed)
{
termios_p->c_ispeed = speed;
return 0;
}