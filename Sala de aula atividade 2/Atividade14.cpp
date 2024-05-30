//Exemplo 14
//Algoritmo (Programa) que soma dois n?meros exibe o resultado na tela


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a=1, b=3, soma=0;
	
	soma = a+b;
	
	printf("\nSOMA = %d", soma);
	
	return 0;
}
