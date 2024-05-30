//Lista 1 - Exerc?cios

//Fa?a um programa que calcula o produto de dois n?meros digitados pelo usu?rio.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float num1, num2, mult;
	
	printf("Bem vindo ? calculadora de soma! \n");
	
	printf("Digite um valor: \n");
	scanf("%f", &num1 );
	
	printf("Digite outro valor: \n");
	scanf("%f", &num2 );
	
	mult = num1 * num2;
	
	printf("A soma dos dois valores ? igual ?: %f", mult);
	
	return 0;
}
