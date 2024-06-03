#include <stdio.h>

int main() {
    int numero, contador = 0;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    // Contar el número de dígitos usando un ciclo for
    for (int temp = numero; temp != 0; temp /= 10) {
        contador++;
    }

    // Mostrar el número de dígitos
    printf("El numero de digitos en %d es: %d\n", numero, contador);

    return 0;
}
