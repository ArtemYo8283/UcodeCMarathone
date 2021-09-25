#include "header.h"

int open_f(const char *a) {
    int x = open(a, 0);
    if (x < 0) 
    {
        return -1;
    }
    return x;
}

