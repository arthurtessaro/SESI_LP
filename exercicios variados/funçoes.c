#include <stdio.h>
    int pergunta_valor(char letra){
    int valor = 0;
    
    printf("Digite o valor %c: ", letra);

    scanf("%d", &valor);
    return valor;
    } 
    
    int soma_de_dois_valores(){
    int A, B = 0;
    
    A = pergunta_valor('A');
    B = pergunta_valor('B');
    printf("\n%d + %d = %d", A,B, A+B);
    }
    int main(){
    soma_de_dois_valores();

    }