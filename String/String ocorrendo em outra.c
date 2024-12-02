#include<stdio.h>
#include<string.h>

int main (){
    int cont=0;
    char palavra1[64], palavra2[64];
    scanf("%s", &palavra1);
    scanf("%s", &palavra2);
    for (int i = 0; i < strlen(palavra1); i++)
    {
        if (palavra1[i]!=palavra2[cont]){ // cont representa o indice, que começa no 0
            cont=0;
        }
        if (palavra1[i]==palavra2[cont])
        {
            cont++; // se acha o =, acrescenta no cont e passa pra proxima letra
            if (strlen(palavra2)== cont) 
            {  /*Se o contador cont atingir o tamanho
             da palavra2, significa que todos os 
             caracteres da palavra2 foram encontrados
              em sequência dentro da palavra1.*/
                printf("ela esta dentro da outra");
                return 0;
            }
            
        }
        
    }
        return 0;
}