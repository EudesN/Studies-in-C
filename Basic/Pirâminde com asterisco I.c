# include <stdio.h>

int main(){
    int linhas;
    printf("Informe o número de linhas da piramide: ");
    scanf("%d", &linhas);
    for(int i = 1; i <= linhas; i++){ // contador serve de base para impressão da pirâmide
        for(int j = 1; j <= linhas - i; j++){ // contador irá imprimir espaços em branco antes e depois do asterisco
            printf(" ");
        }
        for(int k = 1; k <= 2 * i - 1; k++){ // contador imprime o asterisco, sempre adicionando mais dois asterisco antes e depois na linha abaixo
            printf("*");
        }
        printf("\n");
    }
    return 0;
}