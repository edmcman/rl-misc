#include <stdio.h>

# 1 
void go_south_east(int *latitude,int *longitude){
 *latitude=*latitude-1;
 *longitude=*longitude+1;
}