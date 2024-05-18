/*Codigo que calcula el area de un triangulo y un cuadrado*/
#include <stdio.h>
#include <math.h>

int main(){
    float base, altura, areaT, lado, areaC;
    printf("Inserta el la base y la altura ");
    scanf("%f %f", &base, &altura);
    areaT=(base*altura)/2;
    printf("El area del triangulo es: %.2f\n", areaT);
    
    printf("Inserta el valor del lado ");
    scanf("%f",&lado);
    areaC = lado*lado;
    //areaC=pow(lado,2);
    printf("El area del cuadrado es: %.2f", areaC);
    return 0;
}