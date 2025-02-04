#include <string.h>

#include <stdlib.h>

#include <pwd.h>         /* needed in file_openfile */

#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>  /* needed for getcwd prototype on unix machines */

# 1 
int stream_create(char *filename, int *handle)
{




    if (filename)
       *handle = 2;
    else
       *handle = 2;

    return(0);
}