/*Sentencia switch con vocales*/
int main(){
    char vocal;
    printf("Coloque una vocal en minuscula: \n");
    scanf("%c",&vocal);
    switch(vocal){
        case 'a': printf("A\n"); break;
        case 'e': printf("E\n"); break;
        case 'i': printf("I\n"); break;
        case 'o': printf("O\n"); break;
        case 'u': printf("U\n"); break;
        default: printf("No es una vocal\n");
    }
    return 0;
}