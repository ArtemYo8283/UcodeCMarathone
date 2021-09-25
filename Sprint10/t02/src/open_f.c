#include "header.h"

int open_f(char *a) {
    int x = open(a, 0);
    if (x < 0) {
        write(2, "mx_cat: ", 8);
        write(2, a, mx_strlen(a));
        write(2, ": No such file or directory\n", 28);
        return -1;
    }
    return x;
}

