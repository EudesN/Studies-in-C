# include <stdio.h>

int main(){
    struct lista{
        int valor;
        struct lista *proximo;
    };

    struct lista m1, m2, m3;
    struct lista *gancho = &m1;

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    return 0;
}