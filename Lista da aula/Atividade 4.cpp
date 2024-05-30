//fa?a um programa que realize a soma de todos os valores armazenados em um vetor: os valores armazenados iniciam em 1 at? um determinado valor 'n', digitado pelo usu?rio.

#include <stdio.h>

int main(){
	int n, i, soma=0;
	
	printf("Digite o tamanho do vetor: \n");
	scanf("%d", &n);
	
	int vetor[n];
	
	for(i=0; i<n; i++){
		vetor[i] = i+1;
		soma += vetor[i];
	};
	
	printf("Soma dos valores = %d", soma);
	
	return 0;
}
