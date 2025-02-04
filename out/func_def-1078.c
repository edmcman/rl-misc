#include <stdio.h>

#include <stdlib.h>

# 1 
void bubble_sort(int siralanacak_dizi[])
{
    int tur_sayisi,gezilcek_eleman_sayisi;
    gezilcek_eleman_sayisi = 10;

    for(tur_sayisi = 1; tur_sayisi <= 10 - 1; tur_sayisi++)
    {
        int ara_deger_tutucu,sira;
        for(sira = 0; sira <= gezilcek_eleman_sayisi - 2; sira++)
        {
            if(siralanacak_dizi[sira] > siralanacak_dizi[sira + 1])
            {
                ara_deger_tutucu = siralanacak_dizi[sira];
                siralanacak_dizi[sira] = siralanacak_dizi[sira + 1];
                siralanacak_dizi[sira + 1] = ara_deger_tutucu;
            }
        }
        gezilcek_eleman_sayisi--;
    }
}