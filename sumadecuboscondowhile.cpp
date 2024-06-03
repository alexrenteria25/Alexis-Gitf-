#include <stdio.h>

int main() {
    int n, suma = 0;
    int i = 1;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los cubos y presentar la serie usando un ciclo do-while
    printf("Serie de numeros: ");
    do {
        printf("%d ", i);
        suma += i * i * i;
        i++;
    } while (i <= n);

    // Mostrar el resultado
    printf("\nLa suma de los cubos de los primeros %d numeros naturales es: %d\n", n, suma);

    return 0;
}
