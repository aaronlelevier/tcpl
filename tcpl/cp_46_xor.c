#include <stdio.h>

int main(int argc, char **argv)
{
  int i = 011;
  printf("%d: %d\n", i, 3 & ~i);

  return 0;
}