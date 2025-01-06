#include <stdio.h>
    struct aluno{
        int matricula;
        float notaP1;
        float notaP2;
    };

void insereDados(struct aluno *tAluno){
    printf("Informe o a matricula: ");
    scanf("%d", &tAluno -> matricula);

    printf("Informe a primeira nota: ");
    scanf("%f", &tAluno -> notaP1);

    printf("Informe a segunda nota: ");
    scanf("%f", &tAluno -> notaP2);
}

float calculaNota(struct aluno tAluno){
    float precisaNota = 21 - (tAluno.notaP1 + tAluno.notaP2);
    return precisaNota;
}

int main(){
    struct aluno tAluno;

    insereDados(&tAluno);

    float nota3 = calculaNota(tAluno);

    if(nota3 <= 10){
        printf("Para passar precisa tirar ao menos: %.1f\n", nota3);
    }
    else{
        printf("Tente a prova final, se possivel\n");
    }
    return 0;
}