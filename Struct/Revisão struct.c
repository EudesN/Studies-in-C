# include <stdio.h>

struct horario{
    int horas;
    int min;
    int seg;
};

void receberHorarios(struct horario list[5]){
    for(int i = 0; i < 5; i++){
        printf("Informe o %i horario(hh:mm:ss): ", i + 1);
        scanf("%d", list[5])
    }   
}
void printfHorarios(struct horario list[5]){

}
int main(){
    struct horario listaHorarios[5]; 

    receberHorarios(listaHorarios);

    printfHorarios(listaHorarios);

    return 0;
}