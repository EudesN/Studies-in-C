# include <stdio.h>

int main(){

    struct horario{
        int hora;
        int min;
        int seg;
    };
    struct horario agora, *depois;
    depois = &agora;
    
    depois -> hora = 20; // há uma ordem de precedência nos sinais. Ponto é executado antes do asterísco pelo compilador
    depois -> min = 20; // outra maneira de escrever
    depois -> seg = 20;

    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio + depois -> seg;
    antes.min = agora.hora + depois -> min;
    
    printf("%i:%i:%i", agora.hora, agora.min, agora.seg);
    
    return 0;
}