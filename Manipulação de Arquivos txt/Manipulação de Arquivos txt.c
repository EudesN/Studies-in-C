#include <stdio.h>

int main(){
    FILE *file = fopen("C:\\Progamação\\C\\Manipulação de Arquivos txt\\teste.txt", "w"); 
    // "r" = read(ler informações) ; "w" write (escrever no arquivo) ; "a" append(alterar informações)
    // existem outras variações
    // a função fopen recebe como argumentos local e nome do arquivo
    return 0;
}