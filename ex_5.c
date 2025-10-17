
#include <stdio.h>

void main()
{
    int ano_de_nascimento;
    int ano_atual;
    int idade = ano_de_nascimento + ano_atual;
    
    printf("Digite seu ano de nascimento: ");
    scanf(" %d",  &ano_de_nascimento);
    
    printf("Digite o ano atual:");
    scanf("%d", &ano_atual);
    
    idade = ano_atual - ano_de_nascimento;
    
    printf("Você possui %d anos", idade);
}