#include "header.h"

void print_count(int *count, int flag)
{
    if (flag == 1)
    {
        mx_printchar('\t');
        mx_printint(count[0]);
        mx_printchar('\t');
        mx_printint(count[1]);
        mx_printchar('\t');
        mx_printint(count[2]);
        mx_printchar('\n');
    }
    if (flag == 2)
    {
        mx_printchar('\t');
        mx_printint(count[0]);
        mx_printchar('\t');
        mx_printint(count[1]);
        mx_printchar('\t');
        mx_printint(count[2]);
        mx_printchar('\t');
    }
}

