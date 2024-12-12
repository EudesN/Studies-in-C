# include <stdio.h>

int main(){
    struct horario
    {
        int horas;
        int min;
        int seg;
        double teste;
        char letra;
    };

    struct horario agora; 
    agora.horas = 15;
    agora.min = 17;
    agora.seg = 30;

    struct horario depois;
    depois.horas = agora.horas + 10; // operações matemáticas envolvendo var de estruturas
    depois.min = agora.min;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';
    depois.seg = agora.seg;

    printf("%i\n", depois.horas);
    printf("%i\n", depois.min);
    printf("%f\n", depois.teste);
    printf("%c\n", depois.letra);

    return 0;
}