# include <stdio.h>

int main(){
    int M[50][12], faltasMes[12], faltasAluno[50];
    int cont = 0;

    for(int l = 0; l < 50; l++){
        for(int c = 0; c < 12; c++){
            printf("Informe o número de faltas do aluno %d: ", l + 1);
            scanf("%d", &M[l][c]);
        }
    }
    // total de faltas em cada mês
    
    for(int c = 0; c < 12; c++){
        for(int l = 0; l < 50; l++){
            faltasMes[c] = M[l][c];
        }
    }
    // total de faltas de cada aluno
    for(int l = 0; l < 50; l++){
        for(int c = 0; c < 12; c++){
            faltasAluno[l] = M[l][c];
        }
    }
    // qual ou quais alunos tiveram o maior número de faltas
    
    return 0;
}