#include <stdio.h>
#include <string.h>

#define VAL 1
char line[VAL];

int main()
{
  printf("first...  "
         "val: %d\n",
         VAL);

  char *s = "escaped -> \"foo\"\n";
  printf("%s is len:%d\n", s, (int)strlen(s));
}
