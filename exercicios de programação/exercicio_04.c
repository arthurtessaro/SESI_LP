#include <stdio.h>


int main()
{
    float cm, metros;
    
    
    printf("quantidade em centimetros:");
    scanf("%f", &cm);
    
    metros = cm / 100.0;
    
    printf("%.2f cm equivale a %.2f metros\n", cm, metros);
    return 0;
    
}