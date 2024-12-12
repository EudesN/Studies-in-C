#include <stdio.h>

void funPrint(int X[3][3]){ // no mínimo a segunda parte da matriz é necessário informar, caso contrario gera erro
    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3;j++){
            printf(" %d ", X[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    funPrint(matriz);
    return 0;
}