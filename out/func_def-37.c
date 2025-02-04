#include <stdio.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <fcntl.h>

#include <signal.h>

# 1 
static void close_fd (int *fd) { if ((*fd) >= 0) close (*fd); *fd = -1; }