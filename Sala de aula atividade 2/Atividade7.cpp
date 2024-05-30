//Exemplo 7
//Programa que multiplica dois n?meros e exibe o resultado na tela.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, b, mult;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	mult = a * b;
	
	printf("\n A multiplica??o dos n?meros ? igual ?: %d", mult);
	
	return 0;
}
