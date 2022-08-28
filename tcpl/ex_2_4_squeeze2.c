// int-to-hex or itoh
// Accepts a single interger CL arg and outputs the hex value to stdout
// ref:
// https://www.permadi.com/tutorial/numDecToHex/
#include <stdio.h>
#include <string.h>

#define ENOUGH 10

void squeeze(char s[], char t[]);

int main(int argc, char **argv)
{
  char s[ENOUGH];
  char t[ENOUGH];
  strcpy(s, "a b c");
  strcpy(t, "b ");
  printf("before: %s\n", s);

  squeeze(s, t);

  printf("after:  %s\n", s);
}

void squeeze(char s1[], char s2[])
{
  int i, j, match;

  for (i = j = 0; s1[i] != '\0'; ++i)
  {
    match = 0;
    for (int k = 0; s2[k] != '\0'; ++k)
    {
      if (s1[i] == s2[k])
      {
        match = 1;
      }
    }

    if (!match)
      s1[j++] = s1[i];
  }
  s1[j] = '\0';
}