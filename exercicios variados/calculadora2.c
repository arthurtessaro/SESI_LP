#include <stdio.h>

float chamar(const char* mensagem) {
    float n;
    printf("%s", mensagem);  
    scanf("%f", &n);  
    return n;
}

float soma() {
    float n1 = chamar("Digite o primeiro número: ");
    float n2 = chamar("Digite o segundo número: ");
    return n1 + n2;
}

float subtração() {
    float n1 = chamar("Digite o primeiro número: ");
    float n2 = chamar("Digite o segundo número: ");
    return n1 - n2;
}

float multiplicação() {
    float n1 = chamar("Digite o primeiro número: ");
    float n2 = chamar("Digite o segundo número: ");
    return n1 * n2;
}

float divisão() {
    float n1 = chamar("Digite o primeiro número: ");
    float n2 = chamar("Digite o segundo número: ");
    if (n2 == 0) {
        printf("Erro! Divisão por zero.\n");
        return 0;
    }
    return n1 / n2;
}

int main() {
    int opção = 0;
    printf("-------------------\n");
    printf("-  CALCULADORA    -\n");
    printf("-------------------\n");
    printf("- [1] SOMA        -\n");
    printf("- [2] SUBTRAÇÃO   -\n");
    printf("- [3] MULTIPLICAÇÃO-\n");
    printf("- [4] DIVISÃO     -\n");

    printf("Selecione uma das opções: ");
    scanf("%d", &opção);

    switch (opção) {
        case 1:
            printf("Resultado: %f\n", soma()); 
            break;
        case 2:
            printf("Resultado: %f\n", subtração());
            break;
        case 3:
            printf("Resultado: %f\n", multiplicação());
            break;
        case 4:
            printf("Resultado: %f\n", divisão());
            break;
        default:
            printf("\nOpção Inválida!\n");
    }
    return 0;
}