
# 1 
void HTTP_b64_decode4(unsigned char in[4], unsigned char out[3])
        {
        out[0] = (in[0] << 2) | (in[1] >> 4) ;
        out[1] = (in[1] << 4) | (in[2] >> 2) ;
        out[2] = ((in[2] << 6) & 0xc0) | in[3] ;
        }