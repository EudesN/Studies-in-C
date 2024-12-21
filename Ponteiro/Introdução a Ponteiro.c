# include <stdio.h>

int main(){
    int x; // reserva um espaço na memória para a variável inteira x 
    x = 10; // nesse espaço de memória reservado para x é armazenado o valor 10

    int *ponteiro;
    ponteiro  = &x;

    int y = 20;
    *ponteiro = y; // o valor de x é alterado para 20

    printf("%i %i\n", x, y); // com asterico (*) é possível acessar o valor que está no endereço de memória que o ponteiro está apontando
// sem asterisco (*) é possível acessar o endereço de memória que o ponteiro está apontando

    return 0;
}