# include <stdio.h>

int main(){
    int n_jog, cont = 0;
    scanf("%d", &n_jog);
    int tent[3]= {0,0,0};
    int suce[3] = {0,0,0};
    char nomes[n_jog][100];
    int dados[2][3]; // linhas correspondem a cada jogador e as colunas aos dados de cada jogador(saque, bloqueios e ataques)

do{
    scanf("%s", nomes[cont]); // lê o nome do jogador e armazena em um vetor separado
    cont++;
    for(int i = 0; i < 2;i++){ 
        for(int j = 0; j < 3;j++){
            scanf("%d", &dados[i][j]); // armazena respectivamente saque, bloqueios e ataques de cada jogador
        }
    }

    // separar os totais de cada dado e os sucessos

    
    for(int i = 0; i < 3;i++){
        tent[i] += dados[0][i]; // tentativas de 
    }
    for(int i = 0; i < 3; i++){
        suce[i] += dados[1][i];
    }
}
while( cont < n_jog);
    printf("Pontos de Saque: %.2f %%.\n", (tent[0] == 0 ? 0.0 : (suce[0] * 100.0) / tent[0]));
    printf("Pontos de Bloqueio: %.2f %%.\n", (tent[1] == 0 ? 0.0 : (suce[1] * 100.0) / tent[1]));
    printf("Pontos de Ataque: %.2f %%.\n", (tent[2] == 0 ? 0.0 : (suce[2] * 100.0) / tent[2]));

    return 0;
}