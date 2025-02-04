
# 1 
static unsigned int calcSDSize(unsigned char* csd, int type)
{
    unsigned int result = 0;
    if (type == -1) type = csd[14] >> 6;
    switch (type) {
        case 0:
            {
                unsigned int block_len = csd[9] & 0xf;
                block_len = 1 << block_len;
                unsigned int mult = (csd[4] >> 7) | ((csd[5] & 3) << 1);
                mult = 1 << (mult + 2);
                result = csd[8] & 3;
                result = (result << 8) | csd[7];
                result = (result << 2) | (csd[6] >> 6);
                result = (result + 1) * mult * block_len / 512;
            }
            break;
        case 1:
            result = csd[7] & 0x3f;
            result = (result << 8) | csd[6];
            result = (result << 8) | csd[5];
            result = (result + 1) * 1024;
            break;
    }
    return result;
}