
# 1 
int get_hex ( char * buf, int start_position,
              unsigned int *address,
              unsigned int *length)
{

    int cpos = 0, done = 0;

    cpos = start_position; done = 0; *address = 0;

    while (done == 0) {
        if ( buf[cpos] >= '0' && buf[cpos] <= '9' ) {
           *address = *address<<4;
           *address = *address + buf[cpos] - '0';
           }
        else if ( buf[cpos] >= 'A' && buf[cpos] <= 'F' ) {
            *address = *address<<4;
            *address = *address + buf[cpos] - 'A' + 10;
           }
        else if ( buf[cpos] >= 'a' && buf[cpos] <= 'f' ) {
            *address = *address<<4;
            *address = *address + buf[cpos] - 'a' + 10;
           }
        else {
            done = 1;
            *length = cpos - start_position;
            }
        if ( cpos >= 8+start_position ) {
            done = 1;
            *length = 8;
            }
        cpos++;
        }


    if (cpos > start_position+1) return 1; else return 0;
}