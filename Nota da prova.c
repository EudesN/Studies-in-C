#include <stdio.h>

int main(){
    float nota, media = 0, maior, menor, media7 = 0;
    int cont = 0, cont4 = 0;
    char resp;
    do{
        scanf(" %c", &resp);
        if(resp == 'n'){
            break;
        }
        scanf("%f", &nota);
        media += nota;
        cont ++;
        if(nota >= 9){
            printf("Exelente!");
        }
        else{
            printf("Estude mais!");
        }
        if(nota >= 7){
            media7 += nota;
        }
        if( cont == 1){
            maior = menor = nota;
        }
        if(nota < 4){
            cont4 ++;
        }
        if(nota > maior){
            maior = nota;
        }
        if(nota < menor)
        menor = nota;
    }
    while(resp != 'n');
    media = media / cont;
    media7 = media7 / cont;
    printf("A maior nota e %.2f\n", maior);
    printf(" A menor nota e %.2f\n", menor);
    printf("A media e %f\n", media);
    printf("O numero de notas menores que 4 sao %d\n", cont4);
    printf("A media das notas maiores que 7 sao %f", media7);
    return 0;
}