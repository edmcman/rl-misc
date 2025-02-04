
# 1 
int uudecode(const char *str, unsigned char *data, int max)
{
    int num = 0;
    int i, n;
    unsigned int val;

    if (*str == '\0') {
        return 0;
    }

    num = *str++ - 32;

    if (num < 1 || num > 45) {
        return 0;
    }

    n = (num + 2) / 3;

    for (i = 0; i < n; i++) {
        if (str[0] < 32 || str[0] > 96) {
            return 0;
        }

        if (str[1] < 32 || str[1] > 96) {
            return 0;
        }

        if (str[2] < 32 || str[2] > 96) {
            return 0;
        }

        if (str[3] < 32 || str[3] > 96) {
            return 0;
        }

        val = (((str[0] - 32) & 0x3F) << 18)
              | (((str[1] - 32) & 0x3F) << 12)
              | (((str[2] - 32) & 0x3F) << 6)
              | (((str[3] - 32) & 0x3F) << 0);
        *data++ = (val >> 16) & 0xFF;
        *data++ = (val >> 8) & 0xFF;
        *data++ = (val >> 0) & 0xFF;
        str += 4;
    }

    return num;
}