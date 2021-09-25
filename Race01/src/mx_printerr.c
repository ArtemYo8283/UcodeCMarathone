#include "../inc/minilibmx.h"

void mx_printerr(const char *s)
{
    while(*s) 
    {
        write(2, s++, 1);
    }
}

