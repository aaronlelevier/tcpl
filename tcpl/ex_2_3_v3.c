// int-to-hex or itoh
// ref:
// https://www.permadi.com/tutorial/numDecToHex/
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char **argv)
{
  char buf[10];
  for (int i = 0; i < 16; ++i)
  {
    sprintf(buf, "%d", i);

    printf("%s | %c\n", buf, buf[0]);
  }
}
