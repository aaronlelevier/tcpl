#include <stdio.h>

int main()
{
  enum boolean
  {
    NO,
    YES
  };
  int answer = 1;

  if (answer == NO)
    printf("NO: %d\n", NO);
  else
    printf("YES: %d\n", YES);
}
