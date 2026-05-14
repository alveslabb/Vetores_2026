#include<stdio.h>
void main(){
    char nomes[7][50] = {
        "Jacinto Pena",
        "Jacinto Paixão",
        "Jacinto Amor",
        "Jacinto Motta",
        "Jacinto Educado",
        "Jacinto Dito",
        "Jacinto Amado",
    };
    for(int i = 0; i < 7; i++){
        printf("%s\n", nomes[i]);
    }
    getch();
}
