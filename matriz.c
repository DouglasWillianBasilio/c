//Inicialize um vetor bidimensional (matriz – M[3][3]) de inteiros com 0 na diagonal principal e nas demais posições com 1. Mostre-a no formato tabular.

#include <stdio.h>
int main(){
    int m[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (i == j){
                m[i][j] = 0;
            }
            else{
                m[i][j] = 1;
            }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }
}