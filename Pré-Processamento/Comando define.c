// Pré-processamento: antes de iniciar a compilação do nosso código-fonte, o arquivo é processado por um pré-processador. 
//O arquivo de código-fonte é con￾vertido em outro arquivo de código-fonte “expandido”. 
//Nessa etapa, ocorrem a remoção dos comentários e a interpretação das diretivas de compilação utilizadas, 
//as quais se iniciam com #.

# include <stdio.h>
# define SIM 100
# define NAO 100

int main(){
    int x;
    printf("Informe um número: ");
    scanf("%d", &x);

    if(x >= 10){
        printf("%i", SIM);
    }
    else{
        printf("%i", NAO);
    }
    return 0;
}