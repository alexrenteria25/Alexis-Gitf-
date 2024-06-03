#include <stdio.h>

int main() {
    int n, primer_termino, diferencia, suma = 0;
    
    // Solicitar al usuario que introduzca el número de términos, el primer término y la diferencia
    printf("Introduce el numero de terminos: ");
    scanf("%d", &n);
    printf("Introduce el primer termino: ");
    scanf("%d", &primer_termino);
    printf("Introduce la diferencia: ");
    scanf("%d", &diferencia);

    // Calcular la suma de los primeros n términos usando un ciclo do-while
    printf("Serie aritmetica: ");
    int i = 0;
    do {
        int termino = primer_termino + i * diferencia;
        printf("%d ", termino);
        suma += termino;
        i++;
    } while (i < n);

    // Mostramos el resultado de la suma
    printf("\nLa suma de los primeros %d terminos es: %d\n", n, suma);

    return 0;
}
