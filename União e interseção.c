# include <stdio.h>

int main(){
    int X[100], Y[100], U[200];
    int inter[100];
    for(int i = 0; i < 100; i++){
        scanf("%d", &X[i]);
        U[i] = X[i];
    }
    for(int i = 0;i < 100; i++){
        scanf("%d", &Y[i]);
        U[100 + i] = Y[i];
    }
    printf("Intersecao: ");
    int encontro = 0; // var que verifica se interseção existe
    for(int i = 0; i < 100; i++){
        for(int j = 0;j < 100; j++){
            if(X[i] == Y[j]){ // compara cada elemento do vetor X com cada elemento do Y
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