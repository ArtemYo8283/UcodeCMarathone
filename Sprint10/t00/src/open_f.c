#include "header.h"

int open_f(char *a) {
    int x = open(a, 0);
    if (x < 0) {
        write(2, "error\n", 6);
        return -1;
    }
    return x;
}

