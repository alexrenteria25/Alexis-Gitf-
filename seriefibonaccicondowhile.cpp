#include <stdio.h>

int main() {
    int n;
    
    // Solicitar al usuario que introduzca el numero de elementos
    printf("Introduce el numero de elementos de la serie Fibonacci: ");
    scanf("%d", &n);

    // Verificar que n sea mayor que 0
    if (n <= 0) {
        printf("El numero de elementos debe ser mayor que 0.\n");
        return 1;
    }

    // Inicializamos los dos primeros números de la serie
    int a = 0, b = 1;
    int i = 1;

    printf("Serie Fibonacci: ");
    
    do {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
        i++;
    } while (i <= n);

    printf("\n");

    return 0;
}
