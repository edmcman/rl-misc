#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <errno.h>

#include <sys/select.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/ioctl.h>

#include <dirent.h>

#include <fcntl.h>

#include <linux/i2c.h>

#include <linux/i2c-dev.h>

# 1 
static int i2creadarray(int i2cfile, int addr, int len, unsigned char *array)
{
    struct i2c_msg i2cmsg[2];
    struct i2c_rdwr_ioctl_data i2cmsgdata;

    i2cmsg[0].addr = 0x70;
    i2cmsg[0].flags = 0;
    i2cmsg[0].buf = (unsigned char *)&addr;
    i2cmsg[0].len = 1;

    i2cmsg[1].addr = 0x70;
    i2cmsg[1].flags = I2C_M_RD;
    i2cmsg[1].buf = array;
    i2cmsg[1].len = len;

    i2cmsgdata.msgs = i2cmsg;
    i2cmsgdata.nmsgs = 2;

    return ioctl(i2cfile, I2C_RDWR , &i2cmsgdata);

}