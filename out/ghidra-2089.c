#include <linux/errno.h>

#include <linux/fs.h>

#include <linux/adfs_fs.h>

#include <linux/sched.h>

#include <linux/stat.h>

# 1 
int func0(char *param_1,char *param_2,int param_3){int local_2c;char *local_28;char *local_20;int local_c;local_c = 0;local_2c = param_3;local_28 = param_2;local_20 = param_1;while (('\x1f' < *local_28 && (local_2c != 0))) {if (*local_28 == '/') {*local_20 = '.';}else {*local_20 = *local_28;}local_20 = local_20 + 1;local_28 = local_28 + 1;local_c = local_c + 1;local_2c = local_2c + -1;}*local_20 = '\0';return local_c;}