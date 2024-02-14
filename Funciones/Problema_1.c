#include <stdio.h>

void main(void) {
    int A, i;

    for (i = 0; i < 4; i++) {
        int A;  // Aquí se está declarando una nueva variable A en cada iteración del bucle
        A++;    // Incremento de la variable local A
        printf("\nA del bloque es %d", A);
    }
    /* Cada variable local A se crea y destruye en el ámbito de su propia iteración del bucle, 
    por lo que no comparten la misma dirección de memoria*/

    printf("\n %d", A);  // Aquí se está haciendo referencia a la variable A declarada fuera del bucle
}
