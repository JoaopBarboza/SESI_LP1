#include <stdio.h>

int main()
{
    char produto[100];
    float preÃ§ounidade;
    int quantidade;
    
    printf("Digite o produto: ");
    scanf("%s", produto);
    
    printf("Digite o preÃ§o: ");
    scanf("%f", &preÃ§ounidade);
    
    printf("Digite o quantidade: ");
    scanf("%d", &quantidade);
    
    
    float total = preÃ§ounidade * quantidade;
    printf(" O total da compra Ã©: %f", total);
    
}