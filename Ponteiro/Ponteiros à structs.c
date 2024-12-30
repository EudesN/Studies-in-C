# include <stdio.h>

int main(){

    struct horario{
        int horas;
        int min;
        int seg;
    };
    struct horario agora, *depois;

    depois = &agora;

    printf("%i:%i:%i", agora.horas, agora.min, agora.seg);
    
    return 0;
}