/*Operador ternario de C con numero pares e impares*/
#include <stdio.h>
int main(){
    int numero;
    printf("Digite un numero: \n");
    scanf("%d",&numero);
    (numero%2==0)?printf("El numero es par\n"):printf("El numero es impar\n");
    return 0;
}