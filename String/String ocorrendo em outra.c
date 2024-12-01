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
    for(int i = 0;i < len1; i++){
        for(int j = 0;j < len2; j++)
        if(palavra1[i] == palavra2[j]){
            encontrado++;
        }
        else{
            break;
        }
    }
    printf("%d", encontrado);
    if(encontrado == len1){
        printf("encontrado");
    }
    else{
        printf("Nao encontrado");
    }

    return 0;
}