




# 1 
int SmpFrqIndex ( int sample_freq, int* const version )
{
    switch ( sample_freq ) {
    case 44100: *version = 1; return 0;
    case 48000: *version = 1; return 1;
    case 32000: *version = 1; return 2;
    case 22050: *version = 0; return 0;
    case 24000: *version = 0; return 1;
    case 16000: *version = 0; return 2;
    case 11025: *version = 0; return 0;
    case 12000: *version = 0; return 1;
    case 8000: *version = 0; return 2;
    default: *version = 0; return -1;
    }
}