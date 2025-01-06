#include <stdio.h>

int main(){
    struct horario{
        int *pHora;
        int *pMin;
        int *pSeg;
    };
    struct horario hoje;

    int hora =  200;
    int min = 300;
    int seg = 400;

    hoje.pHora = &hora;
    hoje.pMin = &min;
    hoje.pSeg = &seg;

    printf("hora - %i\n", *hoje.pHora);
    printf("minuto - %i\n", *hoje.pMin);
    printf("segundo - %i\n", *hoje.pSeg);

    return 0;
}