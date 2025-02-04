#include <termios.h>

# 1 
int func0(termios *__termios_p,speed_t __speed){__termios_p->c_ispeed = __speed;return 0;}