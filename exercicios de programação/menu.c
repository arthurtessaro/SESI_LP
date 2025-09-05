#include <stdio.h>

// Funções
float somar() {
    float n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    return n1 + n2;
}

float subtrair() {
    float n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    return n1 - n2;
}

float multiplicar() {
    float n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    return n1 * n2;
}

float dividir() {
    float n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    if (n2 == 0) {
        printf("Erro: divisão por zero!\n");
        return 0;
    }
    return n1 / n2;
}

float imc() {
    float peso, altura;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    if (altura == 0) {
        printf("Erro: altura inválida!\n");
        return 0;
    }
    return peso / (altura * altura);
}


// Função principal
int main() {
    int menu;
    while (1) {
        printf("================================================\n");
        printf("             C A L C U L A D O R A              \n");
        printf("================================================\n");
        printf(" 1 - Somar\n");
        printf(" 2 - Subtrair\n");
        printf(" 3 - Multiplicar\n");
        printf(" 4 - Dividir\n");
        printf(" 5 - IMC\n");
        printf(" -----------------------------------------------\n");
        printf(" 6 - Sair\n");
        printf("================================================\n");

        printf("Escolha a opção [1,2,3,4,5,6]: ");
        scanf("%d", &menu);

        switch(menu) {
            case 1:
                printf("Resultado: %.2f\n", somar());
                break;
            case 2:
                printf("Resultado: %.2f\n", subtrair());
                break;
            case 3:
                printf("Resultado: %.2f\n", multiplicar());
                break;
            case 4:
                printf("Resultado: %.2f\n", dividir());
                break;
            case 5:
                printf("Resultado: %.2f\n", imc());
                break;
            case 6:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

        printf("\n"); // Espaço entre execuções
    }
}
