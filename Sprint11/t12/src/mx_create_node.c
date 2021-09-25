#include "list.h"

t_list *mx_create_node() {
    t_list *list = (t_list*)malloc(8 * 3);
    list->artist = NULL;
    list->name = NULL;
    list->next = NULL;
    return list;
}

