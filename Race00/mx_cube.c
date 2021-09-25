void mx_printchar(char c);
void mx_cube(int n) {
    if (n > 1) {
        int buff = n / 2 + 1;
        int buff1 = -1;
        for (int i = 0; i < buff; i++) {
            mx_printchar(' ');
        }
        mx_printchar('+');
        for (int i = 0; i < n; i++) {
            mx_printchar('-');
            mx_printchar('-');
        }
        mx_printchar('+');
        mx_printchar('\n');
        for (int i = 0; i < n / 2; i++) {
            buff--;
            buff1++;  
            for (int i = 0; i < buff; i++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            for (int i = 0; i < n * 2; i++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            for (int i = 0; i < buff1; i++) {
                mx_printchar(' ');
            }
            mx_printchar('|');
            mx_printchar('\n');
        }
        buff1++;
        mx_printchar('+');
        for (int i = 0; i < n; i++) {
            mx_printchar('-');
            mx_printchar('-');
        }
        mx_printchar('+');
        for (int i = 0; i < buff1; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
        if(n % 2 == 0) {
            for (int i = 0; i < n/2 - 1; i++) {
                mx_printchar('|');
                for (int i = 0; i < n*2; i++) {
                    mx_printchar(' ');
                }
                mx_printchar('|');
                for (int i = 0; i < buff1; i++) {
                    mx_printchar(' ');
                }
                mx_printchar('|');
                mx_printchar('\n');
            }
        }
        else {
            for (int i = 0; i < n / 2; i++) {
                mx_printchar('|');
                for (int i = 0; i < n * 2; i++) {
                    mx_printchar(' ');
                }
                mx_printchar('|');
                for (int i = 0; i < buff1; i++) {
                    mx_printchar(' ');
                }
                mx_printchar('|');
                mx_printchar('\n');
            }
        }
        mx_printchar('|');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        for (int i = 0; i < buff1; i++) {
            mx_printchar(' ');
        }
        mx_printchar('+');
        mx_printchar('\n');
        for (int i = 0; i < n / 2; i++) {
            buff1--;  
            mx_printchar('|');
            for (int i = 0; i < n * 2; i++) {
                mx_printchar(' ');
            }
            mx_printchar('|');
            for (int i = 0; i < buff1; i++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            mx_printchar('\n');
        }
        mx_printchar('+');
        for (int i = 0; i < n; i++) {
            mx_printchar('-');
            mx_printchar('-');
        }
        mx_printchar('+');
        mx_printchar('\n');
    }
}

