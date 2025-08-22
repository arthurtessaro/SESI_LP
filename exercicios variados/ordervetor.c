#include <stdio.h>                                                                                                            

void main(){
    
    int numeros[5];
    
    for(int i=0; i<5; i++){
        
    printf("Digite o valor de %d:", i);
    scanf("%d", &numeros[i]);
    }
    printf("Exibindo valores de forma crescente:\n");
    for(int i=0; i<5; i++){
        printf("%d\n", numeros[i]);
    }
        
        printf("\n Exibindo valores de forma decrescente:\n");
        
         for(int i=4; i>=0; i--){
             
        printf("%d\n", numeros [i]);
    }
}
