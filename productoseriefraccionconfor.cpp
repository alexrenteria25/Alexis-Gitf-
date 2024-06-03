#include <stdio.h>

int main() {
    int n;
    double producto = 1.0;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &n);

    // Calcular el producto de la serie usando un ciclo for
    printf("Serie de numeros fraccionarios:\n");
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
        printf("1/%d ", i);
        if (i < n) {
            printf("* ");
        }
    }

    // Mostrar el resultado en forma de fracción
    printf("\nEl producto de la serie de numeros fraccionarios hasta 1/%d es: ", n);
    printf("%.10lf\n", producto);

    return 0;
}
