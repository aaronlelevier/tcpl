#include <stdio.h>
#include <string.h>

// print a histogram of the frequency of characters

int main()
{
    // a = 3
    // b = 1
    // c = 4
    // d = 2
    char s[] = {'a', 'b', 'c', 'a', 'a', 'd', 'd', 'c', 'c', 'c'};
    int counts[sizeof(s)];
    int c;

    for (int i = 0; i < sizeof(s); ++i)
        counts[i] = 0;

    for (int i = 0; i < sizeof(s); ++i) {
        // printf("%c\n", s[i]);
        ++counts[s[i]-'a'];
    }

    for (int i = 0; i < sizeof(s); ++i) {
        if (counts[i] > 0)
            printf("%c %d\n", s[i], counts[i]);
    }



    // printf("%0*d %10s\n", (int) strlen(new_s), 0, new_s);
}

