#include <stdio.h>

int main() {
    int numero, inverso = 0;
    
    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    // Hacemos una copia del numero para no modificar el original
    int n = numero;

    // Ciclo while para iterar mientras n no sea 0
    while (n != 0) {
        // Extraemos el último dígito y lo agregamos al inverso
        inverso = inverso * 10 + (n % 10);
        // Eliminamos el último dígito dividiendo 'n' por 10
        n /= 10;
    }

    // Mostramos el inverso del número
    printf("El inverso del numero es: %d\n", inverso);

    return 0;
}