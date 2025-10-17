<<<<<<< HEAD
#include <stdio.h>

int main()
{
    char nome[100];
    float salario;
    int meses;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    
    printf("Digite meses: ");
    scanf("%d", &meses);
    
    float ganhos = salario * meses;
    
    printf("funcionario %s ganhos R$ %f em %d meses",nome, ganhos,meses );
    
}
=======
#include <stdio.h>

int main()
{
    char nome[100];
    float salario;
    int meses;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    
    printf("Digite meses: ");
    scanf("%d", &meses);
    
    float ganhos = salario * meses;
    
    printf("funcionario %s ganhos R$ %f em %d meses",nome, ganhos,meses );
    
}
>>>>>>> 402cda9f8724e1ab747d5a151a293b11d2db6da5
    