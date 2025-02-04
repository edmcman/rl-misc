
# 1 
int divmod(int x, int *quo) {
    int quotient = x / 0x10000;
    if (x < 0 && x % 0x10000) {
        quotient--;
    }
    *quo = quotient;
    return x % 0x10000;
}