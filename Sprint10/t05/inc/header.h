#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdbool.h>

typedef struct s_agent {
    char *name;
    int power;
    int strength;
}   t_agent;

void mx_printerr(const char *s);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);
void mx_printint(int n);
bool mx_isspace(char c);
bool mx_isdigit(int i);
int mx_atoi(const char *str);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_file_to_str(const char *filename);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strchr(const char *s, int c);
char *mx_strstr(const char *s1, const char *s2);
t_agent *mx_create_agent(char *name, int power, int strength);
t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count);
void mx_exterminate_agents(t_agent ***agents);
void sort_agents(t_agent ***agent_set, char *flag);
int mx_count_agents(char *src);
int open_f(const char *a);
#endif
