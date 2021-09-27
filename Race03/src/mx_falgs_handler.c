#include "header.h"

void mx_flags_handler(int argc, char *argv[], char *flags)
{
    bool s = true;
	bool j = false;
    if (argc == 2)
	{
		if (mx_strlen(argv[1]) == 2)
		{
			if (argv[1][0] == '-' && argv[1][1] == 's')
			{
				s = false;
			}
			else if (argv[1][0] == '-' && argv[1][1] == 'j')
			{
				j = true;
			}
			else
			{
				write(1, "usage: ./matrix_rain [-s] [-j]\n", 31);
				exit(0);
			}
		}
		else if (mx_strlen(argv[1]) == 3)
		{
			if (argv[1][0] == '-' && ((argv[1][1] == 's' && argv[1][2] == 'j') || (argv[1][1] == 'j' && argv[1][2] == 's'))) 
			{
				s = false;
				j = true;
			}
			else
			{
				write(1, "usage: ./matrix_rain [-s] [-j]\n", 31);
				exit(0);
			}
		}
		else
		{
			write(1, "usage: ./matrix_rain [-s] [-j]\n", 31);
			exit(0);
		}
	}
	else if (argc == 3)
	{
		if (mx_strlen(argv[1]) == 2 && mx_strlen(argv[2]) == 2) 
		{
			if (((argv[1][0] == '-' && argv[1][1] == 's') && (argv[2][0] == '-' && argv[2][1] == 'j')) || ((argv[1][0] == '-' && argv[1][1] == 'j') && (argv[2][0] == '-' && argv[2][1] == 's')))
			{
				s = false;
				j = true;
			}
			else
			{
				write(1, "usage: ./matrix_rain [-s] [-j]\n", 31);
				exit(0);
			}
		}
		else
		{
			write(1, "usage: ./matrix_rain [-s] [-j]\n", 31);
			exit(0);
		}
    }
	else if (argc > 3)
	{
		write(1, "usage: ./matrix_rain [-s] [-j]\n", 31);
		exit(0);
	}              
    if (s)
	{
        flags[0] = '1';
	}
    if (j)
	{
        flags[1] = '1';
	}
}

