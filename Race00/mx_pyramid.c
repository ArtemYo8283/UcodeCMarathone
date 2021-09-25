void mx_printchar(char c);
void mx_pyramid(int n)
{
    if (n > 1 && n % 2 == 0) {
        int buf = n - 1;
        int buf1 = 1;
        int buf2 = 0;
        int bottom = (n * 2) - 3;
        for (int i = 0; i < buf; i++) {
            mx_printchar(' ');
        }   
        mx_printchar('/');
        mx_printchar('\\');
        mx_printchar('\n');
        for (int i = 0; i < (n / 2) - 1; i++) {
            buf--;
            buf2++;
            for (int i = 0; i < buf; i++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            for (int i = 0; i < buf1; i++) {
                mx_printchar(' ');
            }
            mx_printchar('\\');
            for (int i = 0; i < buf2; i++) {
                mx_printchar(' ');
            }
            mx_printchar('\\');
            mx_printchar('\n');
            buf1 += 2;
        }
        for (int i = 0; i < (n / 2) - 1; i++) { 
            buf--;
            for (int i = 0; i < buf; i++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            for (int i = 0; i < buf1; i++) {
                mx_printchar(' ');
            }
            mx_printchar('\\');
            for (int i = 0; i < buf; i++) {
                mx_printchar(' ');
            }
            mx_printchar('|');
            mx_printchar('\n');
            buf1 += 2;
        }
        mx_printchar('/');
        for (int i = 0; i < bottom; i++) {
            mx_printchar('_');
        }
        mx_printchar('\\');
        mx_printchar('|');
        mx_printchar('\n');
    }
}

