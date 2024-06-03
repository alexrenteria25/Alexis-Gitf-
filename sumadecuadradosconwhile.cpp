#include <stdio.h>

int main() {
    int n, suma = 0;
    int i = 1;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los cuadrados y presentar la serie usando un ciclo while
    printf("Serie de numeros: ");
    while (i <= n) {
        printf("%d ", i);
        suma += i * i;
        i++;
    }

    // Mostrar el resultado
    printf("\nLa suma de los cuadrados de los primeros %d numeros naturales es: %d\n", n, suma);

    return 0;
}
