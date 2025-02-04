
# 1 
void itoa(char* buf, int base, long d) {
    char* p = buf;
    char* p1;
    char* p2;
    unsigned long ud = d;
    int divisor = 10;

    if (base=='d' && d<0) {
        *p++ = '-';
        buf++;
        ud = -d;
    } else if (base=='x') {
        divisor = 16;
    }

    do {
        int remainder = ud % divisor;
        *p++ = ((remainder < 10) ? '0' : ('a' - 10)) + remainder;
    } while (ud /= divisor);

    *p = 0;

    p1 = buf;
    p2 = p - 1;
    while (p1 < p2) {
        char tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;
        p1++;
        p2--;
    }
}