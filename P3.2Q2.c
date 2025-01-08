#include <stdio.h>
#define l 400
#define c 300

int funcaoMatriz(int M[l][c]);

int main(){
    int M[l][c];
    int menor = 0;

    printf("Digite os valores da matriz %dx%d:\n", l, c);
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &M[i][j]);
        }
    }
    menor = funcaoMatriz(M);
    printf("Menor elemento: %d\n", menor);
    return 0;
}

int funcaoMatriz(int M[l][c]){
    int soma = 0;
    int menor = M[0][0]; // Inicializa menor com o primeiro elemento da matriz

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(M[i][j] < menor){
                menor = M[i][j];
            }
        }
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(M[i][j] == menor){
                for(int k = 0; k < c; k++){
                    soma += M[i][k];
                }
            }
        }
    }
    printf("A soma de todas as linhas com menor valor e: %d\n", soma);
    return menor;
}