#include <stdio.h>

int main() {
    int numero;
    long long factorial = 1;
    
    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    // Verificar que el número no sea negativo
    if (numero < 0) {
        printf("El factorial no está definido para números negativos.\n");
        return 1;
    }

    // Calcular el factorial usando un ciclo for
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    // Mostramos el resultado del factorial
    printf("El factorial de %d es: %lld\n", numero, factorial);

    return 0;
}
