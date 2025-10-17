/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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