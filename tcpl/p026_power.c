#include <stdio.h>
#include <string.h>

// raise X to the power of Y - example of defining a
// function other than main()

int power(int m, int n);

int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d\n", i, power(2, i));
    return 0;
}

int power(int base, int n) {
    int i, p;

    p = 1;
    for (i = 0; i <= n; ++i)
        p = p * base;
    return p;
}
