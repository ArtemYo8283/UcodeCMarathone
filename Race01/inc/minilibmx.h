#ifndef PART_OF_THE_MATRIX_H
#define PART_OF_THE_MATRIX_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

bool mx_isdigit(int i);
bool mx_isspace(char c);
char *mx_itoa(int number);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str); 
double mx_pow(double n, unsigned int pow);
int mx_strlen(const char *s);
int mx_atoi(const char* str);
void mx_check(char *argv[], char *x, char *op, char *y, char *z, int xsize, int opsize, int ysize, int zsize);
void mx_print(char *x, char *operation, char *y, char *z, int xsize, int ysize, int zsize);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);

#endif

