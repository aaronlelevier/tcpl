// int-to-hex or itoh
// Accepts a single interger CL arg and outputs the hex value to stdout
// ref:
// https://www.permadi.com/tutorial/numDecToHex/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

char itoh(int i);

int main(int argc, char **argv)
{
  int n = strtol(argv[1], NULL, 10);
  int base = 16;
  int result = n;
  int remainder;

  char buf[10];

  char answer[10];
  int i = 0;

  while (result != 0)
  {
    remainder = result % base;
    result = result / base;

    // printf("%d | %d\n", result, remainder);
    answer[i] = itoh(remainder);
    ++i;
  }

  char reversed[strlen(answer)];
  for (int j = strlen(answer) - 1; j >= 0; --j)
  {
    reversed[strlen(answer) - j] = answer[j];
  }
  printf("reversed: %s\n", reversed);

  return 0;
}


char itoh(int i)
{
  char str[2];

  switch (i)
  {
  case 10:
    str[0] = 'A';
    break;
  case 11:
    str[0] = 'B';
    break;
  case 12:
    str[0] = 'C';
    break;
  case 13:
    str[0] = 'D';
    break;
  case 14:
    str[0] = 'E';
    break;
  case 15:
    str[0] = 'F';
    break;
  default:
    // converts 0-9
    sprintf(str, "%d", i);
    break;
  }

  return str[0];
}

