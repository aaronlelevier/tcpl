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

  printf("after: %s\n", s);
}

void squeeze(char s[], char t[])
{
  int i, j, match;

  for (i = j = 0; s[i] != '\0'; ++i)
  {
    match = 0;
    for (int k = 0; t[k] != '\0'; ++k)
    {
      if (s[i] == t[k])
      {
        // printf("s[i]%c, t[k]:%c\n", s[i], t[k]);
        match = 1;
      }
    }
    // printf("match:%d j:%d, t[k]:%c\n", match, j, s[i]);

    if (!match)
      s[j++] = s[i];
  }
  s[j] = '\0';
}