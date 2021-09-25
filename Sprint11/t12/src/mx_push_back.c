#include "list.h"

void mx_push_back(t_list *list, char *artist, char *name) {
    t_list *new = mx_create_node();
    t_list *tmp = list;
    new->artist = artist;
    new->name = name;
    while(tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = new;
    tmp = list;
}

