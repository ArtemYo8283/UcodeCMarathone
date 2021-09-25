#include "header.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        write(2, "usage: ./read_file [file_path]\n", 31);
        return -1;
    }
    int file = open_f(argv[1]);
    char c;
    while (read(file, &c, 1) > 0) 
    {
        write(1, &c, 1);
    }
    close(file);
    return 0;
}

