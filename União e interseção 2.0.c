# include <stdio.h>

int main(){
    int X[100], Y[100], U[200];
    int inter[100], exinter[100];

    for(int i = 0; i < 100; i++){
        scanf("%d", &X[i]);
        U[i] = X[i]; // copiando elementos de X para U na mesma posição de 0 a 99
    }
    for(int i = 0;i < 100; i++){
        int exuni = 0;
        scanf("%d", &Y[i]);
        for(int j = 0; j < 100; i++){
            if(Y[i] == U[j]){ // verifica se Y[i] já existe no vetor U
            exuni = 1;
            break;
            }
        }
        if( exuni == 0){
            U[100 + i] = Y[i]; // copiando elementos de Y para U na posição 100 a 199
        }
    }

    printf("Uniao: ");
    for(int i = 0;i < 200; i++){
        printf("%d ", U[i]);
    }
    printf("\n");
    printf("Intersecao: ");
    int encontro = 0; // var que verifica se interseção existe
    for(int i = 0;i < 100; i++){
        for(int j = 0;j < 100; j++){
            if(X[i] == Y[j]){ // compara cada elemento do vetor X com cada elemento do Y
            exinter[i] = X[i];
            if(i == 0 || exinter == Y[j])
            printf("%d ", X[i]);
            encontro = 1; 
            break;
            } 
        }
    }
    if(encontro == 0){
        printf("Nenhuma intersecao encontrada");
    }
    printf("\n");
    return 0;
}