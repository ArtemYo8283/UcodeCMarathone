#include "../inc/minilibmx.h"

int mx_atoi(const char *str) {
	const char* buff;
	while(mx_isspace(*str))
	{
		str++;
	}
	int num = 0;
	int digit = (str[0] == '-') ? -1 : 1;
	if (!(str[0] >= '0' && str[0] <= '9') && str[0] != '-' && str[0] != '+')
	{
		return 0;
	}
	if (str[0] == '-' || str[0] == '+')
	{
		str++;
	}
	buff = str;
	while(*buff >= '0' && *buff <= '9')
	{
		num *= 10;
		num += *buff - '0';
		buff++;
	}
	if (*buff != '\0')
	{
		return 0;
	}
	return num * digit;
}

