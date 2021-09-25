#include "header.h"

int main(int argc, char *argv[]) {
    char c;
    int file;
    if (argc == 1) {
        while (read(0, &c, 1))
        {
            write(1, &c, 1);
        }
    }
    else
    {
        for(int i = 1; i < argc; i++) {
            file = open_f(argv[i]);
            if (file != -1) 
            {
                while (read(file, &c, 1))
                {
                    write(1, &c, 1);
                }
            }
            close(file);
        }
    }
    return 0;
}

