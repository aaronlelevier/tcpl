#include <stdio.h>
#include <string.h>

// prints a char per line of the char array 's'

int main()
{
    int i;
    char b = ' ';
    char s[] = "replace  extra     spaces";
    int s_len = strlen(s);

    for (i = 0; i <= s_len; ++i) {
        printf("%c\n", s[i]);
    }
}
