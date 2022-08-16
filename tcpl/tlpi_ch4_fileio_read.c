#include <sys/stat.h> // filePerms
#include <fcntl.h>    // openFlags
#include <stdlib.h>   // EXIT_FAILURE
#include <stdio.h>
#include <string.h>
#include <fcntl.h>  // for open
#include <unistd.h> // for close

#define BUF_SIZE 1024

int main(int argc, char **argv)
{
  int inputFd;
  char buf[BUF_SIZE];
  char *path = strcat(getenv("HOME"), "/Desktop/ch4-file-IN.json");

  /* Open file */
  inputFd = open(path, O_RDONLY);
  if (inputFd == -1)
  {
    printf("error open: %s\n", path);
    return EXIT_FAILURE;
  }

  // read
  while (read(inputFd, buf, BUF_SIZE) > 0)
  {
    printf("%s", buf);
  }

  // Close file
  if (close(inputFd) == -1)
  {
    printf("error close: %s\n", path);
    return EXIT_FAILURE;
  }
}
