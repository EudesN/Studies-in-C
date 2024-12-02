#include<stdio.h>

int main (){
    int cont=0, len1, len2;
    char palavra1[31], palavra2[31];

    scanf("%s", palavra1);
    scanf("%s", palavra2);
    
// forma manual de contar o comprimento da string (percorre a string até o '\0')
for(len1 = 0; palavra1[len1] != '\0'; len1++);
for(len2 = 0; palavra2[len2] != '\0'; len2++);

    for (int i = 0; i < len1; i++){
        if (palavra1[i] != palavra2[cont]){ // cont representa o indice, que começa no 0
            cont = 0;
        }
        else if (palavra1[i] == palavra2[cont]){
            cont++; // se acha o =, acrescenta no cont e passa pra proxima letra
            if (len2 == cont) {  //Se o contador cont atingir o tamanho da palavra2, então todos os caracteres da palavra2 foram encontrados em sequência dentro da palavra1
                printf("A segunda palavra esta dentro da primeira.\n");
                return 0;
            }
        }
    }
    printf("A segunda palavra NAO esta dentro da primeira.\n");
        return 0;
}