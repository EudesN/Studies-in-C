#include <stdio.h>

int main(){
    float n, maior, menor, amp;
    int cont = 0;
    do{
        scanf("%f", &n);
        if(cont == 1){
            maior = menor = n;
        }
        if(n < 0){
            break;
        }
        cont ++;
        if(n > maior){
            maior = n;
        }
        if(n < menor){
            menor = n;
        }
    }
    while(n > 0);
    amp = maior - menor;
    printf("A amplitude e %.1f", amp);
    return 0;
}