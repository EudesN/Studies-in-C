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
            c_pivo[i] = -1; // iniciada com menos 1 para caso a linha saja toda composta por zeros(inica q tá sem pivô)
            if(matriz[i][j] != 0){ // procura o primeiro elemento da matriz diferente de 0
                c_pivo[i] = j; // quardar o indice da coluna do pivo
                break;
            }
        }
    }
    // verificar se não há elementos diferente de 0 abaixo dos pivos
    for(int i = 0; i < M; i++){
        for(int j = 0; j < c_pivo; i++){
            if(matriz[i][c_pivo[j] + 1] != 0){
                printf("N\n");
                return 0;
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
    int soma = 0; // inica a var soma para soma as linhas, se permanecer 0 a linha so possui elementos 0
    for(int i = 0; i < M;i++){
        for(int j =0; j < N;j++){
            soma += matriz[i][j];
            if(soma != 0){
                printf("N\n");
                return 0;
            }
        }
    }

    printf("S\n");
    return 0;
}