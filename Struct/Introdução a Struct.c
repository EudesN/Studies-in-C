# include <stdio.h>

int main(){
    struct horario
    {
        int horas;
        int min;
        int seg;
        char teste;
    };

    struct horario agora; // declaração de uma estrutura do tipo 'horário' chamada 'agora'
    agora.horas = 15;
    agora.min = 17;
    agora.seg = 30;
    agora.teste = 'c';

    printf("%i:%i:%i e char %i ", agora.horas, agora.min, agora.seg, agora.teste);
    return 0;
}