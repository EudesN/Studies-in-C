# include <stdio.h>

int main(){
    char str[21];
    printf("Digite algo(string convencional): ");
    scanf("%s", str);
    printf("%s\n", str);

    while(getchar() != '\n'); // limpa o buffer 

    for(int i = 0; i < 20; i++){ // limpa o vetor manualmente
        str[i] = '\0';
    }
    printf("Digite algo (string aprimorada): ");
    scanf("%20s", str); // limita a leitura até 20 caracteres
    printf("Voce digitou: %s\n", str);
}