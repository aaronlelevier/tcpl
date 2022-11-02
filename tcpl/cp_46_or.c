#include <stdio.h>

int main(int argc, char **argv)
{
  int mask = 3;

  for (int i = 0; i < 8; ++i)
  {
    printf("%d: %d\n", i, i | mask);
  }

  return 0;
}