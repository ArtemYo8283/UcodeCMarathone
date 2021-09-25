#include "header.h"

void print_err (char *argv, int file, int flag)
{
    if (flag == 1) 
    {
        file = open(argv, O_RDONLY | O_DIRECTORY);
        if (file > 0) 
        {
            mx_printerr("mx_wc: ");
            mx_printerr(argv);
            mx_printerr(" read: Is a directory\n");
            close(file);
            exit(0);
        }
    }
    if (flag == 2)
    {
        if (file == -1)
        {
            mx_printerr("mx_wc: ");
            mx_printerr(argv);
            mx_printerr(": open: No such file or directory\n");
            exit(0);
        }
    }
}

