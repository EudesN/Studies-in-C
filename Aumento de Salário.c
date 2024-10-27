#include <stdio.h>

int main(){
    float salario, reajuste;
    scanf("%f", &salario);
    if(salario > 0 && salario <= 400){
        reajuste = salario * (15.0/100.0);
        salario = salario + reajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %%\n");
    }
    else if(salario > 400 && salario <= 800){
        reajuste = salario * (12.0/100.0);
        salario = salario + reajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %%\n");
    }
    else if(salario > 800 && salario <= 1200){
        reajuste = salario * (10.0/100.0);
        salario = salario + reajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %%\n");
    }
    else if(salario > 1200 && salario <= 2000){
        reajuste = salario * (7.0/100.0);
        salario = salario + reajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %%\n");
    }
    else{
        reajuste = salario * (4.0/100.0);
        salario = salario + reajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}