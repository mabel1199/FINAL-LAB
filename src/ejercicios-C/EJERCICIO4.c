#include <stdio.h>

/* Tabla de conversion de Celsius a Fahrenheit
   para C = 0, 20, ..., 300 */

int main(void)
{
    int lower, upper, step;
    float celsius, fahr;

    /* Título */
    printf("Tabla de conversion de Celsius a Fahrenheit\n");
    printf("   C       F\n");
    printf("------------------\n");

    lower = 0;    /* límite inferior */
    upper = 300;  /* límite superior */
    step = 20;    /* incremento */
    celsius = lower;

    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%4.0f %8.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}




