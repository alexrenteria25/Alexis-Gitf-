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

    // Calcular la suma de los primeros n terminos usando un ciclo for
    printf("Serie aritmetica: ");
    for (int i = 0; i < n; i++) {
        int termino = primer_termino + i * diferencia;
        printf("%d ", termino);
        suma += termino;
    }

    // Mostramos el resultado de la suma
    printf("\nLa suma de los primeros %d terminos es: %d\n", n, suma);

    return 0;
}
