#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char **argv)
{
  int n = 1128;
  int base = 16;
  int result = n;
  int remainder;

  while (result != 0)
  {
    remainder = result % base;
    result = result / base;
    printf("%d | %d\n", result, remainder);
  }

  return 0;
}
