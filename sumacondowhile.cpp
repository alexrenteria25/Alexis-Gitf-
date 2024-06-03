#include <stdio.h>

int main() {
    int numero, suma = 0;
    
    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    // Hacemos una copia del numero para no modificar el original
    int n = numero;

    // Ciclo do-while para iterar al menos una vez
    do {
        // En cada iteración, extraemos el último dígito de 'n' usando 'n % 10'
        suma += n % 10;
        // Eliminamos el último dígito dividiendo 'n' por 10
        n /= 10;
    } while (n > 0);

    // Mostramos la suma de los dígitos
    printf("La suma de los digitos es: %d\n", suma);

    return 0;
}