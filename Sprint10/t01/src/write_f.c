#include "header.h"

int write_f(char *a) {
    return open(a, O_CREAT | O_EXCL | O_WRONLY, S_IWUSR | S_IRUSR);
}

