#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomes[5][50];
    char temp[50];

    for(int i = 0; i < 5; i++) {
        printf("Digite um nome: ");
        scanf("%s", nomes[i]);
    }

    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }

    printf("\nOrdem alfabetica:\n");
    for(int i = 0; i < 5; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
