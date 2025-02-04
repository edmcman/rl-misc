#include <assert.h>

# 1 
void heap_sift_2( int root, int lastChild, double x[], double y[] )
{
    int child;

    for (; (child = (root * 2) + 1) <= lastChild; root = child) {

 if (child < lastChild)
     if ( x[child] < x[child+1] )
  child++;

 if ( x[child] <= x[root] )
     break;

 { double c; c = (x[root]); (x[root]) = (x[child]); (x[child]) = c; };
        { double c; c = (y[root]); (y[root]) = (y[child]); (y[child]) = c; };
    }
}