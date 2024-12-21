# include <stdio.h>

int main(){
    int x; // reserva um espaço na memória para a variável inteira x 
    x = 10; // nesse espaço de memória reservado para x é armazenado o valor 10

    printf("%i\n", &x);
    return 0;
}