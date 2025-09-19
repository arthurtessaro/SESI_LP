#include <stdio.h>

void main() {
    int vetor[10];
    int soma = 0;

    for(int i = 0; i < 10; i++) {
        printf("digite o valor de %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++) {
        soma = soma + vetor[i];
    }

    printf("a soma de tudo %d\n", soma);
}