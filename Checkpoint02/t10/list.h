#pragma once

#include <stdlib.h>
#define P_SIZE 8

typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;

t_list *mx_create_node(void *data);
void mx_push_front(t_list **list, void *data);

