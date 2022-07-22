#include <stdio.h>

int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF) {
        ++nc;
        putchar(nc);
    }

    printf("final: %ld\n", nc);
}
