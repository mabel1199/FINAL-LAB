#include <stdio.h>

int main(void)
{
    int c;
    int lastWasSpace = 0;  /* bandera para saber si el último caracter fue un espacio */

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!lastWasSpace) {
                putchar(c);      /* imprimir solo un espacio */
                lastWasSpace = 1;
            }
        } else {
            putchar(c);          /* imprimir cualquier otro caracter */
            lastWasSpace = 0;
        }
    }

    return 0;
}
