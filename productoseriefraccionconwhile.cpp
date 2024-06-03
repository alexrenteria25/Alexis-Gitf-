#include <stdio.h>

int main() {
    int n, i = 1;
    double producto = 1.0;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &n);

    // Calcular el producto de la serie usando un ciclo while
    printf("Serie de numeros fraccionarios:\n");
    while (i <= n) {
        producto *= 1.0 / i;
        printf("1/%d ", i);
        if (i < n) {
            printf("* ");
        }
        i++;
    }

    // Mostrar el resultado en forma de fracción
    printf("\nEl producto de la serie de numeros fraccionarios hasta 1/%d es: ", n);
    printf("%.10lf\n", producto);

    return 0;
}
