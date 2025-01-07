#include <stdio.h>
#define Max 50

    struct info{
        int codigo;
        float Dist;
        int Acesso; // 0-acesso não asfaltado e 1- acesso asfaltado
    };

void CadastroHotel(struct info hot[], int *quant){
    int codigo;

// verifica se o número máximo de hoteis que podem ser cadastrados foi atingido
    if(*quant >= Max){
        printf("Limite de cadastro atingido!\n");
        return;
    }
    
    printf("hotel %d\n", quant);
    printf("Codigo: ");
    scanf("%d", codigo);

// verificar se o código já não foi cadastrado
    for(int i = 0; i < *quant; i++){
        if(hot[i].codigo == codigo){
            printf("Codigo ja cadastrado\n");
            return;
        }
    }
    hot[*quant].codigo = codigo; // adicionar código ao vetor que armazana os códigos

    printf("Informe a distancia do centro (km): ");
    scanf("%d", hot[*quant].Dist);

    printf("Informe o acesso(0-Não asfaltado 1-Asfaltado): ");
    scanf("%d", hot[*quant].Acesso);

    *quant++;
    printf("Hotel Cadastrado com sucesso!\n");
}

void Hoteis15(struct info hot[], int quant){
    prinf("Os Hoteis com > 15km sao: ");
    for(int i = 0; i < quant; i++){
        if(hot[i].Dist > 15.0){
            printf("%f", hot[i].Dist);
        }
    }
}

void Consulta(int codigo, struct info hot[], int quant){
    
} 

int main(){
    struct info hot[Max]; // vetor de hoteis que armazena as informações
    int resp; // opcao de escolha do menu
    int cod; // codigo para consulta
    int quant = 0; // quantidade de hoteis cadastrados

    do{
        printf("1- Cadastrar um hotel\n");
        printf("2- Hoteis com < 15Km até o centro\n");
        printf("3- Consultar\n");
        printf("4- Sair");
        printf("Informe uma opcao: ");
        scanf("%d", &resp);

        switch (resp)
        {
        case 1:
            CadastroHotel( hot, &quant);
            break;
        case 2:
            Hoteis15(hot, quant);
            break;
        case 3:
            printf("Pesquisa pelo codigo: ");
            scanf("%d", cod);   
            Consulta(cod, hot, quant);
        default:
            break;
        }
    }while( resp != 0);
    printf("Fim do programa\n");
    return 0;
}
