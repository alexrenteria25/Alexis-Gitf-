#include <stdio.h>

int main() {
    int numero, suma = 0;
    
    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    // Utilizamos una copia de 'numero' para no modificar el original
    for (int n = numero; n > 0; n /= 10) {
        // En cada iteración, extraemos el último dígito de 'n' usando 'n % 10'
        suma += n % 10;
    }

    // Mostramos la suma de los dígitos
    printf("La suma de los digitos es: %d\n", suma);

    return 0;
}