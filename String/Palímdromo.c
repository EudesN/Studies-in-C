# include <stdio.h>

int main(){
    char str[31];
    int len, cont = 0;

    scanf("%30s", str);
    for(len = 0; str[len] != '\0';len++);

    for(int i = 0; i < len; i++){
        for(int j = len; j > 0; j++){
            if(str[i] == str[j]){
                cont++;
                if(cont == len){
                    printf("É um palíndromo!");
                    return 0;
                }
            }
        }
    }
    printf("Não é um palíndromo!");
    return 0;
}