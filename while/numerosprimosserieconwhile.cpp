#include <stdio.h>
#include <stdbool.h>

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    int n;
    int contadorPrimos = 0;
    int i = 2;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &n);

    // Contar cuántos números primos hay desde 1 hasta n y presentar la serie
    printf("Serie de numeros primos:\n");
    while (i <= n) {
        if (esPrimo(i)) {
            printf("%d ", i);
            contadorPrimos++;
        }
        i++;
    }

    // Mostrar el resultado
    printf("\nCantidad de numeros primos desde 1 hasta %d: %d\n", n, contadorPrimos);

    return 0;
}
