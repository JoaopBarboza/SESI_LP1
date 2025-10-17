<<<<<<< HEAD
#include <stdio.h>

int main()
{
    float preço;
    float desconto;
    
    printf("Digite o preço: ");
    scanf("%f", &preço);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);
    
    float valordesconto = preço * desconto /100;
    float preçofinal = preço - valordesconto;
    
    printf("Valor descontado: %f\nnovo valor: %f",valordesconto,preçofinal);
    
=======
#include <stdio.h>

int main()
{
    float preço;
    float desconto;
    
    printf("Digite o preço: ");
    scanf("%f", &preço);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);
    
    float valordesconto = preço * desconto /100;
    float preçofinal = preço - valordesconto;
    
    printf("Valor descontado: %f\nnovo valor: %f",valordesconto,preçofinal);
    
>>>>>>> 402cda9f8724e1ab747d5a151a293b11d2db6da5
}