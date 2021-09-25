#include "../inc/minilibmx.h"

char *mx_strtrim(const char *str) {
    if (str == NULL) {
        return NULL;
    }

    int size = 0;
    int c_left = 0;
    int c_right = 0;

    while(*str) {
        size++;
        str++;
    }

    str -= size;

    while(*str && mx_isspace(*str)) {
        str++;
        c_left++;
    }

    str -= c_left;
    
    for (int i = size - 1; i >= c_right; i--) {
        if (!mx_isspace(str[i])) {
            break;
        }
        
        c_right++;
    }
    
    char *array = mx_strnew(size - c_left - c_right);
    
    for (int i = c_left, j = 0; i <= size - 1 - c_right; i++, j++)
    {
        array[j] = str[i];
    }
        
    return array;
}

