#pragma once

#include <stdlib.h>
#include <stdbool.h>
#define P_SIZE 8

typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b));

