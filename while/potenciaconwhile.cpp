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
    while (i < exponente) {
        int suma = 0;
        int j = 0;
        while (j < base) {
            suma += temp;
            j++;
        }
        temp = suma;
        i++;
    }
    resultado = temp;

    // Mostramos el resultado de la potencia
    printf("El resultado de %d elevado a %d es: %d\n", base, exponente, resultado);

    return 0;
}
