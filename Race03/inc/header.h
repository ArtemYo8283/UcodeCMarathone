#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define JAPANESE {"ア", "イ", "ウ", "エ", "オ", "カ", "キ", "ク", "ケ", "コ", "サ", "シ", "ス", "セ", "ソ", "ガ", "ギ", "グ", "ゲ", "ゴ", "パ", "ピ", "プ", "ペ", "ポ"}

unsigned int mx_strlen(const char *s);
char mx_display_char(int x, int y, int start, int max_y, char prev);
char *mx_display_jp(int x, int y, int start, int max_y, char *prev);
void mx_flags_handler(int argc, char *argv[], char *flags);
void mx_start(void);
void mx_rain(bool is_jap);
void mx_text_type(char* str);
