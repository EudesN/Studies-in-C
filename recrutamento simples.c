#include <stdio.h>
int main(){
    int num ,idade ,tot30 = 0, novo= 0;
    char exp;
    while(1){
        printf("Informe o numero do candidado: ");
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        printf("Informe a idade do candidado:");
        scanf("%d", &idade);
        do{
            printf("O candidato possui experiencia(s/n)? ");
            scanf(" %c", &exp);
        }
        while(exp != 's' && exp != 'n');
        if(idade > 30 && exp == 'n'){
            tot30 ++;
        }
        if(exp == 's'){
            if( novo == 0 || idade < novo){
            novo = idade;
            }
        }
    }
    printf("O número de candidatos com mais de 30 sem experiencia é %d\n", tot30);
    if(novo > 0){
        printf("A idade do candidato mais novo com experiencia é %d\n", novo);
    }
    else{
        printf("Nao foram encontrados canditados com experiencia");
    }
    return 0;
}