# include <stdio.h>
int main(){
    float renda, imposto;
    scanf("%f", &renda);
    if(renda <= 2000){
        printf("Isento\n");
    }
    else if(renda <= 3000){
        imposto = (renda - 2000) * (8.0/100);
        printf("R$ %.2f\n", imposto);
    }
    else if(renda <= 4500){
        imposto = (1000 * 0.08) + ((renda - 3000) * (18.0/100));
        printf("R$ %.2f\n", imposto);
    }
    else{
        imposto = (1000 * 0.08) + (1500 * 0.18) + ((renda - 4500) * 0.28);
        printf("R$ %.2f\n", imposto);
    }
}