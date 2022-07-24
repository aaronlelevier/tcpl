#include <stdio.h>
#include <string.h>

// print a histogram of the length of words

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main()
{
    char c;
    char s[] = "replace  spaces   yo       foo";
    int s_len = strlen(s);
    char new_s[s_len];
    int prev_blank = IN;
    int j = 0;

    for (int i = 0; i <= s_len; ++i) {
        if (s[i] == ' ') {
            if (prev_blank == IN) {
                printf("%0*d %10s\n", (int) strlen(new_s), 0, new_s);
                // printf("%s\n", new_s);
                memset(new_s, 0, sizeof(new_s));
                j = 0;
            }
            prev_blank = OUT;
        }
        else {
            new_s[j] = s[i];
            ++j;
            prev_blank = IN;
        }
    }
    printf("%0*d %10s\n", (int) strlen(new_s), 0, new_s);
}

