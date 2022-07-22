#include <stdio.h>

// \c = unknown escape sequence

/*
    p.12 print F2h 0..300
*/

int main()
{
    int fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper) {
        celcius = 5 * (fahr-32) / 9;
        printf("%3d %6d\n", fahr, celcius);
        fahr = fahr + step;
    }
}
