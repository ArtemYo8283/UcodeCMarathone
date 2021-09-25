#include "../inc/calculator.h"
int mx_add(int a, int b)
{
    return a + b;
}
int mx_sub(int a, int b)
{
    return a - b;
}
int mx_mul(int a, int b)
{
    return a * b;
}
int mx_div(int a, int b)
{
    return a / b;
}
int mx_mod(int a, int b)
{   
    return a % b;
}
int main (int argc, char *argv[]) {
    char errmsg[] = "usage: ./calc [operand1] [operation] [operand2]";
    if (argc == 1) 
    {
        write(1, &errmsg, mx_strlen(errmsg));
        return 0;
    }
    enum e_operation oper;
    enum e_error error;
    int x;
    int y;
    bool is_oper = false;
    bool is_error = false;
    mx_printstr(argv[2]);
    mx_printchar('\n');
    x = mx_atoi(argv[1]);
    y = mx_atoi(argv[3]);
    if (x == NOT_INT || y == NOT_INT) 
    {
        error = INCORRECT_OPERAND;
        is_error = true;
    }
    if (mx_strncmp(argv[2], "+", 1) == 0) 
    {
        oper = ADD;
        is_oper = true;
    }
    else if (mx_strncmp(argv[2], "-", 1) == 0) 
    {
        oper = SUB;
        is_oper = true;
    }
    else if (mx_strncmp(argv[2], "*", 1) == 0) 
    {
        oper = MUL;
        is_oper = true;
    }
    else if (mx_strncmp(argv[2], "/", 1) == 0) 
    {
        oper = DIV;
        is_oper = true;
    }
    else if (mx_strncmp(argv[2], "%%", 1) == 0) 
    {
        oper = MOD;
        is_oper = true;
    }
    else 
    {
        error = INCORRECT_OPERATION;
        is_error = true;
    }
    if (y == 0 && oper == DIV) 
    {
        error = DIV_BY_ZERO;
        is_error = true;
    }
    if (is_error == true)
    {
        if (error == INCORRECT_OPERAND) 
        {
            write(2, "error: invalid number", mx_strlen("error: invalid number"));
            return -1;
        }
        else if (error == INCORRECT_OPERATION) 
        {
            write(2, "error: invalid operation", mx_strlen("error: invalid operation"));
            return -1;
        }
        else if (error == DIV_BY_ZERO) 
        {
            write(2, "error: division by zero", mx_strlen("error: division by zero"));
            return -1;
        }
    }
    if (is_oper == true)
    {
        if (oper == ADD) 
        {
            mx_printint(mx_add(x, y));
        }
        else if (oper == SUB) 
        {
            mx_printint(mx_sub(x, y));
        }
        else if (oper == MUL) 
        {
            mx_printint(mx_mul(x, y));
        }
        else if (oper == DIV) 
        {
            mx_printint(mx_div(x, y));
        }
        else if (oper == MOD) 
        {
            mx_printint(mx_mod(x, y));
        }
        mx_printchar('\n');
    }
    return 0;
}

