# include <stdio.h>

int main(){
    char str[20];
    printf("Digite algo(string convencional): ");
    scanf("%s", str);
    printf("%s\n", str);

    printf("Digite algo (string aprimorada): ");
    scanf("%20[^\n]", str);
    printf("Você digitou: %s\n", str);
}