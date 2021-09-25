#include <stdlib.h>
#include <stdbool.h>
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
bool mx_isspace(char c);
void mx_strdel(char **str);
char *mx_strtrim(const char *str);
char *mx_del_extra_whitespaces(const char *str) {
    int snew = 0;
	int issp = 0;
    if (str == NULL) {
		return NULL;
    }
    str = mx_strtrim(str)ж
	for (int i = 0; i < mx_strlen(str); i++) {
		if (mx_isspace(str[i]) == 0) {
            issp = 0;
			snew++;
		}
		else if (mx_isspace(str[i]) == 1 && issp == 0) {
            issp = 1;
			snew++;
		}
	}
	if (snew < 1) {
		return NULL;
    }
	char *istr = mx_strnew(snew);
	if (mx_strlen(istr) == 1 && mx_isspace(istr[0]) == 1) {
		mx_strdel(&istr);
		return NULL;
	}
	issp = 0;
	int newid = 0;
	for (int i = 0; i < mx_strlen(str); i++) {
		if (mx_isspace(str[i]) == 0) {
			istr[newid] = str[i];
			newid++;
			issp = 0;
		}
		else if (mx_isspace(str[i]) == 0 && issp == 0) {
			istr[newid] = ' ';
			newid++;
			issp = 1;
		}
	}
	istr = mx_strtrim(istr);
	return istr;
}

