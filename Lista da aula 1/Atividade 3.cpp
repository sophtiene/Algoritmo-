//Lista 1 - Exerc?cios

//Fa?a um programa que calcula a ?rea de um ret?ngulo, ou seja, o usu?rio digita o valor do lado X e o valor do lado Y do ret?ngulo (tipo real), depois fa?a o c?lculo da ?rea exiba o resultado na tela.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float X,Y,area;
    
    printf("Bem vindo ? calculadora de ?REA DE RET?NGULOS! \n");
    printf("Digite o valor do lado X: \n");
    scanf("%f", &X);
    
    printf("\n Digite o valor do lado Y: \n");
    scanf("%f", &Y);
    
    area = X * Y;
    
    printf("\n A ?rea do ret?ngulo ? igual ?: %f", area);
    
return 0;
    }
