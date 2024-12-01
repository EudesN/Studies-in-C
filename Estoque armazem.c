# include <stdio.h>

int main(){
    int estoque[3][4];
    float custo[4]; 
    float custA[3] = {0, 0, 0};
    float custP[4]  = {0, 0, 0, 0};
    int totA[3] = {0, 0, 0};
    int totP[4] = {0, 0, 0, 0};
 
    printf("\n<Digite o estoque>\n");
    for(int a = 0; a < 3; a++){
        printf("\nArmazem %d:\n", a + 1);
        for(int p = 0; p < 4; p++){
            printf("Produto %d: ", p + 1);
            scanf("%d", &estoque[a][p]);
            totA[a] += estoque[a][p];
            totP[p] += estoque[a][p]; 
        }
    }

    printf("\n<Digite o custo para cada produto>\n");
    for(int i = 0; i < 4; i++){
        printf("Produto %d R$: ", i + 1);
        scanf("%f", &custo[i]);
    }
    // calular custos por armazem e produto
    for(int a = 0;a < 3; a++){
        for(int p = 0;p < 4; p++){
            custA[a] += estoque[a][p] * custo[p];
            custP[p] += estoque[a][p] * custo[p];
        }
    }
    
    printf("\n<ESTOQUE>\n");
    for(int p = 0; p  < 4; p++){
        printf("Produto %d:\n", p + 1);
        for(int a = 0; a < 3; a++){
            printf(" Armazem %d = %d\n", a + 1, estoque[a][p]);
        }
    }

    printf("\nQuantidade total de produtos por armazem: \n");
    for(int i = 0; i < 3; i++){
        printf(" Armazem %d = %d", i + 1, totA[i]);
    }

    printf("\nQuantidade total de produtos por tipo:\n");
    for(int i = 0; i < 4; i++){
        printf(" Produto %d: %d\n", i + 1, totP[i]);
    }

    printf("\nCusto total por armazem:\n");
    for(int i = 0; i < 3; i++){
        printf(" Armazem %d: R$ %.2f\n", i + 1, custA[i]);
    }
    printf("\nCusto total por produto:\n");
    for(int i = 0; i < 4; i++){
        printf(" Produto %d: R$ %.2f\n", i + 1, custP[i]);
    }
    return 0;
}







// # include <stdio.h>

// int main(){
//     int amz1[4], amz2[4], amz3[4];
//     float custo[4], cuspa1=0 , cuspa2=0, cuspa3=0, custp1=0, custp2=0, custp3=0, custp4=0;;
//     int n, tot=0, quant=0; 
//     printf("Digite o estoque:\n");
//     printf("Armazem 1:\n");
//     for(int i = 0; i < 4;i++){
//         printf("Produto %d: ", i + 1);
//         scanf("%d", &amz1[i]);
//     }
//     printf("Armazem 2:\n");
//     for(int i = 0; i < 4;i++){
//         printf("Produto %d: ", i + 1);
//         scanf("%d", &amz2[i]);
//     }
//     printf("Armazem 3:\n");
//     for(int i = 0; i < 4;i++){
//         printf("Produto %d: ", i + 1);
//         scanf("%d", &amz3[i]);
//     }
//     printf("Digite o custo para cada produto:\n");
//     for(int i = 0; i < 4; i++){
//         printf("Produto %d R$: ", i + 1);
//         scanf("%f", &custo[i]);
//     }
//     printf("ESTOQUE:\n");
//     for(int i = 0; i<4; i++){
//         printf("Produto %d:", i + 1);
//         printf("Armazem 1: %d\n", amz1[i]);
//         printf("Armazem 2: %d\n", amz2[i]);
//         printf("Armazem 3: %d\n", amz3[i]);
//     }
//     printf("Quantidade total de produtos por armazem: \n");
//     for(int i = 0; i < 4; i++){
//     tot += amz1[i];
//     }
//     printf("Armazem 1: %d\n", tot);
//     for(int i = 0; i < 4; i++){
//     tot += amz2[i];
//     }
//     printf("Armazem 2: %d\n", tot);
//     for(int i = 0; i < 4; i++){
//     tot += amz3[i];
//     }
//     printf("Armazem 3: %d\n", tot);
//     printf("Quantidade total de produtos por tipo:\n");
//     for(int i = 0; i < 4; i++){
//         quant = amz1[i] + amz2[i] + amz3[i];
//         printf("Produto %d = %d\n", i + 1, quant);
//     }
//     printf("Custo total por armazem:\n");
//     cuspa1 = amz1[0] * custo[0] + amz1[1] * custo[1] + amz1[2] * custo[2] + amz1[3] * custo[3];
//     printf("Armazem 1: %.2f\n", cuspa1);
//     cuspa2 = amz1[0] * custo[0] + amz2[1] * custo[1] + amz2[2] * custo[2] + amz2[3] * custo[3];
//     printf("Armazem 2: %.2f\n", cuspa2);
//     cuspa3 = amz1[0] * custo[0] + amz3[1] * custo[1] + amz3[2] * custo[2] + amz3[3] * custo[3];
//     printf("Armazem 3: %.2f\n", cuspa3);
//     printf("Custo total por produto:\n");
//     custp1 = amz1[0] * custo[0] + amz2[0] * custo[0] + amz3[0] * custo[0];
//     printf("Produto 1: %.2f\n", custp1);
//     custp2 = amz1[1] * custo[1] + amz2[1] * custo[1] + amz3[1] * custo[1];
//     printf("Produto 2: %.2f\n", custp2);
//     custp3 = amz1[2] * custo[2] + amz2[2] * custo[2] + amz3[2] * custo[2];
//     printf("Produto 3: %.2f\n", custp3);
//     custp4 = amz1[3] * custo[3] + amz2[3] * custo[3] + amz3[3] * custo[3];
//     printf("Produto 4: %.2f\n", custp4);
//     return 0;
// }

