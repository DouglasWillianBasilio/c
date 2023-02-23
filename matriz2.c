//Faça um programa que leia uma matriz M[4][4] e some todos os elementos da diagonal principal.


#include <stdio.h>
main (){
    int m[4][4];
    int i,j, soma = 0;

    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o valor para a posicao: [%d] [%d] ",i ,j);
            scanf("%d", &m[i][j]);
            
        }
    }
        soma = m[0][0] + m[1][1] + m [2][2];
        printf("Soma da diagonal: %d", soma);
    
    
}