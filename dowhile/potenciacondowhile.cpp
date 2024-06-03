#include <stdio.h>

int main() {
    int base, exponente, resultado = 0;
    
    // Solicitar al usuario que introduzca la base y el exponente
    printf("Introduce la base: ");
    scanf("%d", &base);
    printf("Introduce el exponente: ");
    scanf("%d", &exponente);

    // Multiplicar base por sí misma (exponente-1) veces usando sumas sucesivas
    int temp = base;
    int i = 1;
    do {
        int suma = 0;
        int j = 0;
        do {
            suma += temp;
            j++;
        } while (j < base);
        temp = suma;
        i++;
    } while (i < exponente);
    resultado = temp;

    // Mostramos el resultado de la potencia
    printf("El resultado de %d elevado a %d es: %d\n", base, exponente, resultado);

    return 0;
}