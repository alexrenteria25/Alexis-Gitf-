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

    // Calcular el producto de los primeros n términos usando un ciclo do-while
    printf("Serie geometrica: ");
    do {
        double termino = primer_termino;
        int j = 0;
        do {
            termino *= razon;
            j++;
        } while (j < i);
        printf("%.2lf ", termino);
        producto *= termino;
        i++;
    } while (i < n);

    // Mostrar el resultado del producto
    printf("\nEl producto de los primeros %d terminos es: %.2lf\n", n, producto);

    return 0;
}
