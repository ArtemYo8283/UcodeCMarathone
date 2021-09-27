#include "header.h"

char mx_display_char(int x, int y, int start, int max_y, char prev) {
	char c;
	c = 32 + rand() % 94;
	attron(COLOR_PAIR(1));
	mvaddch(x, y, c);
	attroff(COLOR_PAIR(1));
	attron(COLOR_PAIR(2));
	mvaddch(x - 1, y, prev);
	attroff(COLOR_PAIR(2));
	if (start == max_y - 1)
	{
		attron(COLOR_PAIR(2));
		mvaddch(x, y, prev);
		attroff(COLOR_PAIR(2));
	}
    return c;
}

char *mx_display_jp(int x, int y, int start, int max_y, char *prev) {
	char *jp;
	char *japanese[] = JAPANESE;
	jp = japanese[rand() % 25];
	attron(COLOR_PAIR(1));
	mvaddstr(x, y, jp);
	attroff(COLOR_PAIR(1));
	attron(COLOR_PAIR(2));
	mvaddstr(x - 1, y, prev);
	attroff(COLOR_PAIR(2));
	if (start == max_y - 1)
	{
		attron(COLOR_PAIR(2));
		mvaddstr(x, y, prev);
		attroff(COLOR_PAIR(2));
	}
    return jp;
}

