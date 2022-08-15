#include <sys/stat.h> // filePerms
#include <fcntl.h>    // openFlags
#include <stdlib.h>   // EXIT_FAILURE
#include <stdio.h>
#include <string.h>
#include <fcntl.h>  // for open
#include <unistd.h> // for close

#define MAX_LINE_LENGTH 80

char *path_join(char *path1, char *path2)
{
  char *separator = "/";
  return strcat(strcat(path1, separator), path2);
}

int main(int argc, char **argv)
{
  char *path;
  int inputFd, openFlags, filePerms;

  path = path_join(getenv("HOME"), "Desktop/ch5-ex1-config.json");

  /* Open file */
  openFlags = O_CREAT | O_WRONLY | O_TRUNC;
  filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH; /* rw-rw-rw- */
  inputFd = open(path, openFlags, filePerms);

  if (inputFd == -1)
  {
    printf("error open: %s\n", path);
    return EXIT_FAILURE;
  }

  // TODO: read

  if (close(inputFd) == -1)
  {
    printf("error close: %s\n", path);
    return EXIT_FAILURE;
  }
}
