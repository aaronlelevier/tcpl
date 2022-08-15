// source: https://riptutorial.com/c/example/29223/read-lines-from-a-file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80

int max;
char line[MAX_LINE_LENGTH];
char longest[MAX_LINE_LENGTH];


char* path_join(char* path1, char* path2)
{
    // TODO: hardcoded?
    char *separator = "/";
    return strcat(strcat(path1, separator), path2);
}

int main(int argc, char **argv)
{
    // don't neec to init to a value of 0
    extern int max;
    extern char line[];
    extern char longest[];

    char *path;
    // TODO: how to declare multiple vars on a single line
    unsigned int line_count = 0;

    if (argc < 1)
        return EXIT_FAILURE;

    // TODO: how to access $HOME env var
    printf("HOME: %s\n", getenv("HOME"));

    // TODO: how to join a file path
    path = path_join(getenv("HOME"), "Desktop/ch5-ex1-config.json");
    // path = strcat(getenv("HOME"), "/Desktop/ch5-ex1-config.json");
    // path = "/Users/aaron/Desktop/ch5-ex1-config.json";

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
        if (strlen(line) > max) {
            // TODO: string interpolation for unsigned int
            printf("found longest len[%d]: line: %s\n",
                   (int) strlen(line), line);
            strcpy(longest, line);
            max = strlen(line);
        }

        /* Print each line */
        printf("line[%06d]: len[%d]: %s",
               ++line_count, (int) strlen(line), line);

        /* Add a trailing newline to lines that don't already have one */
        if (line[strlen(line) - 1] != '\n')
            printf("\n");
    }

    // print longest line
    printf("len[%d]: %s", max, longest);

    /* Close file */
    if (fclose(file))
    {
        return EXIT_FAILURE;
        perror(path);
    }
}

