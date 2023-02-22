//Faça um programa em C que leia um número inteiro, verifique se é positivo ou negativo e escreva uma mensagem apropriada.

#include <stdio.h>

int main(){
    int num, pos = 0;
    printf("Digite o numero: ");
    scanf("%d", &num);

    if(num > pos){
        printf("numero positivo");
    }
    else {
        printf("numero negativo");
    }
}
