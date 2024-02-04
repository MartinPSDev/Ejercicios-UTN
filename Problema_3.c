/*Se desea realizar un programa que utilice una función que calcule y retorne el valor de X elevado a la Y (x^y),
siendo X e Y enteros no negativos, y por lo tanto su resultado será un entero. Debido al rápido crecimiento de este
valor será necesario retornar el valor de un unsigned long int.*/
#include <stdio.h>

unsigned long int Potencia(int x, int y) {
    unsigned long int resultado = 1;

    for (int i = 0; i < y; i++) {
        resultado *= x;
    }
    return resultado;
}


int main() {
    int x, y;

    printf("\n Ingrese el valor de X (base):\t");
    scanf("%d", &x);
    printf("\n\n Ingrese el valor de Y (exponente):\t");
    scanf("%d", &y);

    printf("\n El resultado de %d elevado a la %d es: %lu\n", x, y, Potencia (x,y)); /* llamamos a la funcion Potencia
    directamente dentro de la funcion printf*/

    return 0;
}

