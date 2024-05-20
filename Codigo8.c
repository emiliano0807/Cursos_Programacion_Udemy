/*Ejemplo apuntadores*/

#include <stdio.h>
int main(){
    int numero = 50;
    int *pnumero;
    printf("Dato: %i\n", numero);//DATO
    printf("Direccion de memoria: %p\n", &numero);//DIRECCION DE MEMORIA

    pnumero = &numero;
    printf("Valor de la variable:\n");
    printf("Dato: %i\n", numero);
    printf("Dato: %i\n\n", *pnumero);

    printf("Posision\n");
    printf("Direccion de memoria: %p\n", &numero);
    printf("Direccion de memoria: %p\n", pnumero);
    return 0;
}