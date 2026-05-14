#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
    float numeros[10];
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        float x = rand();
        numeros[i] = x;

    }
    for(int i = 0; i < 10; i++){
        printf("%.2f\n", numeros[i]);
    }

    getch();
}