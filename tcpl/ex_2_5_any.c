// int-to-hex or itoh
// Accepts a single interger CL arg and outputs the hex value to stdout
// ref:
// https://www.permadi.com/tutorial/numDecToHex/
#include <stdio.h>
#include <string.h>

#define ENOUGH 10

int any(char s1[], char s2[]);

int main(int argc, char **argv)
{
  char *s = "hi this is bob";
  char *t = "abt";

  // t is the first commone letter and we should get an
  // index of 11 or 'b' as in 'bob's first letter
  int answer = any(s, t);
  printf("answer: %d\n", answer);
}

// returns the index of the first occurrence in 's1' of
// any character in 's2'
int any(char s1[], char s2[])
{
  for (int j = 0; s2[j] != '\0'; ++j)
  {
    for (int i = 0; s1[i] != '\0'; ++i)
    {
      // printf("s2[j]:%c[%d], s1[i]:%c[%d]\n", s2[j], j, s1[i], i);
      if (s2[j] == s1[i])
        return i;
    }
  }
  return -1;
}