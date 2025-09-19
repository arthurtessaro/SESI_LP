#include <stdio.h>

void main() {
	int vetor[5];

	for(int i=0; i < 5; i++) {
		printf("digite o valor de %d\n", i+1);
		scanf("%d", &vetor[i]);
	}

    printf("mostra o valor:\n");
    
	for(int i=0; i <= 4; i++) {
		printf("valor de %d: %d\n",i+1, vetor[i]);
}	}