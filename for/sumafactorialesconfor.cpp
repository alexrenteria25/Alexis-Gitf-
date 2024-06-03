#include <stdio.h>

// Función para calcular el factorial de un número
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    int suma = 0;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los factoriales de los primeros n números y presentar la serie
    printf("Factoriales de los primeros %d numeros:\n", n);
    for (int i = 1; i <= n; i++) {
        int fact = factorial(i);
        printf("%d! = %d\n", i, fact);
        suma += fact;
    }

    // Mostrar el resultado de la suma de los factoriales
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma);

    return 0;
}
