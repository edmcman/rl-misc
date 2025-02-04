
# 1 
static void
arx_fwd(unsigned char state[4])
{
    state[0] += state[1];
    state[2] += state[3];
    (state[1]) = (unsigned char) ((state[1]) << (2)) | ((state[1]) >> (8 - (2)));
    (state[3]) = (unsigned char) ((state[3]) << (5)) | ((state[3]) >> (8 - (5)));
    state[1] ^= state[0];
    state[3] ^= state[2];
    (state[0]) = (unsigned char) ((state[0]) << (4)) | ((state[0]) >> (8 - (4)));
    state[0] += state[3];
    state[2] += state[1];
    (state[1]) = (unsigned char) ((state[1]) << (3)) | ((state[1]) >> (8 - (3)));
    (state[3]) = (unsigned char) ((state[3]) << (7)) | ((state[3]) >> (8 - (7)));
    state[1] ^= state[2];
    state[3] ^= state[0];
    (state[2]) = (unsigned char) ((state[2]) << (4)) | ((state[2]) >> (8 - (4)));
}