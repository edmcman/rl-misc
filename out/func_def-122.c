#include <stdio.h>

#include <stdlib.h>

# 1 
void get_histogram_limits(int *histogram, int width, int height,
                            int *local_low, int *local_high)
{
    int five_percent_limit = 0.05f * width * height;

    int counter = 0;
    for (int i = 0; i < 256; ++i) {
        counter += histogram[i];
        if (counter > five_percent_limit) {
            *local_low = i;
            break;
        }
    }

    counter = 0;
    for (int i = 255; i >= 0; --i) {
        counter += histogram[i];
        if (counter > five_percent_limit) {
            *local_high = i;
            break;
        }
    }

}