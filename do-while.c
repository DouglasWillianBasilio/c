#include <stdio.h>
int main(){
    int i;
    printf("Digite um numero: ");
    scanf("%d",&i);
    do{
        printf("%d \n",i);
        i++;
    }while(i <=10);
}
// Ele vai imprimir pelo menos uma vez qualquer número digitado pelo usuário, caso  o usuario digite um número menor ou igual a 10 ele continua até chegar a 10.