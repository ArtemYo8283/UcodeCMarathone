#include "header.h"
void mx_start(void) {
    char *str1 = "Wake up , Neo..";
    char *str2 = "The Matrix has you..";
    char *str3 = "Follow the white rabbit";
    char *str4 = "Knock, knock, Neo";
    refresh();
	init_pair(1, COLOR_GREEN, COLOR_BLACK);
    mx_text_type(str1);
    mx_text_type(str2);
    mx_text_type(str3);
    mx_text_type(str4);
}

