#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    int resultado = a + b;
    printf("aqui sua conta\n");
    printf("O valor é %d\n", resultado);
    printf ("%d + %d = %d",a , b, resultado);


}