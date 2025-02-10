#include <stdio.h>

// Função para copiar o conteúdo de file1 para file2
void CopiaConteudo(FILE *file1, FILE *file2);

int main() {
    // Abrir o primeiro arquivo para leitura
    FILE *file1 = fopen("C:\\Programming\\Studies-in-C\\Manipulacao de Arquivos txt\\Arquivo1.txt", "r");
    if (file1 == NULL) {
        printf("Erro ao abrir o Arquivo1.txt\n");
        return 1;
    }

    // Abrir o segundo arquivo para escrita
    FILE *file2 = fopen("C:\\Programming\\Studies-in-C\\Manipulacao de Arquivos txt\\Arquivo2.txt", "w");
    if (file2 == NULL) {
        printf("Erro ao abrir o Arquivo2.txt\n");
        fclose(file1);
        return 1;
    }

    // Copiar conteúdo de file1 para file2
    CopiaConteudo(file1, file2);

    // Fechar os arquivos
    fclose(file1);
    fclose(file2);

    printf("Conteúdo copiado com sucesso!\n");
    return 0;
}

// Função que copia o conteúdo de um arquivo para outro
void CopiaConteudo(FILE *file1, FILE *file2) {
    char leitor[1000];
    // Lê linha por linha de file1 e escreve em file2
    while (fgets(leitor, sizeof(leitor), file1) != NULL) {
        fputs(leitor, file2);
    }
}
