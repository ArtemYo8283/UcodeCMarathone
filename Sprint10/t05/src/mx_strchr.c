#include "header.h"

char *mx_strchr(const char *str, int c) {
    while(*str) {
        if(*str == c)
            return (char *)str;
    str++;
    }
    return 0;
}


