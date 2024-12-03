# include <stdio.h>

int main(){
    int M,N;
    
    scanf("%d", &M);
    scanf("%d", &N);

    int matriz[M][N];
    int c_pivo[M]; // vetor que guarda os pivos de cada linha 

    for(int i = 0; i < M;i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]); // preenche a matriz 
        }
    }

    for(int i = 0; i < M;i++){
        for(int j = 0; j < N; j++){
            if(matriz[i][j] != 0){ // procura o primeiro elemento da matriz diferente de 0
                c_pivo[i] = j; // quardar o indice da coluna do pivo
                break;
            }
        }
    }
    for(int i = 0; i < M;i++){
        for(int j = 0; j < N; i++){
            
        }
    }
    return 0;
}