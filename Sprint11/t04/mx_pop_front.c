#include "list.h"

void mx_pop_front(t_list **list) {
    t_list *tmp = NULL;
    if (*list != NULL)
    {
        tmp = (*list)->next;
        free(*list);
        *list = tmp;
    }
}

