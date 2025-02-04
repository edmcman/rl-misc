#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ncurses.h>

# 1 
int R90deg(int *x, int *y) {
 int loc_x = *x,loc_y = *y;
 *x = -loc_y;
 *y = loc_x;
 return 0;
}