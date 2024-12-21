# include <stdio.h>

int main(){
    int x; // reserva um espaço na memória para a variável inteira x 
    x = 10; // nesse espaço de memória reservado para x é armazenado o valor 10

    int *ponteiro;
    ponteiro  = &x;

    printf("%i\n", *ponteiro);

    // printf("%i\n", &x); // o '&' é o operador de endereço, ele retorna o endereço de memória da variável x
    return 0;
}