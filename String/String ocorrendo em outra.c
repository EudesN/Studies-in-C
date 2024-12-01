#include <stdio.h>

int main() {
    char palavra1[31], palavra2[31];
    int len1, len2, iguais = 0;

    // Entrada das palavras
    printf("Informe a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Informe a segunda palavra: ");
    scanf("%s", palavra2);

    // Calcula os tamanhos manualmente
    for (len1 = 0; palavra1[len1] != '\0'; len1++);
    for (len2 = 0; palavra2[len2] != '\0'; len2++);

    printf("Tamanho da palavra 1: %d\n", len1);
    printf("Tamanho da palavra 2: %d\n", len2);

    // Verifica se palavra2 está contida em palavra1
    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (palavra1[i + j] != palavra2[j]) {
                break; // Sai do laço interno ao encontrar diferença
            }
        }
        if (j == len2) { // Verifica se percorreu todo o comprimento de palavra2
            iguais = len2;
            break;
        }
    }

    // Resultado
    if (iguais == len2) {
        printf("Palavra 2 encontrada em 1\n");
    } else {
        printf("Palavra 2 nao encontrada\n");
    }

    return 0;
}
