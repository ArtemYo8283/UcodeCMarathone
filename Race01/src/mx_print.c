#include "../inc/minilibmx.h"

void mx_print(char *x, char *operation, char *y, char *z, int xsize, int ysize, int zsize) 
{
    if (*operation == '?') {
        mx_print(x, "+", y, z, xsize, ysize, zsize);
        mx_print(x, "-", y, z, xsize, ysize, zsize);
        mx_print(x, "*", y, z, xsize, ysize, zsize);
        mx_print(x, "/", y, z, xsize, ysize, zsize);
        return;
    }
    bool xMin = false;
    bool yMin = false;
    bool zMin = false;
    if (x[0] == '-') {
        xMin = true;
        x++;
        xsize--;
    } 
    if (y[0] == '-') {
        yMin = true;
        y++;
        ysize--;
    }
    if (z[0] == '-') {
        zMin = true;
        z++;
        zsize--;
    }
    long long number1 = mx_atoi(x);
    long long number2 = mx_atoi(y);
    long long number3 = mx_atoi(z);
    for (long long i = 0; i < mx_pow(10, xsize); i++) 
    {
        if (number1 > 0) 
        {
            i = number1;
        }
        char *i_str = mx_itoa(i);
        int i_str_length = mx_strlen(i_str);
        bool iCorrect = true;
        for (int j = 0; j < xsize - i_str_length; j++) 
        {
            if (mx_isdigit(x[j]) && x[j] != '0') 
            {
                iCorrect = false;
                break;
            }
        }
        for (int j = xsize - i_str_length, i_str_i = 0; j < xsize; j++, i_str_i++) 
        {
            if (x[j] != '?' && x[j] != i_str[i_str_i]) 
            {
                iCorrect = false;
                break;
            }
        }

        free(i_str);
        i_str = NULL;
        if (!iCorrect) 
        {
            continue;
        }
        for (long long j = 0; j < mx_pow(10, ysize); j++) 
        {  
            if (number2 > 0) 
            {
                j = number2;
            }
            char *j_str = mx_itoa(j);
            int j_str_length = mx_strlen(j_str);
            bool jCorrect = true;
            for (int j_i = 0; j_i < ysize - j_str_length; j_i++) 
            {
                if (mx_isdigit(y[j_i]) && y[j_i] != '0') 
                {
                    jCorrect = false;
                    break;
                }
            }
            for (int j_i = ysize - j_str_length, j_str_i = 0; j_i < ysize; j_i++, j_str_i++) 
            {
                if (y[j_i] != '?' && y[j_i] != j_str[j_str_i]) 
                {
                    jCorrect = false;
                    break;
                }
            }
            free(j_str);
            j_str = NULL;
            if (!jCorrect) 
            {
                continue;
            }
            for (long long k = 0; k < mx_pow(10, zsize); k++)
            {
                if (number3 > 0) 
                {
                    k = number3;
                }
                char *k_str = mx_itoa(k);
                int k_str_length = mx_strlen(k_str);
                bool kCorrect = true;
                for (int k_i = 0; k_i < zsize - k_str_length; k_i++) 
                {
                    if (mx_isdigit(z[k_i]) && z[k_i] != '0') 
                    {
                        kCorrect = false;
                        break;
                    }
                }
                for (int k_i = zsize - k_str_length, k_str_i = 0; k_i < zsize; k_i++, k_str_i++) 
                {
                    if (z[k_i] != '?' && z[k_i] != k_str[k_str_i]) 
                    {
                        kCorrect = false;
                        break;
                    }
                }
                free(k_str);
                k_str = NULL;
                if (!kCorrect) 
                {
                    continue;
                }
                if (xMin) 
                {
                    i *= -1;
                }
                if (yMin) 
                {
                    j *= -1;
                }
                if (zMin) 
                {
                    k *= -1;
                }
                if (*operation == '+') 
                {
                    if (i + j == k) 
                    {
                        mx_printint(i);
                        mx_printstr(" + ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '-') 
                {
                    if (i - j == k) 
                    {
                        mx_printint(i);
                        mx_printstr(" - ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '*') 
                {
                    if (i * j == k) 
                    {
                        mx_printint(i);
                        mx_printstr(" * ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '/') 
                {
                    if (j != 0 && i / j == k) 
                    {
                        mx_printint(i);
                        mx_printstr(" / ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                if (xMin)
                {
                    i *= -1;
                }
                if (yMin)
                {
                    j *= -1;
                }
                if (zMin)
                {
                    k *= -1;
                }
                if (number3 > 0)
                {
                    break;
                }
            }
            if (number2 > 0)
            {
                break;
            }
        }
        if (number1 > 0)
        {
            break;
        }
    }
    if (xMin)
    {
        x--;
    }
    if (yMin)
    {
        y--;
    }
    if (zMin)
    {
        z--;
    }
}

