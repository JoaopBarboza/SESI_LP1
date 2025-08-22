#include <stdio.h>

int main() {
    int numeros[5];
    
    for(int i=0; i < 5; i++){
        printf("Digite o valor de %d:", i);
        scanf("%d", &numeros[i]);
    }
    
    printf("\nExibindo valores em ordem crescente\n");
    
    for (int i=0; i < 5; i++){
        printf("%d\n", numeros[i]);
    }
    
    printf("\nExibindo valores em ordem decrescente\n");
    
    for (int i=4; i >= 0 ; i--){
      printf("%d\n", numeros[i]);  
    
    }
}