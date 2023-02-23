#include <stdio.h>
int main(){
    int v[10];
    int i, n, soma = 0, abaixo;
    float media;

    for(i=0;i<10;i++){
        printf("Digite os valores: ");
        scanf("%d", &n);
        soma += n;
    }
    printf("a soma: %d \n", soma);
    media = (float) soma / 10;
    printf("a media:%.2f \n", media);

    abaixo = 0;
    for(i=0;i<10;i++){
        if(n < media){
            abaixo++;
        }
    }
    printf("numeros abaixo da media: %d \n", abaixo);
    
}