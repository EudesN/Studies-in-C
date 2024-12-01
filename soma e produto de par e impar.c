# include <stdio.h>
int main(){
    int n, soma = 0, prod = 1, i = 0;
    while(i < 100){
        scanf("%d", &n);
        if(n % 2 == 0){
            soma += n;
        }
        else{
            prod *= n;
        }
        i ++;
    }
    printf("A soma dos pares e %d", soma);
    printf("O produto dos impares e %d", prod);
    return 0;
}