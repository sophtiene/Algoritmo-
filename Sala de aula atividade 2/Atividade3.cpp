//Exemplo 3
//Algoritmo (Programa) que soma dois n?meros e exibe o resultado na tela

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, b, soma;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	soma = a + b;
	
	printf("\n A soma dos n?meros ? igual ?: %d", soma);
	
	return 0;
}
