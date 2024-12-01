// # include <stdio.h>
// #include <string.h>

// int main(){
//     char palavra1[31], palavra2[31];
//     int encontrado = 0;
//     printf("Informe a primeira palavra: ");
//     scanf("%s", palavra1);
//     printf("Informe a segunda palavra: ");
//     scanf("%s", palavra2);
//     int len1 = (strlen(palavra1));
//     int len2 = (strlen(palavra2));
//     printf("tamanho da palavra 1 %d\n", len1);
//     printf("tamanho da palavra 2 %d\n", len2);
    
//     for(int i = 0; palavra1[i] != '\0' ; i++){
//         int j = 0;
//         for(int j = 0;palavra2[j] !='\0'; j++)
//         if(palavra2[j] != palavra1[i]){
//             break;
//         }
//         else{
//             encontrado++;
//         }
//     }
//     printf("%d\n", encontrado);
//     if(encontrado == len2){
//         printf("encontrado\n");
//     }
//     else{
//         printf("Nao encontrado\n");
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[31], palavra2[31];
    int encontrado = 0;
    
    // Entrada das palavras
    printf("Informe a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Informe a segunda palavra: ");
    scanf("%s", palavra2);
    
    int len1 = strlen(palavra1);
    int len2 = strlen(palavra2);
    
    // Imprimindo os tamanhos das palavras
    printf("Tamanho da palavra 1: %d\n", len1);
    printf("Tamanho da palavra 2: %d\n", len2);
    
    // Verificando se palavra2 está em palavra1
    for (int i = 0; i <= len1 - len2; i++) {  // Percorre palavra1 até onde palavra2 pode caber
        int j = 0;
        while (palavra2[j] != '\0' && palavra1[i + j] == palavra2[j]) {  // Comparando caractere por caractere
            j++;
        }
        if (palavra2[j] == '\0') {  // Se chegou ao fim de palavra2, encontrou a substring
            encontrado = 1;
            break;
        }
    }

    // Resultado
    if (encontrado) {
        printf("Palavra 2 encontrada dentro da Palavra 1.\n");
    } else {
        printf("Palavra 2 não encontrada dentro da Palavra 1.\n");
    }

    return 0;
}
