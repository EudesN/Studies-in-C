#include <stdio.h>
#define l 400
#define c 300
    int funcaoMatriz(int M[l][c]);

int main(){
    int M[l][c];
    int menor;

    while(1){
        printf("Digite os valores da matriz %dx%d:\n", l, c);
        for(int i = 0; i < l; i++){
            for(int j = 0; j < c; j++){
                scanf("%d", M[i][j]);
            }
        }
        menor = funcaoMatriz(M);
        printf("Menor elemento: %.d\n", menor);
        return 0;
    }
}

int funcaoMatriz(int M[l][c]){
    int soma = 0;
    int menor;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(M[i][j] < menor){
                menor = M[i][j];
            }
        }
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(M[i][j] == menor){
                for(int k = 0; k < c;k++){
                    soma += M[i][k];
                }
            }
        }
    }
    printf("A soma de todas as linhas com menor valor e: %d", soma);
    return menor;
}






//     printf("Digite os valores da matriz %dx%d: ", l, c);
//     for(int i = 0; i < l; i++){
//         for(int j = 0; j < c; j++){
//             scanf("%d", &M[i][j]);
//         }
//     }

//     menor = funcaoMatriz(M, lMenores, &qntLinhas);
//     int soma = 0;
//     for(int i = 0; i < qntLinhas; i++){
//         for(int j = 0; j < c; j++){
//             soma += M[lMenores[i]][j]; 
//         }
//     }
//     printf("A soma dos elementos e: %d", soma);
//     printf("Menor elemento: %d\n", menor);
//     return 0;
// }

// int funcaoMatriz(int M[l][c], int lMenores[], int *qntLinhas){
//     int menor = M[0][0]; 
//     *qntLinhas = 0;

//     for(int i = 0; i < l; i++){
//         for(int j = 0; j < c; j++){
//             if(M[i][j] < menor){
//                 menor = M[i][j]; // atualiza o valor do menor
//                 *qntLinhas = 0;
//                 lMenores[*qntLinhas] = i; // adiciona a linha com o menor valor
//                 (*qntLinhas)++; // aumenta a quantidade de linhas com menor valor
//             }
//             else if(M[i][j] == menor){ // verigicar se a linha já foi registrada
//                 int jaRegist = 0;

//                 for(int k = 0; k < l; k++){
//                     if(lMenores[k] == i){
//                         jaRegist = 1;
//                         break;
//                     }
//                 }
//                 if(jaRegist == 0){
//                     lMenores[*qntLinhas] = i;
//                     (*qntLinhas)++;
//                 }
//             }
//         }
//     }
//     return menor;
}   