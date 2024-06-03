#include <stdio.h>

int main() {
    int numero, contador = 0;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    // Contar el número de dígitos
    int temp = numero;
    do {
        temp /= 10;
        contador++;
    } while (temp != 0);

    // Mostrar el número de dígitos
    printf("El numero de digitos en %d es: %d\n", numero, contador);

    return 0;
}
