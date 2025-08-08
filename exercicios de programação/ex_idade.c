// Se a idade for menor de 15 anos então
// Exiba a mensagem : "Você é jovem"


// Se a idade for maior 20 anos
// Exiba a mensagem : "Você é adulto"


// Se a idade for maior de 50 anos
// Exiba a mensagem : "Você é velho"


#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 15) {
        printf("Você é jovem.\n");
    } else if (idade > 50) {
        printf("Você é velho.\n");
    } else if (idade > 20) {
        printf("Você é adulto.\n");
    } else {
        printf("Você está na adolescência.\n");
    }

    return 0;
}