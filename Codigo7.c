/*Aumentar el salario al 10%*/

#include <stdio.h>
int main(){{
    char nombre[20];
    float salario, aumento;
    printf("Escribe tu nombre: ");
    scanf("%s", nombre);
    printf("Su nombre es: %s\n", nombre);
    printf("Escribe tu salario: ");
    scanf("%f", &salario);
    aumento = salario * 0.10;
    salario = salario + aumento;
    printf("Felicidades %s ,tu salario con aumento es: %.2f\n",nombre ,salario);

}}