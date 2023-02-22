//Faça um programa em C para determinar o maior de 3 números lidos.

#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: \n");
    scanf("%d", &num3);

    if (num1 > num2 && num1 >num3 ){
        printf("O maior numero digitado e: %d", num1);
    }

    if (num2 > num1 && num2 >num3 ){
        printf("O maior numero digitado e: %d", num2);
    }

    if(num3 > num2 && num3 > num1 ){
        printf("O maior numero digitado e: %d", num3);
    }
    
}