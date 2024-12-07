# include <stdio.h>
int main(){
    int num, numa, cont = 0, soma = 0;
    scanf("%d", &num);
    cont++;
    soma += num;
    numa = num;
    do{
        scanf("%d", &num);
        cont ++;
        soma += num;
        if(num == 2 * numa || num == numa / 2){
            break;
        }
        numa = num;
    }
    while(1);
    printf("A quantidade de números lidos e %d", cont);
    printf("A soma dos numeros lidos e %d", soma);
    printf("Os valores de parada são %d e %d", num, numa);
    return 0;
}
