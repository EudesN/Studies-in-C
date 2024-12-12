# include <stdio.h>

int main(){
    struct horario // definição de uma estrutura
    {
        int horas;
        int min;
        int seg;
        char teste;
    };

    struct horario agora; // declaração de uma estrutura do tipo 'horário' chamada 'agora'
    // iniciação dos membros das var da estrutura
    agora.horas = 15;
    agora.min = 17;
    agora.seg = 30;
    agora.teste = 'c';

    printf("%i:%i:%i e char %i ", agora.horas, agora.min, agora.seg, agora.teste);
    return 0;
}