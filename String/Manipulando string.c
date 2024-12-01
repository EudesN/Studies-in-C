# include <stdio.h>

int main(){
    char str[20];
    printf("Digite algo(string convencional): ");
    scanf("%s", str);
    printf("%s\n", str);
    fflush(stdin);
    for(int i = 0; i < 20; i++){
        str[i] = '\0';
    }
    printf("Digite algo (string aprimorada): ");
    scanf("%19[^\n]", str);
    printf("Você digitou: %s\n", str);
}