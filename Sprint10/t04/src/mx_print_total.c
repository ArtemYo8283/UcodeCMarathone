#include "header.h"

void mx_print_total (int *count) {
    mx_printchar('\t');
    mx_printint(count[0]);
    mx_printchar('\t');
    mx_printint(count[1]);
    mx_printchar('\t');
    mx_printint(count[2]);
    mx_printstr("\ttotal\n");
}
