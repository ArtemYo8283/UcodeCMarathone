#include <stdlib.h>
int mx_strlen(const char *s) {
    int count = 0;
    while (*s != 0) {
        count++;
        ++s;
    }
    return count;
}
char *mx_strcpy(char *dst, const char *src)
{
    int i = 0;
    for (; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    dst[i+1] = '\0';
    return dst;
}
char *mx_strnew(const int size) {
    if (size < 1) 
    {
        return NULL;
    }
    else 
    {
        char *str = malloc(size+1);
        for (int i = 0; i < size; i++) {
            str[i] = '\0';
        }
        str[size] = '\0';
        return str;
    }
}
char *mx_strdup(const char *str) {
    if (str == NULL) 
    {
		    return NULL;
    }
    char *istr = mx_strnew(mx_strlen(str)+1);
    mx_strcpy(istr, str);
    return istr;
}

