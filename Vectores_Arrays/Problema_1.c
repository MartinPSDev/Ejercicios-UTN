/*Ingrese 20 valores enteros y muéstrelos en pantalla en una linea, en el orden de ingreso, y en la linea siguiente, en orden 
inverso al de ingreso*/

#include <stdio.h>


int main(){
    int VEC[20];
    int i;
    printf ("\nIngrese 20 valores enteros:");

    for (i=0; i<20; i++){
    printf("\n vec[%d]= ", i);
    scanf("%d", &VEC[i]);
    }

    printf("\n");

    for (i=0; i<20; i++){
      printf(" %d", VEC[i]);
    }

    printf("\n\n");

    for (i=19;i>=0;i--){
        printf(" %d", VEC[i]);
    }

     
}
    
