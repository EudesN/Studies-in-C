# include <stdio.h>

int main(){
    int M, N, val = 0, cont = 0;
    
    scanf("%d %d", &M, &N);
    int matriz[M][N];

    for(int i =0; i < M; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i =0; i < M; i++){
        val = 1; // cada linha percorrida já inicia como válida
        for(int j = 0; j < N; j++){
            if(matriz[i][j] == 0){
                val = 0; // se encontrar algum 0 na linha a var 'val' muda para false
                break; // break para pular para proxima linha
            }
        }
        if(val == 1){
            cont++; // se ao passar pela linha mantiver true(todos os valores forem maior q 0) então adiciona o número de jogadores
        }
    }
    printf("%d\n", cont);
    return 0;
}