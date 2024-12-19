# include <stdio.h>

int main(){
    struct horario{
        int horas;
        int min;
        int seg;
    }agora = {10, 30, 16};
    
    printf("%i %i %i", agora.horas, agora.min, agora.seg);
}