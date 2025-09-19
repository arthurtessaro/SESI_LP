#include <stdio.h>

int main() {
    int vetor[6];
    int soma = 0;
    float media;

    for(int i = 0; i < 6; i++) {
        printf("digita %d: ", i + 1);
        scanf("%d", &vetor[i]);
      
        
    } for(int i = 0; i < 6; i++) {
        soma = soma + vetor[i]; 
         
    }
    media = soma / 6;

    printf("media: %2.f\n", media);