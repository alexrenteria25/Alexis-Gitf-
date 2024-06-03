#include <stdio.h>

int main() {
    
    int n, suma = 0;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los cubos y presentar la serie usando un ciclo for
    printf("Serie de numeros: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
        suma += i * i * i;
    }

    // Mostrar el resultado
    printf("\nLa suma de los cubos de los primeros %d numeros naturales es: %d\n", n, suma);

    return 0;
}
