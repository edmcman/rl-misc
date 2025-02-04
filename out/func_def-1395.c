#include <math.h>

#include <errno.h>

#include <fcntl.h>

#include <stdio.h>

#include <libgen.h>

#include <limits.h>

#include <stdint.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <pthread.h>

#include <stdbool.h>

#include <termios.h>

#include <sys/stat.h>

#include <sys/types.h>

# 1 
void init_kb_intterupt(struct termios kb_config) {
 kb_config.c_lflag &= ~(ICANON | ECHO);
 kb_config.c_cc[VMIN] = 1L;
 kb_config.c_cc[VTIME] = 1 * 0;

 tcsetattr(STDIN_FILENO, TCSAFLUSH, &kb_config);
}