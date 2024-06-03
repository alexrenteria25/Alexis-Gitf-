#include <stdio.h>

int main() {
    int numero, es_primo = 1; // Suponemos que el número es primo

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    // Verificar si el número es primo usando un ciclo for
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            es_primo = 0; // El número no es primo
            break; // Salir del bucle si encuentra un divisor
        }
    }

    // Mostrar el resultado
    if (es_primo)
        printf("%d es un numero primo.\n", numero);
    else
        printf("%d no es un numero primo.\n", numero);

    return 0;
}
