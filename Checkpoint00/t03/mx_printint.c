#include <unistd.h>
void mx_printint(int n) {
    int buff = 0;
    int size = 0;
    char c = '-';
    if (n < 0) {
        n *= -1;
        write(1, &c, 1);
    }
    buff = n;
    for (int i = 0; buff > 0; i++, buff /= 10, size++);
    buff = 0;
    char x[size];
    for (int i = size-1; i >= 0; i--, n /= 10) {
        buff = n % 10;
        x[i] = buff+48;  
    }
    for (int i = 0; i < size; i++) {
        write(1, &x[i], 1);
    }
}

