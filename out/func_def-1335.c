




















# 1 
char* EightBits(char *bits, char value) {
    char bit=1;
    int i=sizeof(value)*8;
    bits[i]= '\0';
    do {
     bits[--i]= (value&bit ? '1' : '0');
    } while (bit<<=1);
    return bits;
}