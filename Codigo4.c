//Operadores de asignacion en C
#include <stdio.h>
int main(){
    int a, b, c; //Declaracion de variables
    a = b = c = 10; //Asignacion de valor de las variables 
    a += 3;
    printf ("El valor de la variable a es: %d\n", a);
    
    /*a += 3 es lo mismo que a= a+3;
    a -= es lo mismo que a = a-3
    a *= es lo mismo que a = a*3
    a /= es lo mismo que a = a/3
    a %= es lo mismo que a = a%3
    */
}