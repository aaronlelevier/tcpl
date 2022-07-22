#include <stdio.h>

// count blanks, tabs, and newlines

int main()
{
    int c, nc;

    c = getchar();
    nc = 0;

    while (c != 'Z'){
        printf("c: %d\n", c);

        if (c == '\t')
            printf("inc tab\n");
        if (c == '\n')
            printf("inc newline\n");
            ++nc;
        if (c == ' ')
            printf("inc blank\n");
            ++nc;

        c = getchar();
    }
    printf("nc: %d\n", nc);
}
