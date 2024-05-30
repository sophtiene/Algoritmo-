//1.1. Faça um programa que leia um número inteiro e o imprima.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número inteiro ");
	scanf("%d", &num);
	
	printf("O número é %d", num);
	
	return 0;	
}
