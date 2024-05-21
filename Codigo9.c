/*Ejercicio 1 Apuntadores*/

#include <stdio.h>

int main(){
    int a = 19;
    int b = 20;

    //Declaramos un apuntadore a la referencia de las variables

    int *apuntadorA = &a;
    int *apuntadorb = &b;

    printf("El valor de a es: %d\n",a);
    printf("La ubicacion en memoria del apuntador es: %p\n", apuntadorA);
    printf("%d\n", *apuntadorA);//ES LO MISMO QUE EL DE ABAJO
    printf("%d\n", a);//ES DECIR ESTE

    //!CAMBIAMOS EL VALOR DEL APUNTADOR
    *apuntadorA = 123;

    //?Aqui se notara que cambio el valor de la variable a la que apuntaba
    printf("%d",a);
    return 0;



}