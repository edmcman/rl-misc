
# 1 
void strncpy(char* destination, char* source, int n){
    while( (n>0) && (*source != '\0')){
        *destination = *source;
        n--;
        source++;
        destination++;
    }
    *destination = '\0';
}