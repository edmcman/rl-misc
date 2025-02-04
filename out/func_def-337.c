#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <memory.h>

# 1 
static int istone(double *psd, int psd_len, int freqbin,
                  int splnum1, int splnum2, int *tone_flag)
{
    int i;
    int kr, kl;

    double psd_nr[6], psd_nl[6];

    if(freqbin == 0 || freqbin >= (psd_len-6))
        goto not_tone;


    for(i = 0; i < 6; i++) {
        kr = freqbin + (i + 1);
        kl = freqbin - (i + 1);
        if(kr < 0 || kr >= psd_len)
            psd_nr[i] = 0.0;
        else
            psd_nr[i] = psd[kr];

        if(kl < 0 || kl >= psd_len)
            psd_nl[i] = 0.0;
        else
            psd_nl[i] = psd[kl];
    }

    if(psd[freqbin] < psd_nr[0] || psd[freqbin] < psd_nl[0]) {
        goto not_tone;
    }else if(freqbin > 1 && freqbin < splnum1) {
        if(psd[freqbin] <= (psd_nr[1]+7) || psd[freqbin] <= (psd_nl[1]+7))
            goto not_tone;
        tone_flag[freqbin] = 1;
        tone_flag[freqbin-1] = tone_flag[freqbin+1] = 1;
        tone_flag[freqbin-2] = tone_flag[freqbin+2] = 1;
    }else if(freqbin >= splnum1 && freqbin < splnum2) {
        for(i = 1; i <= 2; i++) {
            if(psd[freqbin] <= (psd_nr[i]+7) || psd[freqbin] <= (psd_nl[i]+7))
                goto not_tone;
        }
        tone_flag[freqbin] = 1;
        tone_flag[freqbin-1] = tone_flag[freqbin+1] = 1;
        tone_flag[freqbin-2] = tone_flag[freqbin+2] = 1;
        tone_flag[freqbin-3] = tone_flag[freqbin+3] = 1;
    }else if(freqbin >= splnum2 && freqbin < psd_len){
        for(i = 1; i <= 5; i++) {
            if(psd[freqbin] <= (psd_nr[i]+7) || psd[freqbin] <= (psd_nl[i]+7))
                goto not_tone;
        }
        tone_flag[freqbin] = 1;
        tone_flag[freqbin-1] = tone_flag[freqbin+1] = 1;
        tone_flag[freqbin-2] = tone_flag[freqbin+2] = 1;
        tone_flag[freqbin-3] = tone_flag[freqbin+3] = 1;
        tone_flag[freqbin-4] = tone_flag[freqbin+4] = 1;
        tone_flag[freqbin-5] = tone_flag[freqbin+5] = 1;
        tone_flag[freqbin-6] = tone_flag[freqbin+6] = 1;
    }else {
        goto not_tone;
    }

    return 1;
not_tone:
    return 0;
}