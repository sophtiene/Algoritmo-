//LISTA 01
//EXERCICIO 1
//Escreva um programa para calcular o peso ideal de uma pessoa


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char escolha[1];
	
	printf("Calculador de peso ideal \n");
	printf("--Digite 'H' para HOMEM \n");
	printf("--Digite 'M' para MULHER \n");
	gets(escolha);
	
	printf("%s", escolha);
	
	return 0;
}
