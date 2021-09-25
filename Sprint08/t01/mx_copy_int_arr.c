#include "duplicate.h"
int *mx_copy_int_arr(const int *src, int size)
{
    if (size < 1) {
        return NULL;
    }
    if (src == NULL) {
        return NULL;
    }
    int *iarr = (int*)malloc(size * 4);
    for (int i = 0; i < size; i++) {
        iarr[i] = src[i];
    }
    return iarr;
}

