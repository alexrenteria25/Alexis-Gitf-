#include <stdio.h>

int main() {
    int n, i = 0;
    double primer_termino, razon, producto = 1.0;
    
    // Solicitar al usuario que introduzca el número de términos, el primer término y la razón
    printf("Introduce el numero de terminos: ");
    scanf("%d", &n);
    printf("Introduce el primer termino: ");
    scanf("%lf", &primer_termino);
    printf("Introduce la razon: ");
    scanf("%lf", &razon);

    // Calcular el producto de los primeros n términos usando un ciclo while
    printf("Serie geometrica: ");
    while (i < n) {
        double termino = primer_termino;
        int j = 0;
        while (j < i) {
            termino *= razon;
            j++;
        }
        printf("%.2lf ", termino);
        producto *= termino;
        i++;
    }

    // Mostrar el resultado del producto
    printf("\nEl producto de los primeros %d terminos es: %.2lf\n", n, producto);

    return 0;
}
