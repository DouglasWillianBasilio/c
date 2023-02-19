#include <stdio.h>
int main() {
    int v[5] = {10, 20, 30, 40, 50}; // Valor dos 5 vetores!
    int i;
    float s = 0;

    for (i=0; i<5; i++){ //usando o for para andar e somar os vetores!
        s+= v[i]; // S inicia com 0 e soma com o lugar onde esta o incice [i], no caso a primeira repetição seria s=0 + [i] na posiçao 0 que é = 10 ou seja S vai passar a valer 10 e assim por diante ate chegar na possição 5 de [i]
    }
    printf("Resultado: %.2f \n", s/5);
}