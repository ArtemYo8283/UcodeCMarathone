#include "../inc/minilibmx.h"

int main(int argc, char *argv[]) {
    if (argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [x] [oper] [y] [z]\n");
        return -1;
    }
    char *x = mx_strtrim(argv[1]);
    char *oper = mx_strtrim(argv[2]);
    char *y = mx_strtrim(argv[3]);
    char *z = mx_strtrim(argv[4]);
    int xsize = mx_strlen(x);
    int opersize = mx_strlen(oper);
    int ysize = mx_strlen(y);
    int zsize = mx_strlen(z);
    mx_check(argv, x, oper, y, z,xsize, opersize, ysize, zsize);
    mx_print(x, oper, y, z,xsize, ysize, zsize);
    free(x);
    free(y);
    free(z);
    free(oper);
    return 0;
}

