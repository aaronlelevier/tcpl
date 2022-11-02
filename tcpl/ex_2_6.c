#include <stdio.h>
#include <math.h>

/*
00 - 0
01 - 1
10 - 2
11 - 3
*/

/* getbits:  get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
  return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
  return x - getbits(x, p, n) + getbits(y, p, n);
}

int main(int argc, char **argv)
{
  int x = 7;
  int y = 4;
  int p = 2;
  int n = 2;
  printf("getbits[%d]: %d\n", n, setbits(x, p, n, y));
  printf("getbits[%d]: %d\n", n, setbits(0011, 2, 1, 0100));

  // int ret;
  // for (int i = 0; i < 6; ++i)
  // {
  //   // printf("%d: %d\n", i, single_mask(i));
  //   printf("getbits[%d]: %d\n", i, setbits(15, i, 1));
  // }

  return 0;
}