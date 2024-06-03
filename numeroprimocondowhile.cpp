#include <stdio.h>

int main() {
    int numero, es_primo = 1; // Suponemos que el número es primo
    int divisor = 2;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    // Verificar si el número es primo usando un ciclo do-while
    do {
        if (numero % divisor == 0) {
            es_primo = 0; // El número no es primo
            break; // Salir del bucle si encuentra un divisor
        }
        divisor++;
    } while (divisor <= numero / 2);

    // Mostrar el resultado
    if (es_primo)
        printf("%d es un numero primo.\n", numero);
    else
        printf("%d no es un numero primo.\n", numero);

    return 0;
}
