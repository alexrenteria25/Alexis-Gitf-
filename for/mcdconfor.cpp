#include <stdio.h>

int main() {
    int numero1, numero2;

    // Solicitar al usuario que introduzca dos números
    printf("Introduce el primer numero: ");
    scanf("%d", &numero1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &numero2);

    // Encontrar el MCD usando un ciclo for
    int mcd;
    for (int i = 1; i <= numero1 && i <= numero2; i++) {
        if (numero1 % i == 0 && numero2 % i == 0) {
            mcd = i;
        }
    }

    // Mostrar el resultado
    printf("El MCD de %d y %d es: %d\n", numero1, numero2, mcd);

    return 0;
}
