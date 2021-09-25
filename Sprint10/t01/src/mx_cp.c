#include "header.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        write(2, "usage: ./mx_cp [source_file] [destination_file]\n", 48);
        return -1;
    }
    int file1 = open_f(argv[1]);
    if(file1 == -1)
    {
        return -1;
    }
    int file2 = write_f(argv[2]);
    char c;
    while (read(file1, &c, 1))
    {
        write(file2, &c, 1);
    }
    close(file1);
    close(file2);
    return 0;
}

