//Exemplo 13
//Algoritmo (Programa) que soma dois n?meros exibe o resultado na tela

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeroX=0, numeroY=0;
	
	printf("\nDigite o primeiro n?mero: ");
	scanf("%d", &numeroX);
	
	printf("\nDigite o segundo n?mero: ");
	scanf("%d", &numeroY);
	
	printf("\nA SOMA ? IGUAL ? = %d", numeroX + numeroY);
	//AQUI, a soma foi feita diretamente na linha de impress?o, sem precisar de uma terceira vari?vel para armazenar o valor da soma.

	return 0;
}
