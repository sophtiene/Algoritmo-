//1.1. Fa�a um programa que leia um n�mero inteiro e o imprima.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um n�mero inteiro ");
	scanf("%d", &num);
	
	printf("O n�mero � %d", num);
	
	return 0;	
}
