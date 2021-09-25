#pragma once

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <stdbool.h>

void loopc (int *count, int file, char *argv);
void print_count(int *count, int flag);
void print_err(char *argv, int file, int flag);
int open_f(const char *a);
bool mx_isspace(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printerr(const char*s);
char *mx_file_to_str(const char *filename);
char *mx_strnew(const int size);
int mx_count_words(const char *str, char delimiter);
char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
char *mx_strjoin(char const *s1, char const *s2);
void mx_print_total(int *total);

