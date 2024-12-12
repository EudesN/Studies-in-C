#include <stdio.h>

void OrdCresc(int vetor[], int n){
    int temp = 0;

    for(int i = 0; i < n; i++){ // repetição para a primeira variável
        for(int j = i + 1; j < n; j++){ // repetição para a variável seguinte
            if(vetor[i] > vetor[j]){ // se o valor for maior q o seu seguinte
                temp = vetor[i];  // o maior valor vai para a var temporária 
                vetor[i] = vetor[j]; // o que antes era o maior valor assume o valor do menor para manter a ordem crescente
                vetor[j] = temp; // o que antes era o menor valor agora assume o valor do maior que estava guardado na var temporaria
            }   
        }
    }
}

int main(){
    int vetor[]= {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
    OrdCresc(vetor, 10);

    for(int i = 0; i < 10; i++){
        printf("%i ", vetor[i]);
    }
}
