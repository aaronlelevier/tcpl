// int-to-hex or itoh
// Accepts a single interger CL arg and outputs the hex value to stdout
// ref:
// https://www.permadi.com/tutorial/numDecToHex/
#include <stdio.h>
#include <string.h>

#define ENOUGH 10

void squeeze(char s[], int c);

int main(int argc, char **argv)
{
  char s[ENOUGH];
  strcpy(s, "x y");

  squeeze(s, ' ');

  printf("%s\n", s);
}

void squeeze(char s[], int c)
{
  int i, j;

  for (i = j = 0; s[i] != '\0'; ++i)
  {
    if (s[i] != c)
      s[j++] = s[i];
  }
  s[j] = '\0';
}