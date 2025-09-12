#include <stdio.h>

int perguntar(char nome) {
    int valor;
    printf("Digite o valor de %c: ", nome);
    scanf("%d", &valor);
    return valor;
}

void soma() {
    int A = perguntar('A');
    int B = perguntar('B');
    printf("%d + %d = %d\n", A, B, A + B);
}

void subtracao() {
    int A = perguntar('A');
    int B = perguntar('B');
    printf("%d - %d = %d\n", A, B, A - B);
}

void multiplicacao() {
    int A = perguntar('A');
    int B = perguntar('B');
    printf("%d * %d = %d\n", A, B, A * B);
}

void divisao() {
    int A = perguntar('A');
    int B = perguntar('B');
    if (B != 0)
        printf("%d / %d = %.2f\n", A, B, (float)A / B);
    else
        printf(" OPERAÇÃO INVÁLIDA, ERRO EM DIVIDIR POR 0\n");
}

int main() {
    int opcao;

    printf("-----------------------\n");
    printf("-     CALCULADORA     -\n");
    printf("-----------------------\n");
    printf("- [ 1 ] SOMA          -\n");
    printf("- [ 2 ] SUBTRAÇÃO     -\n");
    printf("- [ 3 ] MULTIPLICAÇÃO -\n");
    printf("- [ 4 ] DIVISÃO       -\n");
    printf("- [ 0 ] SAIR          -\n");
    printf("-----------------------\n");

    printf("SELECIONE UMA DAS OPÇÕES: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            soma();
            break;
        case 2:
            subtracao();
            break;
        case 3:
            multiplicacao();
            break;
        case 4:
            divisao();
            break;
       
        default:
            printf("A OPERAÇÃO É INVÁLIDA\n");
    }

    return 0;
}

