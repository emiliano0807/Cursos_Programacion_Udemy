/*Sentencia Switch con los dias de la semana*/
#include <stdio.h>

int main(){
    int dia;
    printf("Digite un numero del 1 al 7: \n");
    scanf("%d",&dia);
    switch(dia){
        case 1: printf("Lunes\n"); break; /*O asi se puede colocar
        /*break; es para que no siga ejecutando los demas casos, y se pude colocar asi*/
        case 2: printf("Martes\n"); break;
        case 3: printf("Miercoles\n"); break;
        case 4: printf("Jueves\n"); break;
        case 5: printf("Viernes\n"); break;
        case 6: printf("Sabado\n"); break;
        case 7: printf("Domingo\n"); break;
        default: printf("No es un dia de la semana\n");
    }
}