//Exemplo 15
//Algoritmo (Programa) que soma seis n?meros exibe o resultado na tela

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4, n5, n6, soma;
	
	printf("Digite seis n?meros a seguir: \n");
	scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
	
	soma = n1 + n2 + n3 + n4 + n5 + n6;
	
	printf("\n A SOMA ? IGUAL ? = %d", soma);
	
	return 0;
}


