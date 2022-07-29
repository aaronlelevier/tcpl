#include <stdio.h>

// f2c using a separate function

/*
    p.12 print F2h 0..300
*/

float f2c(float fahr);

int main()
{
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("%3s %6s\n", "F", "C");
    printf("----------\n");

    while(fahr <= upper) {
        celcius = f2c(fahr);
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}

float f2c(float fahr) {
    return 5 * (fahr-32) / 9;
}
