#include "list.h"
void mx_push_front(t_list **list, char *artist, char *name) {
    t_list *tmp = mx_create_node();
    tmp->artist = artist;
    tmp->name = name;
    if (*list == NULL)
    {
        *list = tmp;
    }
    else 
    {
        tmp->next = *list;
        *list = tmp;
    }
}

