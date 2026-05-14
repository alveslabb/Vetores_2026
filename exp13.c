#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[10];
    int maior, menor;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    maior = menor = num[0];

    for(int i = 1; i < 10; i++) {
        if(num[i] > maior) {
            maior = num[i];
        }
        if(num[i] < menor) {
            menor = num[i];
        }
    }

    printf("\nMaior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}