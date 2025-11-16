#include <stdio.h>

#define MAXLINE 1000  /* tamaño máximo de una línea */

int getLine(char s[], int lim);
void removeTrailing(char s[]);

int main(void)
{
    char line[MAXLINE];

    while (getLine(line, MAXLINE) > 0) {
        removeTrailing(line);
        /* Si después de eliminar espacios la línea no está vacía, imprimirla */
        if (line[0] != '\0') {
            printf("%s", line);
        }
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

/* Elimina espacios y tabs al final de la línea */
void removeTrailing(char s[])
{
    int i = 0;

    /* Buscar el fin actual */
    while (s[i] != '\0')
        i++;

    /* Ir hacia atrás eliminando espacios, tabs y \n */
    i--; 
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
        i--;

    /* Colocar fin de cadena después del último caracter válido */
    s[i + 1] = '\0';

    
}
