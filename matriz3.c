#include <stdio.h>
main(){
    int m[3][3];
    int i,j,soma = 0,abaixomedia;
    float media;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor para a posicao: [%d] [%d]", i,j);
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }
    }
    
    media = (float) soma / 9;
    printf("a media eh: %.2f", media);

    abaixomedia = 0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (m[i][j] < media){
                abaixomedia++;
            }
        }
    }

printf("Ha %d numeros menores que a media", abaixomedia);

}