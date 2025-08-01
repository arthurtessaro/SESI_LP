#include <stdio.h>

int main(){
    int ano_nascimento;
    int ano_atual;
    
    printf("digite o seu ano de nascimento:");
    scanf("%d", &ano_nascimento);
    
    printf("digite o ano atual:");
    scanf("%d", &ano_atual);
    
    int idade = ano_atual - ano_nascimento;
    
    printf("\n a sua idade é: %d anos\n", idade);
}