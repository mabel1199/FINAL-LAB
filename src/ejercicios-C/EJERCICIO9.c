#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            /* Tab → mostrar como > */
            putchar('>');
            putchar('\b');
            putchar('-');
        } 
        else if (c == '\b') {
            /* Backspace → mostrar como < */
            putchar('<');
            putchar('\b');
            putchar('-');
        }
        else {
            putchar(c);  /* cualquier otro caracter */
        }
    }

    return 0;
}
