void mx_printstr(const char *s);
void mx_printchar(char c);
int main(int argc, char const *argv[]) {
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++) {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }
    return 0;
}

