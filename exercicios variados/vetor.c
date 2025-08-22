#include <stdio.h>

  void main(){
   printf("Vetores\n");
   
   int numeros[5];
   int soma = 0;
   
   printf("Digite o primeiro valor:\n");
   scanf("%d" , &numeros[1]);
   
    printf("Digite o segundo valor:\n");
   scanf("%d" , &numeros[2]);
   
    printf("Digite o terceiro valor:\n");
   scanf("%d" , &numeros[3]);
   
    printf("Digite o quarto valor:\n");
   scanf("%d" , &numeros[4]);
   
   printf("A somada de todas a posicoes é: %d\n",
   numeros [1] +
   numeros [2] +
   numeros [3] +
   numeros [4]);
}