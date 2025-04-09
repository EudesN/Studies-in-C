//Programa implementaFila.c
#include <stdio.h>
#include <stdlib.h>    //Para alocar e desalocar memoria
#include <locale.h>    //Para adicionar caracteres do portugues
#define LIMPA_TELA system("clear");    //Para limpar a tela

//Definicao do tipo Pessoa
typedef struct pessoa
{
    char nome[50];
    struct pessoa *link;    //Link para apontar para a proxima pessoa da fila
} Pessoa;

//Prototipos das funcoes
void exibeMenu();
void enqueue(Pessoa **);
void dequeue(Pessoa **);
void statusFila(Pessoa **);
void imprimeFila(Pessoa ***);
void removeFila(Pessoa **);

int main()
{

    Pessoa *inicio = NULL;    //Sinaliza o inicio da fila
    int opcao;    //Captura a opcao do usuario 

    do
    {
        exibeMenu();    //O menu principal eh mostrado ao usuario
        scanf("%d%*c", &opcao);

        //Em caso de opcao invalida
        while(opcao < 0 || opcao > 3)
        {
            printf("DIGITE UMA OPCAO VALIDA: ");
            scanf("%d%*c", &opcao);
        }

        LIMPA_TELA
        switch(opcao)
        {
            case 1:
                enqueue(&inicio);
                break;
            case 2:
                dequeue(&inicio);
                break;
            case 3:
                statusFila(&inicio);
                break;
        }
    } while(opcao != 0);

    removeFila(&inicio);
    printf("Obrigado por vir. Volte sempre! ;)\n");

    return 0;
}

//A funcao enqueue(Pessoa **) sempre coloca alguem no final
void enqueue(Pessoa **inicio)
{
    //Mostra como esta a fila, para comparar o antes e depois
    printf("A fila antes:\n");
    imprimeFila(&inicio);

    Pessoa *prox = NULL;

    //Aloca memoria para a proxima pessoa da fila
    prox = (Pessoa *) malloc(sizeof(Pessoa));

    if(prox == NULL)    //Nao ha mais espaco disponivel na memoria 
    {
        printf("Nao ha mais memoria disponivel!\n\n");
        return;
    } else{    //Ha espaco disponivel ainda
        //Preenche com dados a variavel *prox
        printf("Digite o nome da pessoa: ");
        gets(prox->nome);
        prox->link = NULL;

        if(*inicio == NULL)    //Nao ha pessoas na fila ainda?
            *inicio = prox;    //*inicio representara a primeira pessoa
        else    //Ja tem pessoas na fila?
        {
            //A variavel temporaria acessa o inicio da fila
            Pessoa *temp = *inicio;
            //A fila eh percorrida ate o final
            while(temp->link != NULL)
                temp = temp->link;
            //A nova pessoa eh anexada a ultima da fila
            temp->link = prox;
        }

        LIMPA_TELA
        printf("A fila depois:\n");
        imprimeFila(&inicio);
    }
}

//A funcao dequeue(Pessoa **) sempre remove alguem do inicio 
void dequeue(Pessoa **inicio){
    if(*inicio == NULL)
    {
        printf("Impossivel remover pessoas de uma fila vazia!\n\n");
        return;
    } else{    //A fila nao eh vazia
        //Mostra a fila antes de retirar alguem
        printf("A fila antes:\n");
        imprimeFila(&inicio);

        Pessoa *temp = *inicio;    //Um ponteiro auxiliar guarda o inicio
        *inicio = (*inicio)->link;    //O no do inicio avanca para o proximo elemento
        free(temp);    //O endereco do antigo primeiro no eh devolvido ao sistema

        //Mostra a fila depois de retirar alguem
        printf("A fila depois:\n");
        imprimeFila(&inicio);
    }
}

/*A funcao statusFila(Pessoa **) lista as pessoas, da primeira a ultima
e informa quantas ha*/
void statusFila(Pessoa **inicio){
    Pessoa *temp;
    int quantPessoas = 0;

    //Percorre a fila para descobrir quantas pessoas sao e quem sao elas
    printf("As pessoas que estao na fila sao:\n\n");

    for(temp = *inicio; temp != NULL; temp = temp->link)
    {
        printf("%s\n", temp->nome);
        quantPessoas++;
    }

    printf("\nHa %d pessoas nessa fila.\n\n", quantPessoas);
}

void imprimeFila(Pessoa ***inicio){
    //A variavel temporaria acessa o inicio da fila 
    Pessoa *temp = **inicio;
    //A fila eh percorrida e cada elemento eh impresso na tela
    while(temp != NULL)
    {
        printf("%s -> ", temp->nome);
        temp = temp->link;
    }
    printf("NULL\n\n");
}

/*Apos todo o programa, a memoria alocada para a fila eh
devolvida ao sistema por removeFila(Pessoa **)*/
void removeFila(Pessoa **inicio)
{
    Pessoa *temp;

    //Percorre a fila inteira
    while(*inicio != NULL){
        temp = *inicio;    //A variavel temporaria acessa o inicio 
        *inicio = (*inicio)->link;    //O no inicial sempre avanca para o proximo
        free(temp);    //O no que era inicial eh devolvido ao sistema
    }
}

void exibeMenu(){
    printf("%s\n\n%s\n%s\n%s\n%s\n\n%s",
        "MENU PRINCIPAL", "(1) Adicionar pessoa a fila",
        "(2) Remover pessoa da fila", "(3) Mostrar status da fila",
        "(0) Sair", "SUA OPCAO: ");
}
