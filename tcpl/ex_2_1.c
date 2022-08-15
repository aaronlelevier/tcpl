// Write a program to determine the ranges of char, short, int,
// and long variables, both signed and unsigned,
//
// https://www.tutorialspoint.com/c_standard_library/limits_h.htm
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_LINE_LENGTH 80
#define TAB_STOPS 5

int main(int argc, char **argv)
{
    printf("signed char min:%d\n", CHAR_MIN);
    printf("signed char max:%d\n", CHAR_MAX);
    printf("unsigned char max:%d\n", UCHAR_MAX);

    printf("signed short min:%d\n", SHRT_MIN);
    printf("signed short max:%d\n", SHRT_MAX);
    printf("unsigned short max:%d\n", USHRT_MAX);

    printf("signed int min:%d\n", INT_MIN);
    printf("signed int max:%d\n", INT_MAX);
    printf("unsigned int max:%u\n", UINT_MAX);

    printf("signed long min:%ld\n", LONG_MIN);
    printf("signed long max:%ld\n", LONG_MAX);
    printf("unsigned long max:%lu\n", ULONG_MAX);
}
