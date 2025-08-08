#include <stdio.h>

int main() {
    // 1 - Domingo
    // 2 - Segunda-feira
    // 3 - Terça-feira
    // 4 - Quarta-feira
    // 5 - Quinta-feira
    // 6 - Sexta-feira
    // 7 - Sábado
    
    int dia_semana = 0;

    printf("Digite o número do dia da semana (1 a 7): ");
    scanf("%d", &dia_semana);
    
    switch (dia_semana) {
        case 1:
            printf("\nDomingo");
            break;
        case 2:
            printf("\nSegunda-feira");
            break;
        case 3:
            printf("\nTerça-feira");
            break;
        case 4:
            printf("\nQuarta-feira");
            break;
        case 5:
            printf("\nQuinta-feira");
            break;
        case 6:
            printf("\nSexta-feira");
            break;
        case 7:
            printf("\nSábado");
            break;
        default:
            printf("\nNúmero inválido para dia da semana!");
    }

    return 0;
}

