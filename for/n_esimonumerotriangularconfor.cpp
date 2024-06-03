#include <stdio.h>

int calcularTriangular(int n) {
    int triangular = 0;
    for (int i = 1; i <= n; i++) {
        triangular += i;
    }
    return triangular;
}

int main() {
    int n;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &n);

    // Calcular el n-ésimo número triangular y presentar la serie
    printf("Serie de numeros triangulares:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", calcularTriangular(i));
    }

    // Mostrar el resultado del n-ésimo número triangular
    printf("\nEl %d-esimo numero triangular es: %d\n", n, calcularTriangular(n));

    return 0;
}
