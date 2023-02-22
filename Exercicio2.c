//Faça um programa em C que leia dois números e em seguida mostre o produto, a soma e a subtração entre eles.


#include <stdio.h>
int main () {

    int num, i, soma = 0, sub = 0, num2;

    printf("Digite 1 numero: ");
        scanf("%d", &num);

    printf("Digite outro numero: ");
        scanf("%d", &num2);

    for (i=0; i<=1; i++){
        soma = num + num2;
        sub = num - num2;
    }   

    printf("Os numeros digitados foram: %d e %d\n", num, num2);
    printf("A soma dos numeros: %d\n", soma);
    printf("A subtracao dos numeros: %d", sub);
}