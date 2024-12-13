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
    x.seg = 3;
    return x;
}
int main(){

    struct horario teste();

    struct horario agora;
    agora.horas = 10;
    agora.min = 42;
    agora.seg = 58;

    struct horario proxima;

    proxima = teste(agora);

    return 0;
}