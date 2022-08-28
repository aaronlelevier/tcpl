// int-to-hex or itoh
// Accepts a single interger CL arg and outputs the hex value to stdout
// ref:
// https://www.permadi.com/tutorial/numDecToHex/
#include <stdio.h>
#include <string.h>

#define ENOUGH 10

void strcat2(char s[], char t[]);

int main(int argc, char **argv)
{
  char s[ENOUGH];
  s[0] = 'x';
  s[1] = ' ';
  s[2] = '\0';
  char *t = "bar";

  strcat2(s, t);

  printf("s: %s\n", s);
}

// concat 't' to the end of 's
void strcat2(char s[], char t[])
{
  int i, j;
  i = j = 0;
  // find the end of 's'
  while (s[i] != '\0')
    i++;
  // copy 't
  while ((s[i++] = t[j++]) != '\0')
    ;
}