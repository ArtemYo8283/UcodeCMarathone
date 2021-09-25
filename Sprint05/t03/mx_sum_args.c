#include <stdbool.h>
bool mx_isdigit(int i);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    int countV = 0;
    int countBuff = 0;
    int arr[argc];
    int arrs = 0;
    int sum = 0;
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            for (int j = 1; argv[i][j] != '\0'; j++) {
                if (((argv[i][0] == '+' || argv[i][0] == '-') && mx_isdigit(argv[i][1]) == 1) || mx_isdigit(argv[i][0]) == 1) {
                    if (mx_isdigit(argv[i][j]) == 0) {
                        countBuff = 1;
                    }
                }
                else {
                    countBuff = 1;
                    break;
                }
            }
            if(((argv[i][0] == '+' || argv[i][0] == '-') && argv[i][1] == '\0'))
            {
                countBuff++;
            }
            if (countBuff == 0) {
                arr[arrs] = mx_atoi(argv[i]);
                arrs++;
                countV++;
            }
            countBuff = 0;
        }
        if (countV == 0) {
            mx_printchar('0');
            mx_printchar('\n');
        }
        else {
            for(int i = 0; i < arrs; i++)
            {
                sum += arr[i];
            }
            mx_printint(sum);
            mx_printchar('\n');
        }
    }
    return 0;
}

