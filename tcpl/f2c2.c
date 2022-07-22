#include <stdio.h>

// \c = unknown escape sequence

/*
    p.12 print F2h 0..300
*/

int main()
{
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper) {
        celcius = 5 * (fahr-32) / 9;
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}
