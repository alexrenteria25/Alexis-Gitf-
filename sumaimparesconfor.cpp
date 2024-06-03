#include <stdio.h>

int main() {
    int n, suma = 0;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los números impares usando un ciclo for
    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }

    // Mostrar el resultado
    printf("La suma de todos los numeros impares desde 1 hasta %d es: %d\n", n, suma);

    return 0;
}
