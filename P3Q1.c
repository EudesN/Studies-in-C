# include <stdio.h>

int main(){
    int M[50][12], faltasMes[12] = {0}, faltasAluno[50] = {0};

    for(int l = 0; l < 50; l++){
        for(int c = 0; c < 12; c++){
            printf("Informe o número de faltas do aluno %d: ", l + 1);
            scanf("%d", &M[l][c]);
        }
    }
    // total de faltas em cada mês
    for(int c = 0; c < 12; c++){
        for(int l = 0; l < 50; l++){
            faltasMes[c] += M[l][c];
        }
    }

    printf("\nFaltas em cada mes:\n");
    for(int c = 0; c < 12; c++){
            printf("Mes %d: %d faltas\n", c + 1, faltasMes[c]);
    }

    // total de faltas de cada aluno
    for(int l = 0; l < 50; l++){
        for(int c = 0; c < 12; c++){
            faltasAluno[l] += M[l][c];
        }
    }

    printf("\nFaltas por aluno:\n");
    for(int l = 0; l < 50; l++){
            printf("Aluno %d: %d faltas\n", l + 1, faltasAluno[l]);
    }

    // qual ou quais alunos tiveram o maior número de faltas
    printf("Aluno(s) com maior numero de faltas:\n");
    int maior = 0;
    for(int i = 0; i < 50; i++){
        if(faltasAluno[i] > maior){
            maior = faltasAluno[i];
        }
    }
    
    for(int i = 0; i < 50; i++){
        if(faltasAluno[i] == maior){
            printf("Aluno %d\n", i + 1);
        }
    }
    return 0;
}