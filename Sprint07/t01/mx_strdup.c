#include <stdlib.h>
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
char *mx_strdup(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    char *istr = mx_strnew(mx_strlen(str) + 1);
    mx_strcpy(istr, str);
    return istr;
}

