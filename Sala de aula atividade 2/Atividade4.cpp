//Exemplo 4
//Algoritmo (Programa) que calcula o resto da divis?o de um n?mero por 2 e exibe o resultado na tela

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int numero, resto;
	
	printf("Digite um valor: ");
	scanf("%d", &numero);
	
	resto = numero % 2;
	
	printf("O resto (mood) da divis?o por 2 = %d", resto);
	
	return 0;
}
