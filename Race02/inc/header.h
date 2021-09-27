#pragma once
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdbool.h>

    enum SOS{
        UP,
        DOWN,
        RIGHT,
        LEFT
    };

int mx_atoi(const char *str);
bool mx_isspace(char c);
bool mx_isdigit(int i);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

