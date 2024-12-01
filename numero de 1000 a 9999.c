# include <stdio.h>
int main(){
    int i, part1, part2, num;
    for(i = 1000; i <= 9999; i++){
        part1 = i / 100;
        part2 = i % 100;
        num = (part1 + part2) * (part1 + part2);
        if (num == i){
            printf("%d\n", i);
        }   
    }
    return 0;
}