#include <ncurses.h>

# 1 
bool plaza_scroll_offset(int boxS, int contentS, int * offset, int delta)
{
# 239 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/emanuele-f/PLaZa/refs/heads/master/src/utils.c"
    int value;
    int maxoffset;
    int orig;

    if (contentS <= boxS )

        value = 0;
    else {

        maxoffset = contentS - boxS;

        if (*offset + delta < 0)
            value = 0;
        else if (*offset + delta >= maxoffset)
            value = maxoffset;
        else
            value = *offset + delta;
    }

    orig = *offset;
    *offset = value;
# 274 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/emanuele-f/PLaZa/refs/heads/master/src/utils.c"
    if (orig != value)
        return true;
    else
        return false;
}