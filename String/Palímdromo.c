# include <stdio.h>

int main(){
    char str[31];
    int len, cont = 0;

    scanf("%30s", str);
    for(len = 0; str[len] != '\0';len++);

    for(int i = 0; i < len / 2; i++){
        if(str[i] == str[len - i] - 1){
            if(cont == len){
                printf("É um palíndromo!");
                return 0;
                }
            }
    }
    printf("Não é um palíndromo!");
    return 0;
}