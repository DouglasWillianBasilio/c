//Faça um programa que leia um vetor de 10 valores inteiros e escreva-os na ordem inversa a que foram lidos.


#include <stdio.h>
int main(){
    int num, i, v[10];
    for (i=0; i<10; i++){
        printf("Digite os numeros: \n");
        scanf("%d",&v[i]);
    }
    printf("Numeros invertidos: \n");
    for(i=10; i>0; i--){
        printf("%d", v[i]);
    }
    

}