#include <time.h>

double mx_timer (void (*f)()) 
{
    double sp;
    double st = clock();
    (*f)();
    sp = (clock() - st) / (double)1000000;
    return sp;
}

