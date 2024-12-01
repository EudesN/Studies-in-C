# include <stdio.h>

int main(){
    int prod[500], quant = 0, cod, enco = 0;
    float preco[500], tot = 0;
    for(int i = 0;i < 500; i++){
        printf("Digite o codigo e o valor do produto %d: ", i);
        scanf("%d %f", &prod[i], &preco[i]);
    }
    printf("\n");
    printf("Digite o codigo e a quantidade desejada: ");
    scanf("%d %d", &cod, &quant);
    for(int i=0;i<500;i++){
        if(cod == prod[i]){
            tot = preco[i] * quant;
            printf("Valor a pagar: R$ %.2f", tot);
            enco = 1;
            break;
        }
    }        
    if(enco == 0){
        printf("Produto nao encontrado\n");
        }
    return 0;
}