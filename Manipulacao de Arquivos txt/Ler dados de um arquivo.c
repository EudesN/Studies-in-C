#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, z;
    FILE *file;
    FILE *sFile;
    file = fopen("C:\\Progamacao\\C\\Manipulacao de Arquivos txt\\numero.txt", "r");

    if(file == NULL){
        printf("Arquivo 'numero.txt nao foi encontrado.\n");
        return 1;
    }
    fscanf(file, "%i %i %i", &x, &y, &z);
    printf("%i %i %i\n", x, y, z);
    fclose(file);
    
    sFile = fopen("C:\\Progamacao\\C\\Manipulacao de Arquivos txt\\string.txt", "r");
    if(sFile == NULL){
        printf("Arquivo 'string.txt' nao foi encontrado.\n");
        exit(0);
    }

    char frase[300];
    while(fgets(frase, 300, sFile) != NULL){
        printf("%s", frase);
    }
    fclose(sFile);
    return 0;
}