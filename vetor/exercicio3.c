#include <stdio.h>

void main() {
	int vetor[10];
	int maior = 0;
	int menor = 0;

	for(int i = 0; i < 10; i++) {
		printf("digite o valor de %d\n", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	maior = vetor[0];
	menor = vetor[0];

		for(int i = 1; i < 10; i++) {
		if(vetor[i] > maior) {
			maior = vetor[i];
		}
		
		if(vetor[i] < menor) {
			menor = vetor[i];
		}
	}
	
	printf("maior valor %d\n", maior);
	printf("menor valor %d\n", menor);
}