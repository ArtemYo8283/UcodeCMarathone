#include <unistd.h>
void mx_only_printable(void) {
    char c = ' ';
    for (int i = 126; i > 31; i--) {
        c = i;
        write(1, &c, 1);
    }
    c = '\n';
    write(1, &c, 1);
}

