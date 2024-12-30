# include <stdio.h>

int main(){

    struct horario{
        int hora;
        int min;
        int seg;
    };
    struct horario agora, *depois;

    depois = &agora;
    (*depois).hora = 20;
    (*depois).min = 20;
    (*depois).seg = 20;

    printf("%i:%i:%i", agora.hora, agora.min, agora.seg);
    
    return 0;
}