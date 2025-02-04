
# 1 
static void remove_zeros(char* buffer)
{
    unsigned int i,j;
    for(i = 0; buffer[i]; i++) {
        if(buffer[i] != '0') {
            break;
        }
    }
    if(!buffer[i]) {
        buffer[0] = '0';
        buffer[1] = '\0';
        return;
    }
    for(j = i; buffer[j]; j++) {
        buffer[j-i]=buffer[j];
    }
    buffer[j-i] = '\0';
}