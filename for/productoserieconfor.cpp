#include <stdio.h>

int main() {
    int n;
    double primer_termino, razon, producto = 1.0;
    
    // Solicitar al usuario que introduzca el número de términos, el primer término y la razón
    printf("Introduce el numero de terminos: ");
    scanf("%d", &n);
    printf("Introduce el primer termino: ");
    scanf("%lf", &primer_termino);
    printf("Introduce la razon: ");
    scanf("%lf", &razon);

    // Calcular el producto de los primeros n términos usando un ciclo for
    printf("Serie geometrica: ");
    for (int i = 0; i < n; i++) {
        double termino = primer_termino;
        for (int j = 0; j < i; j++) {
            termino *= razon;
        }
        printf("%.2lf ", termino);
        producto *= termino;
    }

    // Mostrar el resultado del producto
    printf("\nEl producto de los primeros %d terminos es: %.2lf\n", n, producto);

    return 0;
}
