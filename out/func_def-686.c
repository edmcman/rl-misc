#include <stdio.h>

#include <linux/fb.h>

#include <string.h>

#include <sys/ioctl.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <net/if.h>

#include <unistd.h>

#include <pthread.h>

#include <semaphore.h>

#include <netdb.h>

#include <fcntl.h>

#include <dirent.h>

#include <sys/select.h>

#include <sys/time.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <sys/stat.h>

#include <termios.h>

#include <stdlib.h>

#include <linux/types.h>

#include <linux/fb.h>

#include <errno.h>

#include <sys/mman.h>

# 1 
static void set_var(struct fb_var_screeninfo *var,
  int hbp, int hfp, int hsw,
  int vbp, int vfp, int vsw)
{
    var->left_margin = hbp;
    var->right_margin = hfp;
    var->hsync_len = hsw;

    var->upper_margin = vbp;
    var->lower_margin = vfp;
    var->vsync_len = vsw;

    var->activate = FB_ACTIVATE_NOW;
}