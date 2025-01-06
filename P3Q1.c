# include <stdio.h>

int main(){
    int M[50][12];
    int cont = 0;

    for(int l = 0; l < 50; l++){
        for(int c = 0; c < 12; c++){
            printf("Informe o número de faltas do aluno %d: ");
            scanf("%d", &M[l][c]);
        }
    }
    return 0;
}