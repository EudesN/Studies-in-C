#include <stdio.h>
# define Max 500

    typedef struct cadastro{
        int codigo;
        int assunto;
        int estoque;
    }tLivro;

    int ConsultaLivro(int n, tLivro livros[], int cod);
    void MostrarEstoque(int n, tLivro livros[], int cod);
    void CadastrarLivro(int n, tLivro livros[]);

int main(){
    tLivro livros[500];
    int quant = 0; // quantidade de livros que a biblioteca possui
    int resp, cod;

    do{
        printf("Quantos livros na biblioteca? ");
        scanf("%d", &quant);
    }while(quant < 0 || quant > Max);
    CadastrarLivro(quant, livros);

    while(1){
        printf("Deseja consultar um livro?(1- sim outro valor- nao): ");
        scanf("%d", &resp);
        if(resp != 1){
            break;
        }
        printf("Qual o codigo do livro que deseja pesquisar?");
        scanf("%d", &cod);
        MostrarEstoque(quant, livros, cod);
    }
    return 0;
}

int ConsultaLivro(int n, tLivro livros[], int cod){
    for(int i = 0; i < n; i++){
        if(livros[i].codigo == cod){
            return i; // retornar o indice do livro encontrado
        }
    }
    return -1; // retorna -1 se não for encontrado 
}

void MostrarEstoque(int n, tLivro livros[], int cod){
    int indice = ConsultaLivro(n, livros, cod);
    
    if(indice == -1){
        printf("Livro não cadastrado\n");
    }
    else{
        if(livros[indice].estoque > 0){
            printf("Estoque do livro %d: %d livros disponiveis\n", cod, livros[indice].estoque);
        }
        else{
            printf("Livro esgotado!\n");
            printf("Livros do mesmo assunto:");
            for(int i = 0; i < n;i++){
                if(livros[indice].assunto == livros[i].assunto){
                    printf("%d", livros[i].codigo);
                }
            }
        }
    }
}

void CadastrarLivro(int n, tLivro livros[]){
    for(int i = 0; i < n; i++){
        printf("Informe o codigo do livro %d: ", i + 1);
        scanf("%d", &livros[i].codigo);
        printf("Informe o assunto do livro %d: ", i + 1);
        scanf("%d", &livros[i].assunto);
        printf("Informe o estoque do livro %d: ", i + 1);
        scanf("%d", &livros[i].estoque);
    }
}