#include <stdio.h>
int main() {
    int numero, inverso = 0;
    
    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    // Usamos una copia de 'numero' para no modificar el original
    for (int n = numero; n != 0; n /= 10) {
        // Extraemos el último dígito y lo agregamos al inverso
        inverso = inverso * 10 + (n % 10);
    }

    // Mostramos el inverso del número
    printf("El inverso del numero es: %d\n", inverso);

    return 0;
}