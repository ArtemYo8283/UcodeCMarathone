#include "header.h"

char *mx_file_to_str(const char *filename) {
    char *dst = NULL;
    int size = 0;
    char c;
    int file = open_f(filename);
    while (read(file, &c, 1))
    {
        size++;
    }
    close(file);
    file = open_f(filename);
    dst = mx_strnew(size);
    for (int i = 0; read(file, &c, 1); i++)
    {
        dst[i] = c;
    }
    close(file);
    return dst;
}

