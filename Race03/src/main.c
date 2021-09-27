#include "header.h"

int main(int argc, char *argv[]) {
	setlocale(LC_CTYPE, "");
    char *fl = (char*)malloc(3);
	mx_flags_handler(argc, argv, fl);
	initscr();
	noecho();
	nodelay(stdscr, 1);
	start_color();
	if (fl[0] == '1')
	{
		mx_start();
	}
	mx_rain(fl[1] == '1');
  	endwin();
	return 0;
}


