#include <stdio.h>

#define MAXLINE 1000  /* tamaño máximo de una línea */

int getLine(char s[], int lim);

int main(void)
{
    char line[MAXLINE];
    int len;

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > 80) {
            printf("%s", line);
        }
    }

    return 0;
}

/* Lee una línea y devuelve su longitud */
int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}
