#include "../inc/minilibmx.h"

void mx_check(char *argv[], char *x, char *op, char *y, char *z, int xsize, int opsize, int ysize, int zsize)
{
    if (xsize < 1)
    {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv[1]);
        mx_printerr("\n");
        return;
    }
    if (opsize != 1)
    {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        return;
    }
    if (ysize < 1)
    {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv[3]);
        mx_printerr("\n");
        return;
    }
    if (zsize < 1)
    {
        mx_printerr("Invalid rezult: ");
        mx_printerr(argv[4]);
        mx_printerr("\n");
        return;
    }
    for (int i = 0; i < xsize; i++)
    {
        if (i == 0 && x[i] == '-')
        {
            continue;
        }
        if (x[i] != '?' && !mx_isdigit(x[i]))
        {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[1]);
            mx_printerr("\n");
            return;
        }
    }
    if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '?')
    {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        return;
    }
    for (int i = 0; i < ysize; i++)
    {
        if (i == 0 && y[i] == '-')
        {
            continue;
        }
        if (y[i] != '?' && !mx_isdigit(y[i]))
        {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[3]);
            mx_printerr("\n");
            return;
        }
    }
    for (int i = 0; i < zsize; i++)
    {
        if (i == 0 && z[i] == '-')
        {
            continue;
        }
        if (z[i] != '?' && !mx_isdigit(z[i]))
        {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[4]);
            mx_printerr("\n");
            return;
        }
    }
}

