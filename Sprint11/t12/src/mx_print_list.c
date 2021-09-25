#include "list.h"

void mx_print_list(t_list *list) {
    t_list *tmp = list;
    if (tmp)
    {
        for (int i = 0; tmp; i++) 
        {
            mx_printint(i);
            write(1, ". ", 2);
            write(1, tmp->artist, mx_strlen(tmp->artist));
            write(1, " - ", 3);
            write(1, tmp->name, mx_strlen(tmp->name));
            write(1, "\n", 1);
            tmp = tmp->next;
        }
    }
    else
    {
        write(2, "ERROR\n", 6);
    }
}

