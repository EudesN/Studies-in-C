# include <stdio.h>

struct horario{
    int hora;
    int min;
    int seg;
};

void receberHorarios(struct horario lista[5]){
    for(int i = 0; i < 5; i++){
        printf("Informe o %i horario(hh:mm:ss): ", i + 1);
        scanf("%i : %i : %i", &lista[i].hora, &lista[i].min, &lista[i].seg);
    }   
}
void printfHorarios(struct horario lista[5]){
    for(int i = 0; i < 5; i++){
        printf("O %i horario e %i : %i : %i", i + 1, lista[i].hora, lista[i].min, lista[i].seg);
    }
}
int main(){
    struct horario listaHorarios[5]; 

    receberHorarios(listaHorarios);

    printfHorarios(listaHorarios);

    return 0;
}