#include <stdio.h>

int main() {
    char name[50];

    printf("Ingrese un nombre\n");
    scanf("%49s", name);

    printf("Hola %s\n", name);
    return 0;
}


