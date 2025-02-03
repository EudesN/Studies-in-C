#include <stdio.h>

int main(){
    FILE *file = fopen("C:\\Progamacao\\C\\Manipulacao de Arquivos txt\\ teste.txt", "w"); 
    // "r" = read(ler informações) ; "w" write (escrever no arquivo) ; "a" append(alterar informações)
    // existem outras variações
    // a função fopen recebe como argumentos local e nome do arquivo
    if(file == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    fprintf(file, "Exemplo de escrita em um arquivo usando C\n");
    fclose(file); // fecha o arquivo
    
    printf("Arquivo criado com sucesso\n");
    return 0;
}