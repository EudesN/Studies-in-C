#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, z;
    FILE *file;
    file = fopen("numero.txt", "r");

    fscanf(file, "%i %i %i", &x, &y, &z);
    printf("%i %i %i", x, y, z);
    
    fclose(file);
    return 0;
}