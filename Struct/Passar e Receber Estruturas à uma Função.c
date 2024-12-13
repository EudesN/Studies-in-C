#include <stdio.h>

    struct horario{
        int horas;
        int min;
        int seg;
    };

struct horario teste(struct horario x){
    printf("%i:%i:%i\n", x.horas, x.min, x.seg);
    x.horas = 18;
    x.min = 56;
    x.seg = 03;
    return x;
}
int main(){

    struct horario agora;
    agora.horas = 10;
    agora.min = 42;
    agora.seg = 58;

    struct horario proxima;
    proxima = teste(agora);

    printf("%i:%i:%i\n", proxima.horas, proxima.min, proxima.seg);
    return 0;
}