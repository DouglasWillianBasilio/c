//Faça um programa em C que leia 3 números e os escreva em ordem decrescente.

#include <stdio.h>
int main(){
    int num1, num2, num3;

    printf("Digite o 1 numero: \n");
    scanf("%d", &num1);

    printf("Digite o 2 numero: \n");
    scanf("%d", &num2);

    printf("Digite o 3 numero: \n");
    scanf("%d", &num3);

    if (num1 >num2 && num1 > num3){
        if (num2>num3){
            printf("Ordem decrescente: %d %d %d \n", num1, num2, num3);
        }
        else{
            printf("A ordem decrescente: %d %d %d ",num1, num3,num2);
        }
    }
    

    if(num2 > num3 && num2 > num1) {
        if(num3>num1){
            printf("Ordem decrescente: %d %d %d \n", num2, num3, num1);
        }
        else{
            printf("Ordem decrescente: %d %d %d", num2, num1, num3);
        }
    }

    if (num3 >num2 && num3 > num1){
        if(num1>num2){
            printf("Ordem decrescente: %d %d %d \n", num3, num1, num2);
        }
        else{
            printf("Ordem decrescente: %d %d %d", num3, num2,num1);
        }
    }
    
   

}


