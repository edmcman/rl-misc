#include <string.h>

# 1 
void btl_entry(unsigned int command[5], unsigned int result[3])
{

    result[0] = 0;

    switch (command[0]) {

    case 10:
        result[1] = 0x0103;
        break;

    case 11:
        if ((unsigned int) btl_entry < 0x40000000) {
            result[1] = 0;
        }
        else {
            result[1] = 1;
        }
        break;

    case 12:
        result[1] = 0x40004000;
        break;

    default:
        result[0] = 1;
        break;
  }
}