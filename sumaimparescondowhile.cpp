#include <stdio.h>

int main() {
    int n, suma = 0;
    int i = 1;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los números impares usando un ciclo do-while
    do {
        suma += i;
        i += 2;
    } while (i <= n);

    // Mostrar el resultado
    printf("La suma de todos los numeros impares desde 1 hasta %d es: %d\n", n, suma);

    return 0;
}
