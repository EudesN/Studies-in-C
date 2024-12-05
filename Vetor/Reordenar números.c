# include <stdio.h>

int main(){
    int tam;

    printf("Informe o numero de elementos no vetor: ");
    scanf("%d", &tam);
    int vetor[tam];

for(int i = 0; i < tam; i++){
    scanf("%d", &vetor[i]);
}
// variáveis auxiliares
int x = tam - 1, mudar; //x começa como a ultima posição do vetor e diminui a cada interação pois os maiores elementos vão subindo
// mudar é o armazenamento temporario para a troca de valores

for(int i = 0; i < tam; i++){
    int entrou = 0;
    for(int j = 0; j < x; j++){
        if(vetor[j] > vetor[j + 1]){
            mudar = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = mudar;
            entrou = 1;
        }
    }
    x--;
    if(entrou == 0){
        break;
    }
}
for(int i = 0; i < tam; i++){
    printf("%d ", vetor[i]);
}
    return 0;
}