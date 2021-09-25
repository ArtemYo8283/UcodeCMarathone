#ifndef CALC_H
#define CALC_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#define NOT_INT -65535
int mx_strncmp(const char *s1, const char *s2, int n);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);

#endif

