#include <stdio.h>

int main() {
    char nome[100];
    float total;
    int meses;
    
   printf("digite o nome do funcionario");
   scanf("%s", nome);
  
  printf("Digite o total ganho (R$): ");
    scanf("%f", &total);
    
    
  printf("digite os meses trabalhos");
  scanf("%d", &meses);
  
  printf("O funcionário: %s ganhou R$ %.2f em %d meses.\n", nome, total, meses);

}