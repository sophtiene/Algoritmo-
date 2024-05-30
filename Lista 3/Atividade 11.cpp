//Atividade 03
//Crie um programa que pergunte ao usu?rio o tamanho de um vetor e seus elementos, calcule a soma desses elementos e exiba o resultado.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, tamanho, soma=0;
	
	printf("Digite a quantidade de elementos desejado para o vetor: ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	printf("Agora, digite os valores para o vetor: \n");
	for(i=0; i<tamanho; i++){
		printf("%d? valor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<tamanho; i++){
		soma += vetor[i];
	}
	printf("\nA soma dos valores deste vetor ? %d", soma);
	
	return 0;
}
