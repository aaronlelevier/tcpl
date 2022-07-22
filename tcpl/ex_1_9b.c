#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// consolidate blanks to a single blank

int main()
{
    char c;
    char s[] = "replace  spaces   yo       foo";
    int s_len = strlen(s);
    char new_s[s_len];
    bool prev_blank = false;
    int j = 0;

    for (int i = 0; i <= s_len; ++i) {
        if (s[i] == ' ') {
            if (prev_blank == false) {
                new_s[j] = s[i];
                ++j;
            }
            prev_blank = true;
        }
        else {
            new_s[j] = s[i];
            ++j;
            prev_blank = false;
        }
    }
    printf("%s\n", new_s);
}
