<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int vlr1;
    int vlr2;
    
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &vlr1);
    
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &vlr2);
    
    int soma = vlr1 + vlr2;
    int menos = vlr1 - vlr2;
    int multi = vlr1 * vlr2;
    float divisao = vlr1 / vlr2;
    
    printf("%d + %d = %d\n", vlr1, vlr2, soma);
    printf("%d - %d = %d\n", vlr1, vlr2, menos);
    printf("%d x %d = %d\n", vlr1, vlr2, multi);
    printf("%d / %d = %f\n", vlr1, vlr2, divisao);

=======
#include <stdio.h>

int main()
{
    int vlr1;
    int vlr2;
    
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &vlr1);
    
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &vlr2);
    
    int soma = vlr1 + vlr2;
    int menos = vlr1 - vlr2;
    int multi = vlr1 * vlr2;
    float divisao = vlr1 / vlr2;
    
    printf("%d + %d = %d\n", vlr1, vlr2, soma);
    printf("%d - %d = %d\n", vlr1, vlr2, menos);
    printf("%d x %d = %d\n", vlr1, vlr2, multi);
    printf("%d / %d = %f\n", vlr1, vlr2, divisao);

>>>>>>> 402cda9f8724e1ab747d5a151a293b11d2db6da5
}