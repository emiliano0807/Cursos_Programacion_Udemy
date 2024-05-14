//Entradas y salidas en C
#include <stdio.h>
int main(){
    int a;
    float w;
    char e;//Variable de tipo caracter
    char s[20];//Arreglo de caracteres
    printf("Escribe un numero entero ");
    scanf("%d", &a);
    printf("El numero entero es: %d\n", a);
    printf("Escribe un numero flotante ");
    scanf("%f", &w);
    printf("El numero flotante es: %.2f\n", w);
    printf("Escribe un caracter ");
    scanf(" %c", &e);
    printf("El caracter es: %c\n", e);
    printf("Escribe una cadena de caracteres ");
    scanf(" %s", s);
    printf("Bienvenido %s Programaste tu primer codigo\n", s);
    return 0;
}