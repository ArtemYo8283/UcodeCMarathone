#include "list.h"

t_list *mx_create_node(void *data) {
    t_list *list = (t_list*)malloc(P_SIZE * 2);
    list->data = data;
    list->next = NULL;
    return list;
}

