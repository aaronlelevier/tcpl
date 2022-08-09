// source: https://riptutorial.com/c/example/29223/read-lines-from-a-file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80

#define LONGER_LINE 10

char* path_join(char* path1, char* path2)
{
    // TODO: hardcoded?
    char *separator = "/";
    return strcat(strcat(path1, separator), path2);
}

int main(int argc, char **argv)
{
    char *path;
    char line[MAX_LINE_LENGTH] = {0};
    unsigned int line_count = 0;

    if (argc < 1)
        return EXIT_FAILURE;

    // TODO: how to join a file path
    path = path_join(getenv("HOME"), "Desktop/ch5-ex1-config.json");

    /* Open file */
    FILE *file = fopen(path, "r");

    if (!file)
    {
        perror(path);
        return EXIT_FAILURE;
    }

    printf("will print lines gte: %d\n", LONGER_LINE);

    /* Get each line until there are none left */
    while (fgets(line, MAX_LINE_LENGTH, file))
    {
        /* Print each line */
        if (strlen(line) >= LONGER_LINE) {
            printf("line[%06d]: len[%d]: %s",
                   ++line_count, (int) strlen(line), line);
        }

        /* Add a trailing newline to lines that don't already have one */
        if (line[strlen(line) - 1] != '\n')
            printf("\n");
    }

    /* Close file */
    if (fclose(file))
    {
        return EXIT_FAILURE;
        perror(path);
    }
}

