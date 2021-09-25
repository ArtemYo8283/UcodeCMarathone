#include "../inc/minilibmx.h"

char *mx_itoa (int number) {
    char *number_string = NULL;
    int length = 0;
    int number_copy = number;
    if (number == 0) {
        number_string = mx_strnew(1);
        number_string[0] = '0';

        return number_string;
    }
    if (number_copy < 0)
    {
        length++;
        number_copy *= -1;
    }
    while (number_copy != 0)
    {
        number_copy /= 10;
        length++;
    }
    number_string = mx_strnew(length);
    if (number < 0)
    {
        number_string[0] = '-';
        number *= -1;
    }
    number_string[length--] = '\0';
    while ((number != 0 && length >= 0) && number_string[length] != '-')
    {
        number_string[length--] = (number % 10) + '0';
        number /= 10;
    }
    return number_string;
}

