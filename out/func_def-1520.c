#include <termios.h>

# 1 
int _cfsetispeed(struct termios *termios_p, speed_t speed)
{
  termios_p->c_ispeed= speed;
  return 0;
}