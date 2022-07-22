#include <stdio.h>

/*
    F2C
    (32°F − 32) × 5/9 = 0°C
*/

int main()
{
    float fahr, celcius;
    float lower, upper, step;

    lower = 40;
    upper = 70;
    step = 10;

    celcius = lower;

    printf("%3s %6s\n", "C", "F");
    printf("----------\n");


    while(celcius <= upper) {
        // celcius = (fahr-32) * 5.0/9.0;
        // celcius / (5.0/9.0) = (fahr-32)
        // celcius / (5.0/9.0) + 32 = fahr
        fahr = celcius / (5.0/9.0) + 32;
        printf("%3.0f %6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
}
