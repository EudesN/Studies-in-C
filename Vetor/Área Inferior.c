    # include <stdio.h>

    int main(){
        double M[12][12];
        char O;
        int cont = 0;
        double soma = 0; 

        scanf("%c", &O);
        for(int l = 0; l < 12; l++){
            for(int c = 0; c < 12; c++){
                scanf("%lf", &M[l][c]);
            }
        }
        for(int l = 7; l < 12; l++){ 
            for(int c = 12 - l; c < l; c++){ // respectivamente, onde começa a ler([7][5]), onde para([7][6]), e c se soma
                soma += M[l][c];    
                cont++;
            }
        }
        if(O == 'S'){
            printf("%.1lf\n", soma);
        }
        else if(O == 'M'){
            printf("%.1lf\n", soma / cont);
        }
        return 0;
    }