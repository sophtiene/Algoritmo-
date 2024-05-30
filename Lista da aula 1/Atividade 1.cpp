//Lista 1 - Exerc?cios

//Fa?a um programa que calcula a soma de dois n?meros e exibe o resultado na tela.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float num1, num2, soma;
	
	printf("Bem vindo ? calculadora de soma! \n");
	
	printf("Digite um valor: ");
	scanf("%f", &num1);
	
	printf("Digite um outro valor: ");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	
	printf("\n A soma desses dois valores ? igual ?: %f", soma);
	
	system("PAUSE");
	return 0;
}
