//Tipos de datos en C
#include <stdio.h>
#include <stdbool.h> //Libreria para el manejo de variables booleanas
int main(){
    int a = 1;
    char b = 'Z';
    float c = 1.5;
    double d = 1.555555;
    short e = 2;
    long f = 12.3;
    long double g = 123456789;
    unsigned int h = 123; //Variable sin signo
    printf("El valor de int es: %d\n", a); //%d es el formato para enteros al igual que %i
    printf("El valor de char es: %c\n", b);
    printf("El valor de float es: %.2f\n", c);
    printf("El valor de double es: %.6f\n", d);
    printf("El valor de short es: %d\n", e);
    printf("El valor de long es: %ld\n", f);
    printf("El valor de long double es: %.0Lf\n", g);
    printf("El valor de unsigned int es: %u\n", h);// %u es el formato para enteros sin signo al igual que %i

}