#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[10];
    int maior, menor, posMaior, posMenor;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    maior = menor = num[0];
    posMaior = posMenor = 0;

    for(int i = 1; i < 10; i++) {
        if(num[i] > maior) {
            maior = num[i];
            posMaior = i;
        }
        if(num[i] < menor) {
            menor = num[i];
            posMenor = i;
        }
    }

    printf("\nMaior: %d (posicao %d)\n", maior, posMaior);
    printf("Menor: %d (posicao %d)\n", menor, posMenor);

    return 0;
}