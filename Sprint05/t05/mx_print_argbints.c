#include <stdbool.h>
void mx_printchar(char c);
void mx_printint(int n);
int mx_atoi(const char *str);
int main(int argc, char *argv[]) {
    int num = 0;
    int bin = 0;
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            num = mx_atoi(argv[i]);
            for (int j = 31; j >= 0; j--) {
                bin = num >> j;
                if (bin & 1) {
                    mx_printint(1);
                }
                else {
                    mx_printint(0);
                }
            }
            mx_printchar('\n');
        }
    }
    return 0;
}

