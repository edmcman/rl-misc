#include <stdio.h>

# 1 
char * pridej_znak( char znak, char * kam ) {
 *kam = znak;
 return ++kam;
}