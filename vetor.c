//vetores

#include <stdio.h>

int main(){
    int i, v[10], soma = 0;
    float media;

    for(i=0;i<10;i++){
        printf("Digite os numeros: \n");
        scanf("%d",&v[i]);
        soma += v[i];
        media = soma / 10;
    }

    printf("media: %.2f", media);
}