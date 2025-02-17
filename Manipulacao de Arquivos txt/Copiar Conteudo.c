#include <stdio.h>

int main(){
    void CopiaConteudo(FILE *file1, FILE *file2);
    FILE *file1 = fopen("C:\\Programming\\Studies-in-C\\Manipulacao de Arquivos txt\\Arquivo1.txt", "r");
    if (file1 == NULL){
        printf("Erro ao abrir o arquivo 1\n");
        return 1;
    }

    FILE *file2 = fopen("C:\\Programming\\Studies-in-C\\Manipulacao de Arquivos txt\\Arquivo2.txt", "w");
    if(file2 == NULL){
        printf("Erro ao abrir o arquivo 2\n");
        return 1;
    }

    CopiaConteudo(file1, file2);

    fclose(file1);
    fclose(file2);
    return 0;
}
void CopiaConteudo(FILE *file1, FILE *file2){
    char leitor[1000];
    while(fgets(leitor, sizeof(leitor), file1)){
        fputs(leitor, file2);
    }
}