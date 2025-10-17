#include <stdio.h>

int main(){ 
    
    float radianos; 
    
    printf("Qual seu ângulo em radianos: ");
    scanf("%f", &radianos);
    
    float graus = radianos * 180/3.14;
    
    printf("Seu ângulo em radianos corresponde a %.2f graus", graus);
    
    return 0;
}