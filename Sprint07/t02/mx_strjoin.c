#include <stdlib.h>
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strjoin(char const *s1, char const *s2) {
    if (s2 == NULL && s1 == NULL) {
        return NULL;
    } 
    else if (s2 != NULL && s1 == NULL) {
        return mx_strdup(s2);
    }
    else if (s2 == NULL && s1 != NULL) {
        return mx_strdup(s1);
    }
    int size1 = mx_strlen(s1);
    int size2 = mx_strlen(s2);
    char *istr = mx_strnew(size1 + size2 + 1);
    mx_strcpy(istr, s1);
    mx_strcat(istr, s2);
    return istr;
}

