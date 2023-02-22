//Faça um programa em C que leia 4 números e mostre a sua média.

#include <stdio.h>

int main() {
    int i;
    float num, soma = 0, media;

    for(i = 1; i <= 4; i++) {
        printf("Digite o número: ");
        scanf("%f", &num);
        soma += num;
    }

    media = soma / 4;

    printf("A média dos números é: %.2f\n", soma);

    return 0;
}
