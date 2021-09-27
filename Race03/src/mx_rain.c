#include "header.h"

void mx_rain(bool is_jap) {
	curs_set(0);
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	time_t  timer;
	srand((unsigned) time(&timer));
	int sizex;
	int sizey;
	getmaxyx(stdscr, sizey, sizex);
	int head[sizex];
	for (int i = 0; i < sizex; i++)
	{
		head[i] = -sizey + rand() % sizey;
	}
	int delat[sizex];
	for (int i = 0; i < sizex; i++)
	{
		delat[i] = rand() % sizey;
	}
	int back[sizex];
	int tail[sizex];
	int pisY[sizex];
	int flag[sizex];
	for (int i = 0; i < sizex; i++)
	{
		 pisY[i] = 0;
	}
	int speed = 100;

	int color_pos = 2;
	int color_type = 1;
	int fontgroundcolor = COLOR_GREEN;
	int backgroundcolor = COLOR_BLACK;

	char chr[sizex];
	char *jp[sizex];
	while (true) 
	{
		
		for (int i = 0; i < sizex; i++) 
		{
			if (i % 5 == 0) 
			{
				back[i] = head[i] - delat[i];
				if (flag[i] == 1) 
				{
					if (tail[i] == sizey+1)
					{
						flag[i] = 0;
					}
					move(tail[i], i);
					printw(" ");
					tail[i]++;
				}
				if (head[i] == sizey) 
				{
					pisY[i] = 0;
					head[i] = 0;
					flag[i] = 1;
					tail[i] = sizey - delat[i];
					delat[i] = rand() % sizey;
				}
				if(back[i] > -1) 
				{
					printw(" ");
					move(back[i], i);
					printw(" ");
				}
				if (head[i] > -1) 
                {
					if (is_jap == true)
					{
                        jp[i] = mx_display_jp(pisY[i], i, head[i], sizey, jp[i]);	
					}
					else
					{
						chr[i] = mx_display_char(pisY[i], i, head[i], sizey, chr[i]);
					}
				}
			}
		}
		for(int i = 0; i < sizex; i++) {
			if (head[i] >= 0)
			{
				pisY[i]++;
			}
		}
		usleep(1000 * speed);
		refresh();
		for(int i = 0; i < sizex; i++)
		{
			head[i]++;
		}
		char buff = getch();
		switch (buff) {
			case 'q':
				clear();
				exit(0);
                break;

			case 'f':
				color_type = 1;
				break;

			case 'b':
				color_type = 2;
				break;

			case '+':
				if (speed > 1) 
				{
					if (speed <= 11)
					{
						speed--;
					}
					else
					{
						speed -= 10;
					}
				}
				break;

			case '-':
				if (speed < 300) 
				{
					if (speed <= 10)
					{
						speed++;
					}
					else
					{
						speed += 10;
					}
				}
				break;

			case '1':
				if (color_type == 1)
                {
					fontgroundcolor = COLOR_GREEN;
                }
				else
                {
					backgroundcolor = COLOR_GREEN;
                }
				break;

			case '2':
				if (color_type == 1)
                {
					fontgroundcolor = COLOR_BLUE;
                }
				else
                {
					backgroundcolor = COLOR_BLUE;
                }
				break;

			case '3':
				if (color_type == 1)
                {
					fontgroundcolor = COLOR_CYAN;
                }
				else
                {
					backgroundcolor = COLOR_CYAN;
                }
				break;

			case '4':
				if (color_type == 1)
                {
					fontgroundcolor = COLOR_MAGENTA;
                }
				else
                {
					backgroundcolor = COLOR_MAGENTA;
                }
				break;

			case '5':
				if (color_type == 1)
                {
					fontgroundcolor = COLOR_RED;
                }
				else
                {
					backgroundcolor = COLOR_RED;
                }
				break;

			case '6':
				if (color_type == 1)
                {
					fontgroundcolor = COLOR_YELLOW;
                }
				else
                {
					backgroundcolor = COLOR_YELLOW;
                }
				break;

			case '7':
				if (color_type == 1)
                {
					fontgroundcolor = COLOR_WHITE;
                }
				else
                {
					backgroundcolor = COLOR_WHITE;
                }
				break;

			case '8':
				if (color_type == 1)
                {
					fontgroundcolor = COLOR_BLACK;
                }
				else
                {
					backgroundcolor = COLOR_BLACK;
                }
				break;

			case '0':
				color_pos = 2;
				break;

			case '.':
				color_pos = 1;
				break;
		}
		init_pair(color_pos, fontgroundcolor, backgroundcolor);
	}
}

