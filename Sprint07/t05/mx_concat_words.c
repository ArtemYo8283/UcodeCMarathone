#include <stdlib.h>
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_concat_words(char **words) {
    if (words == NULL) {
		return NULL;
    }
	char *istr = NULL;
	for (int i = 0; words[i] != NULL; i++) {
		istr = mx_strjoin(istr, words[i]);
		if (words[i + 1] != NULL) {
			istr = mx_strjoin(istr, " ");
        }
	}
	return istr;
}

