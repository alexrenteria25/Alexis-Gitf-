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

    // Calcular el factorial usando un ciclo do-while
    int i = 1;
    if (numero == 0) {
        factorial = 1;
    } else {
        do {
            factorial *= i;
            i++;
        } while (i <= numero);
    }

    // Mostramos el resultado del factorial
    printf("El factorial de %d es: %lld\n", numero, factorial);

    return 0;
}
