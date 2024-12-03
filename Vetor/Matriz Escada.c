# include <stdio.h>

int main(){
    int M,N;
    
    scanf("%d", &M);
    scanf("%d", &N);
    int matriz[M][N];
    int c_pivo[M]; // vetor que guarda os pivos de cada linha 

    for(int i = 0; i < M;i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < M;i++){
        for(int j = 0; j < N; j++){
            if(matriz[i][j] != 0){
                c_pivo[i] = j; // quardar o indice da coluna do pivo
            }
        }
    }
    return 0;
}