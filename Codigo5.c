/*Ejercicios de operaciones aritmeticas*/
#include <stdio.h>

int main(){
    float num1, num2, suma, resta, mult, div;
    
    printf("Escribe 2 numeros: ");
    scanf("%f %f", &num1, &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("La suma es: %.2f\n", suma);
    printf("La resta es: %.2f\n", resta);
    printf("La multiplicacion es: %.2f\n", mult);
    printf("La division es: %.2f\n", div);
    printf("Gracias por usar el programa\n");
    return 0;
}