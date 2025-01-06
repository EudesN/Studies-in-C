#include <stdio.h>
    struct aluno{
        int matricula;
        float notaP1;
        float notaP2;
    };
    struct aluno tAluno;

void insereDados(){
    printf("Informe o a matricula: ");
    scanf("%d", tAluno.matricula);

    printf("Informe a primeira nota: ");
    scanf("%f", tAluno.notaP1);

    printf("Informe a segunda nota: ");
    scanf("%f", tAluno.notaP2);
}

void calculaNota(){
    float precisaNota = 21 - (tAluno.notaP1 + tAluno.notaP2);
    return precisaNota;
}

int main(){
    
    return 0;
}