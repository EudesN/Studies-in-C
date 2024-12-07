# include <stdio.h>

int main(){
    int escolha, alcool = 0, gasolina = 0, diesel = 0;

    while(1){
        scanf("%d", &escolha);
        
        if (escolha == 1){
            alcool ++;
        }
        else if(escolha == 2){
            gasolina ++;
        }
        else if(escolha == 3){
            diesel ++;
        }
        else if (escolha == 4)
        {
            break;
        }
        else{
            continue;
        }
        
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
}