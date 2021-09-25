#include "file_to_str.h"
int open_f(const char *a) {
    int x = open(a, 0);
    if (x < 0) {
        return -1;
    }
    return x;
}
char *mx_file_to_str(const char* filename)
{
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

