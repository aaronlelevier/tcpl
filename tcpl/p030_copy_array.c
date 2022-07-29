#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */

int getline2(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main(int argc, char *argv[])
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE]; /* longest line saved here */
    /* current line length */
    /* maximum length seen so far */
    max = 0;
    while ((len = getline2(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if(max>0) /*therewasaline*/ printf("%s", longest);
    /* current input line */
    return 0;
}

/* getline2:  read a line into s, return length  */
// getline - is a function in <stdio.h>
int getline2(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
