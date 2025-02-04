
# 1 
void cgi_user_get_action(char * shm){
 *(int *)(shm+sizeof(int)) = 5;
 *(int *)(shm+sizeof(int)*2) = 1;
}