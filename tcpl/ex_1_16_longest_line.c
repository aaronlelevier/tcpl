// source: https://riptutorial.com/c/example/29223/read-lines-from-a-file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80

int main(int argc, char **argv)
{
    char *path;
    char *longestLine = malloc(MAX_LINE_LENGTH);
    char line[MAX_LINE_LENGTH] = {0};
    int longestLength = 0;
    // TODO: how to declare multiple vars on a single line
    unsigned int line_count = 0;

    if (argc < 1)
        return EXIT_FAILURE;

    // TODO: how to access $HOME env var
    printf("HOME: %s\n", getenv("HOME"));

    // TODO: how to join a file path


    path = "/Users/aaron/Desktop/ch5-ex1-config.json";

    /* Open file */
    FILE *file = fopen(path, "r");

    if (!file)
    {
        perror(path);
        return EXIT_FAILURE;
    }

    /* Get each line until there are none left */
    while (fgets(line, MAX_LINE_LENGTH, file))
    {
        if (strlen(line) > longestLength) {
            // TODO: string interpolation for unsigned int
            printf("found longest len[%d]: line: %s\n",
                   (int) strlen(line), line);
            strcpy(longestLine, line);
            longestLength = strlen(line);
        }

        /* Print each line */
        printf("line[%06d]: len[%d]: %s",
               ++line_count, (int) strlen(line), line);

        /* Add a trailing newline to lines that don't already have one */
        if (line[strlen(line) - 1] != '\n')
            printf("\n");
    }

    // print longest line
    printf("len[%d]: %s", longestLength, longestLine);

    /* Close file */
    if (fclose(file))
    {
        return EXIT_FAILURE;
        perror(path);
    }
}

