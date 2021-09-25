void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strcmp(const char *s1, const char *s2);
int main(int argc, char *argv[]) {
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            for (int j = 1; j < argc; j++) {
                if(mx_strcmp(argv[i], argv[j]) < 0)
                {
                    char *buff = argv[i];
                    argv[i] = argv[j];
                    argv[j] = buff;
                }
            }
        }
        for (int i = 1; i < argc; i++) {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }
    return 0;
}

