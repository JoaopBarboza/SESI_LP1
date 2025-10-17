<<<<<<< HEAD
#include <stdio.h>

int main(){
    
    float votosA;
    float votosB;
    
    printf("Quantos votos A teve: ");
    scanf("%f",&votosA);
    
    printf("Quantos votos B teve: ");
    scanf("%f",&votosB);
    
    int total = votosA + votosB;
    float percentualA = (votosA/total) * 100;
    float percentualB = (votosB/total) * 100;
    
    printf("Total de votos = %d\nsendo votos A: %.2f%%\nvotos B: %.2f%% ",total, percentualA, percentualB);
    
}
=======
#include <stdio.h>

int main(){
    
    float votosA;
    float votosB;
    
    printf("Quantos votos A teve: ");
    scanf("%f",&votosA);
    
    printf("Quantos votos B teve: ");
    scanf("%f",&votosB);
    
    int total = votosA + votosB;
    float percentualA = (votosA/total) * 100;
    float percentualB = (votosB/total) * 100;
    
    printf("Total de votos = %d\nsendo votos A: %.2f%%\nvotos B: %.2f%% ",total, percentualA, percentualB);
    
}
>>>>>>> 402cda9f8724e1ab747d5a151a293b11d2db6da5
