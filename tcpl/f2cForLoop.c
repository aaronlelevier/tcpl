#include <stdio.h>

// for loop example

int main()
{
    int fahr;

    for(fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr, 5.0 * (fahr-32) / 9.0);
    }
}
