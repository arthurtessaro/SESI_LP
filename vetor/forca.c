#include <stdio.h>

int main(){
    char palavra [8] = "Cachorro";
    char letra;
    printf("Bem-vindo!\n");
    printf("Ao jogo da forca\n");
    printf("Voce tem 10 tentativas\n");
    printf("Para uma palavra de 8 posicoes!\n");
    
    
    
    
    //printf("%s", palara)
    
    printf("_ _ _ _ _ _ _ _ \n");
    
    printf("Digite uma letra:");
    scanf("%c", &letra);
    
    printf("Valor da letra %c", letra);
    
    printf("\n");
    
    for(int i = 0; i<8; i++){
        
    if(palavra[i] == letra){
        printf("%c", letra);
    }else{
        printf("_ ");
    }
    
}
}

