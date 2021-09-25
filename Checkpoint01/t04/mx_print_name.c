#include <unistd.h>
static int mx_strlen(const char *s) {
    int count = 0;
    while (*s != 0) {
        count++;
        ++s;
    }
    return count;
}
void mx_printchar(char c) {
    write(1, &c, 1);
}
void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}
void mx_printint(int n) {
    int buff = 0;
    int count = 0;
    if (n < 0) {
        n *= -1;
        mx_printchar('-');
    }
    buff = n;
    for (int i = 0; buff > 0; i++) {
        buff /= 10;
        count++;
    }
    buff = 0;
    char x[count];
    for (int i = count-1; i >= 0; i--) {
        buff = n % 10;
        x[i] = buff+48;
        n /= 10;
    }
    for (int i = 0; i < count; i++) {
        mx_printchar(x[i]);
    }
} 
int main(int argc, char const *argv[]) {
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);
    mx_printchar('\n');
    return 0;
}
