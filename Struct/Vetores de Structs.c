# include <stdio.h>

int main(){
    struct horario{
        int horas;
        int min;
        int seg;
    };
    
    struct horario teste[5];

    teste[0].horas = 10;
    teste[0].min = 20;
    teste[0].seg = 30;

    printf("%i : %i : %i\n", teste[0].horas, teste[0].min, teste[0].seg);
    
    return 0; 
}