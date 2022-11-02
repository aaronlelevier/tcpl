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

// Returns an int that is a single digit '1' mask at place 'i'
int single_mask(int i)
{
  if (i < 3)
    return pow(2, i) - 1;
  else
    return pow(2, i - 1);
}

int main(int argc, char **argv)
{
  int ret;

  for (int i = 0; i < 6; ++i)
  {
    // printf("%d: %d\n", i, single_mask(i));
    // printf("getbits[%d]: %d\n", i, getbits(4, i, 1));
    // printf("getbits[%d]: %d\n", i, getbits(4, i, 2));
    // printf("getbits[%d]: %d\n", i, getbits(4, i, 3));
    printf("getbits[%d]: %d\n", i, getbits(i, 2, 1));
    // printf("\n");
  }

  return 0;
}