#include <stdio.h>
int main(){
    int i;
    for(i=1; i <=10; i++){
        printf("Digite um Numero: \n");
        scanf ("%d", &i);
        
        if ( i==2){
            printf("Voce Digitou 2 o programa parou! ");
            break;
        }
    }
}