#include <stdio.h>

#define IN 1    /* dentro de una palabra */
#define OUT 0   /* fuera de una palabra */
#define MAXLEN 20  /* tamaño máximo de palabra para el histograma */

int main(void)
{
    int c, state;
    int length = 0;
    int wordLengths[MAXLEN + 1];

    /* inicializar contadores */
    for (int i = 0; i <= MAXLEN; i++)
        wordLengths[i] = 0;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                /* se terminó una palabra */
                if (length <= MAXLEN)
                    wordLengths[length]++;
                length = 0;
            }
            state = OUT;
        } else {
            if (state == OUT) {
                state = IN;
                length = 1;
            } else {
                length++;
            }
        }
    }

    /* Si la última palabra no terminó con espacio */
    if (length > 0 && length <= MAXLEN)
        wordLengths[length]++;

    /* imprimir histograma */
    printf("\nHISTOGRAMA DE LONGITUDES DE PALABRAS:\n\n");
    for (int i = 1; i <= MAXLEN; i++) {
        if (wordLengths[i] > 0) {
            printf("%2d: ", i);
            for (int j = 0; j < wordLengths[i]; j++)
                putchar('*');
            putchar('\n');
        }
    }

    return 0;
}
