// incompleto!

#include <stdio.h>
int main(){
    float sal, amt;
    printf("Digite o salario: ");
    scanf("%f", &sal);


    if(sal <= 1300.00){
        amt = sal / 2;
        printf("Seu aumento e de: %.2f", amt);
    }
    else{
        
    }

    if(sal <=1500.00){
        amt = sal / 2.5;
        printf("Aumento de: %.2f", amt);
    }
    else{

    }

    if(sal <=1700.00){
        amt = sal /3;
        printf("Aumento de: %.2f", amt);
    }
    else{

    }
    if(sal <=1800.00){
        amt = sal /3.5;
        printf("Aumento de: %.2f", amt);
    }
    else{

    }
    if(sal <=2000.00){
        amt = sal /4;
        printf("Aumento de: %.2f", amt);
    }
    else{

    }

    if(sal > 2000.00){
        amt = sal /4.5;
        printf("Aumento de: %.2f", amt);
    }
    else{

    }
    
}