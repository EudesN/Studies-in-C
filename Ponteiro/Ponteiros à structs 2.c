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
    depois -> min = 80; // outra maneira de escrever
    depois -> seg = 50;

    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio + depois-> seg;
    antes.min = agora.hora + depois-> min;
    antes.seg = depois-> min + depois-> seg;
    printf("%i:%i:%i", antes.hora, antes.min, antes.seg);
    
    return 0;
}