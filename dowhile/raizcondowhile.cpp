#include <stdio.h>

int main() {
    int numero, raiz = 0, cubo;
    
    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    // Restas sucesivas para encontrar la raíz cúbica
    int i = 1;
    do {
        cubo = i * i * i;
        if (cubo > numero) {
            break;
        }
        raiz = i;
        i++;
    } while (1);

    // Mostramos el resultado de la raíz cúbica
    printf("La raiz cubica aproximada de %d es: %d\n", numero, raiz);

    return 0;
}
