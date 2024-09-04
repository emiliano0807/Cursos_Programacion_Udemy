/*Postincremento y preincremento*/
#include <stdio.h>
int main(){
    int a = 0;
    int b = ++a;
    printf("El valor de a es %d\n",a);
    printf("El valor de b es %d\n",b);
    printf("\n\n");

    int c = 0;
    int d = c++;
    printf("El valor de c es %d\n",c);
    printf("El valor de d es %d\n",d);
    return 0;
}