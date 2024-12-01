# include <stdio.h>
#include <string.h>

int main(){
    char palavra1[31], palavra2[31];
    int encontrado = 0;
    printf("Informe a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Informe a segunda palavra: ");
    scanf("%s", palavra2);
    int len1 = (strlen(palavra1));
    int len2 = (strlen(palavra2));
    printf("tamanho da palavra 1 %d\n", len1);
    printf("tamanho da palavra 2 %d\n", len2);
    
    for(int i = 0; palavra1[i] != '\0' ; i++){
        int j = 0;
        for(int j = 0;palavra2[j] !='\0'; j++)
        if(palavra1[i] != palavra2[j]){
            break;
        }
        else{
            encontrado++;
        }
    }
    printf("%d\n", encontrado);
    if(encontrado == len2){
        printf("encontrado\n");
    }
    else{
        printf("Nao encontrado\n");
    }

    return 0;
}