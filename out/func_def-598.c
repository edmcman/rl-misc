
# 1 
void cgi_rtv_get_action(char * shm){
 *(int *)(shm+sizeof(int)) = 1;
 *(int *)(shm+sizeof(int)*2) = 1;
}