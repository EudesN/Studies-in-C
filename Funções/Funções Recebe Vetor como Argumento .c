#include <stdio.h>

void OrdCresc(int vetor[], int n){
    int temp;

    for(int i = 0; i<n; i++){
        for(int j = i + 1; j < n; j++){
            if(vetor[i] > vetor[j]){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = vetor[i];
            }   
        }
    }
}

int main(){
    int vetor[]= {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
    int i;

    OrdCresc(vetor, 10);

    for(int i = 0; i < 10;i++){
        printf("%i", vetor[i]);
    }
}
