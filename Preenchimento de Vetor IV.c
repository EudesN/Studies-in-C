# include <stdio.h>

int main(){
    int par[5], impar[5];
    int n, p = 0, imp = 0;
    for(int i = 0; i< 15; i++){
        scanf("%d", &n);
        if(n % 2 == 0){
            par[p] = n;
            p++;
            if(p == 5){
                for(int j = 0 ;j < 5; j++){
                    printf("par[%d] = %d\n",j, par[j]);
                }
                p = 0;
            }
        }
        else{
            impar[imp] = n;
            imp++;
            if(imp == 5){
                for(int k = 0;k < 5; k++){
                    printf("impar[%d] = %d\n", k, impar[k]);
                }
                imp = 0;
            }
        }
    }
    for(int i = 0; i < p; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }
    for(int i = 0; i < imp; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    return 0;
}