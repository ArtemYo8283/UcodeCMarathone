#include "header.h"

void mx_text_type(char* str)
{
    for(unsigned int i = 0; i < mx_strlen(str); i++)
	{
        mvaddch(5, i + 4, str[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();
    refresh();
}
