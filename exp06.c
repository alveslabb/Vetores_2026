#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
    int numeros[10];
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        float x = (rand() % 31)+20;
        numeros[i] = x;
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", numeros[i]);
    }
    getch();
}