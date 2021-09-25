#include <stdlib.h>
int mx_count_words(const char *str, char delimiter);
void mx_strdel(char **str);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
char **mx_strsplit(char const *s, char c) {
    int cwords = mx_count_words(s, c);
	int j = 0;
	char **istr = (char**)malloc(8 * cwords);
	for (int i = 0; i < cwords; i++) {
		int lenw = 0;
		int sid = 0;
		while (s[j]) {
			if (s[j] != c) {
				lenw += 1;
				if (sid == 0)
                {
					sid = j;
                }
			}
			else if (s[j] == c && lenw) {
				break;
            }
            j++;
		}
		char* new_word = mx_strnew(lenw);
		for (int o = 0, k = sid; k < j; o++, k++) {
			new_word[o] = s[k];
        }
		istr[i] = new_word;
	}
	istr[cwords] = NULL;
	return istr;
}

