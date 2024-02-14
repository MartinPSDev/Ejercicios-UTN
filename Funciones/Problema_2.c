#include <stdio.h>
main ()
{
 int A;
 A = 1857;
 funcion (A);
 printf ("\nMain   %d", A);
 getch();

}

funcion ( char A){
    printf ("\nFuncion %d", A);
}
// error de compilacion, la funcion declarada recibe un char como parametro y se le está pasando un entero