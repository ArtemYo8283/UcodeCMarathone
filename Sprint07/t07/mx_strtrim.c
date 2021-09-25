#include <stdlib.h>
#include <stdbool.h>
char *mx_strnew(const int size);
bool mx_isspace(char c);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strtrim(const char *str) {
    if (str == NULL) {
		return NULL;
    }
	int front = 0;
    int back = 0;
	int flag = 1;
	for (int i = 0; str[i]; i++) {
		if (mx_isspace(str[i]) == 1 && flag == 1) {
			front++;
        }
		else if (mx_isspace(str[i]) == 0 && flag == 1) {
			flag = 0;
        }
		else if (mx_isspace(str[i]) == 1 && flag == 0) {
            back++;
        }	
		else if (mx_isspace(str[i]) == 0 && back == 1) {
			back = 0;
        }
	}
	char *istr = mx_strnew(mx_strlen(str) - front - back);
	for (int i = 0, j = front; j < (int)mx_strlen(str) - back; i++, j++) {
		istr[i] = str[j];
    }
	return istr;
}

