// int-to-hex or itoh
// ref:
// https://www.permadi.com/tutorial/numDecToHex/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char *s = "1128";
  printf("%s\n", s);

  int x = strtol(s, NULL, 10);
  printf("%d\n", x);
}
