#include "create_new_agents.h"
char *mx_strdup(const char *str) {
    if (str == NULL) {
		    return NULL;
    }
    char *istr = mx_strnew(mx_strlen(str)+1);
    mx_strcpy(istr, str);
    return istr;
}

