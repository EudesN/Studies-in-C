#include <stdio.h>
    typedef struct aluno{ // typedef é utilizado para criar um apelido pro tipo de dados - tAluno que é equivalente à estrutura struct aluno
        int matricula;
        float notaP1;
        float notaP2;
    }tAluno;

void insereDados(tAluno *aluno){
    printf("Informe o a matricula: ");
    scanf("%d", &aluno -> matricula);

    printf("Informe a primeira nota: ");
    scanf("%f", &aluno -> notaP1);

    printf("Informe a segunda nota: ");
    scanf("%f", &aluno -> notaP2);
}

float calculaNota(tAluno aluno){
    float precisaNota = 21 - (aluno.notaP1 + aluno.notaP2);
    return precisaNota;
}

int main(){
    tAluno aluno; // declaração da var aluno do tipo tAluno - mesma coisa q 'struct aluno aluno'
    
    insereDados(&aluno); // passa o endereço de memoria da var aluno permitindo modificar diretamente os campos aluno

    float nota3 = calculaNota(aluno); // passa uma cópia de da struct aluno 

    if(nota3 <= 10){
        printf("Para passar precisa tirar ao menos: %.1f\n", nota3);
    }
    else{
        printf("Tente a prova final, se possivel\n");
    }
    return 0;
}