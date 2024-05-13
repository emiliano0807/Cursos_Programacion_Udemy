//Directivas de preprocesador y variables globales y locales
#include <stdio.h> //Directiva de preprocesador o libreria estandar de entrada y salida
#define PI 3.1416 //Macro o constante simbolica
int x = 5; //Variable global
int main(){
    int y=10; //Variable local
    float suma =0;
    suma = PI + x;
    printf("La suma es: %.4f\n", suma);

    return 0;
}