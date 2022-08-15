// source: https://riptutorial.com/c/example/29223/read-lines-from-a-file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80
#define TAB_STOPS 5

int main(int argc, char **argv)
{
    char line[MAX_LINE_LENGTH] = {'\t','o','n','e','\n'};
    char outline[MAX_LINE_LENGTH] = {0};
    int n = 0;

    for (int i = 0; i < strlen(line); ++i) {
        if (line[i] == '\t') {
            while (n < TAB_STOPS-1) {
                printf("%d %d %c %d\n", i, n, line[i], (int)line[i]);
                outline[i+n] = ' ';
                ++n;
            }
            printf("\n");
        }
        printf("%d %d %c %d\n", i, n, line[i], (int)line[i]);

        outline[i+n] = line[i];
    }

    printf("in : %s\n", line);
    printf("out: %s\n", outline);
}

