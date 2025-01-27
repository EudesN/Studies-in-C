#include <stdio.h>
// função recursiva é uma função que chama a ela mesma


int main(){
    int fatorial(int x);
    
    int num, res;
    scanf("%i", &num);
    res = fatorial(num);

printf("O fatorial e %i", res);
    return 0;
}
int fatorial(int x){
    int res;
    if(x == 0){
        res = 1;
    }
    else{
        res = x * fatorial(x - 1);
    }
    return res;
}