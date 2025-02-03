#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    file = fopen("C:\\Progamacao\\C\\Manipulacao de Arquivos txt\\string.txt", "a");

    if(file == NULL){
        printf("Error\n");
        exit(1);
    }
    fprintf(file,"Primeira linha\n");
    
    char frase[] = "Segunda linha";
    fputs(frase, file);

    fclose(file);

    return 0;
}