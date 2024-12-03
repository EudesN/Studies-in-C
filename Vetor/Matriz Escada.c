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
        for(int j = 0; j < c_pivo[i]; i++){
            if(matriz[i][j] != 0){ // se os elementos antes(a esqueda) dos pivos forem direfente de 0 essa matriz não é escada 
                printf("N\n");
            }
        }
    }
    
    return 0;
}