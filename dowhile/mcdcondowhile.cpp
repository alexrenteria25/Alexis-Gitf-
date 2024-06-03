#include <stdio.h>

int main() {
    int numero1, numero2;

    // Solicitar al usuario que introduzca dos números
    printf("Introduce el primer numero: ");
    scanf("%d", &numero1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &numero2);

    // Encontrar el MCD usando un ciclo do-while
    int mcd, divisor = 1;
    do {
        if (numero1 % divisor == 0 && numero2 % divisor == 0) {
            mcd = divisor;
        }
        divisor++;
    } while (divisor <= numero1 && divisor <= numero2);

    // Mostrar el resultado
    printf("El MCD de %d y %d es: %d\n", numero1, numero2, mcd);

    return 0;
}
