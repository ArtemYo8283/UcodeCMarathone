#pragma once

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define P_SIZE 8

typedef struct s_list {
    char *artist;
    char *name;
    struct s_list *next;
}   t_list;

enum e_operation {
    NONE,
    ADD,
    REMOVE,
    SORT,
    PRINT
};
bool cmp(void *a, void *b);
int mx_tolower(int i);
int mx_strcmp_changed (const char *s1, const char *s2);
bool mx_isdigit(int i);
void mx_clear_list(t_list **list);
t_list *mx_create_node();
void mx_foreach_list(t_list *list, void (*f)(t_list *node));
int mx_list_size(t_list *list);
void mx_pop_back(t_list **list);
void mx_pop_front(t_list **list);
void mx_pop_index(t_list **list, int index);
void mx_push_back(t_list *list, char *artist, char *name);
void mx_push_front(t_list **list, char *artist, char *name);
//t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b));
t_list *mx_parse_songs(char *src, int count);
int mx_strlen(const char *s);
char *mx_strstr(const char *s1, const char *s2);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strchr(const char *str, int c);
int mx_strncmp(const char *s1, const char *s2, int n);
int open_f(const char *a);
char *mx_file_to_str(const char* filename);
void mx_print_list(t_list *list);
int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);
void mx_write_list_to_file(char *filename, t_list *songs_list);
int mx_count_songs(char *src);
bool mx_isspace(char c);
t_list *mx_sort_list_artist(t_list *list);
t_list *mx_sort_list_name(t_list *list);
int mx_strcmp(const char *s1, const char *s2);

