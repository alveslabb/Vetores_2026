#include <stdio.h>
#include <windows.h>
int main() {
    float matriz[3][3];
    int i, j;

    printf("Digite os elementos da matriz 3x3 (numeros reais):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nExibindo os elementos em ordem inversa:\n");
    for (i = 2; i >= 0; i--) {
        for (j = 2; j >= 0; j--) {
            printf("%.2f  ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}