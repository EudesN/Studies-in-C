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

    printf("%i %i %i\n", )
    return 0;
}