#include <stdio.h>

int main(){
    struct horario{
        int horas;
        int min;
        int seg;
    };
    struct horario agora;
    agora.horas = 10;
    agora.min = 42;
    agora.seg = 58;
    return 0;
}