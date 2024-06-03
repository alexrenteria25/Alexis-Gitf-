#include <stdio.h>

// Función para calcular el factorial de un número
int factorial(int num) {
    int fact = 1;
    int i = 1;
    while (i <= num) {
        fact *= i;
        i++;
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
    int i = 1;
    while (i <= n) {
        int fact = factorial(i);
        printf("%d! = %d\n", i, fact);
        suma += fact;
        i++;
    }

    // Mostrar el resultado de la suma de los factoriales
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma);

    return 0;
}
