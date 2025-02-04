






# 1 
static void mysql_hash_password(unsigned long *result, const char *password) {
    register unsigned long nr=1345345333L, add=7, nr2=0x12345671L;
    unsigned long tmp;
    for (; *password; password++) {
        if (*password == ' ' || *password == '\t')
            continue;
        tmp = (unsigned long) (unsigned char) *password;
        nr ^= (((nr & 63) + add) * tmp) + (nr << 8);
        nr2 += (nr2 << 8) ^ nr;
        add += tmp;
    }
    result[0] = nr & (((unsigned long) 1L << 31) -1L); ;
    result[1] = nr2 & (((unsigned long) 1L << 31) -1L);
    return;
}