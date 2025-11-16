#include <stdio.h>

#define MAXLINE 1000

int getLine(char s[], int lim);
void reverse(char s[]);

int main(void)
{
    char line[MAXLINE];
    int len;

    while ((len = getLine(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

/* Lee una línea y regresa su longitud */
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

/* Invierte la cadena s in-place */
void reverse(char s[])
{
    int i, j;
    char temp;

    /* Encontrar el final de la cadena (sin el \0) */
    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        ;

    j = i - 1;  /* índice del último char válido */

    /* Invertir intercambiando i y j */
    for (int k = 0; k < j; k++, j--) {
        temp = s[k];
        s[k] = s[j];
        s[j] = temp;
    }
}
