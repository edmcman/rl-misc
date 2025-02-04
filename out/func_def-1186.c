






























# 1 
static void dns_socketclose(int *fd) {
 if (*fd != -1) {



  close(*fd);

  *fd = -1;
 }
}