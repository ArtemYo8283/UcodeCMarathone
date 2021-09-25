#include "list.h"

void mx_write_list_to_file(char *filename, t_list *songs_list)
{
    int dst = open(filename, O_WRONLY);
    t_list *copy = songs_list;
    while(copy) {
        write(dst, copy->artist, mx_strlen(copy->artist));
        write(dst, ",", 1);
        write(dst, copy->name, mx_strlen(copy->name));
        write(dst, "\n", 1);
        copy = copy->next;
    }
    close(dst);
}

