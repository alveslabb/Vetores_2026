#include <stdio.h>

int main() {
    int numeros[10];
    int i, j, aux;
    
    printf("Digite 10 numeros:\n");
    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9-i; j++) {
            if(numeros[j] < numeros[j+1]) {
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    
    printf("\nOrdem decrescente: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}