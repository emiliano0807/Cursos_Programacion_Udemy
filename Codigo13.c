/*Sentencia if - else sobre la califiacion de un alumno*/
#include <stdio.h>

int main(){
    float calificacion;
    printf("Digita la calificacion: \n");
    scanf("%f",&calificacion);
    if(calificacion>=6){
        printf("Felicidades aprobaste con %f\n",calificacion);
    }else{
        printf("Suerte para la proxima dijera marinela, tu calificacion es: %f\n",calificacion);
    }
    return 0;
}