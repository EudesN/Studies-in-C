# include <stdio.h>
#include <string.h>

int main(){
    char palavra1[31], palavra2[31];
    int iguais = 0;
    printf("Informe a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Informe a segunda palavra: ");
    scanf("%s", palavra2);
    int len1 = (strlen(palavra1));
    int len2 = (strlen(palavra2));
    printf("tamanho da palavra 1 %d\n", len1);
    printf("tamanho da palavra 2 %d\n", len2);
    
    for(int i = 0; palavra1[i] != '\0' ; i++){
        for(int j = 0; palavra2[j] != '\0'; j++){
            if(palavra1[i] == palavra2[j]){
                printf("%c\n", palavra1[i]);
                iguais++;
            }
            else{
                break;
            }
        }
    }
    printf("O numero de letras iguais e %d\n", iguais);
    if(iguais == len2){
        printf("Palavra 2 encontrada em 1");
    }
    else{
        printf("palavra 2 nao encontrada");
    }
    return 0;
}