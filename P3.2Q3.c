#include <stdio.h>
# define Max 500

    typedef struct cadastro{
        int codigo;
        int assunto;
        int estoque;
    }tLivro;

    int ConsultaLivro();
    void MostrarEstoque();
    void CadastrarLivro();
    
int main(){
    tLivro livros[500];
    int quant = 0;
    int resp, cod;

    do{
        printf("Quantos livros na biblioteca? ");
        scanf("%d", &quant);
    }while(quant < 0 || quant > Max);
    CadastrarLivro();

    while(1){
        printf("Deseja consultar um livro?(1- sim outro valor- nao): ");
        scanf("%d", &resp);
        if(resp != 1){
            break;
        }
        printf("Qual o codigo do livro que deseja pesquisar?");
        scanf("%d", &cod);
        MostrarEstoque();
    }
    return 0;
}