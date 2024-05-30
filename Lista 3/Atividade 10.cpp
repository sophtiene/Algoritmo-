//Atividade 03
//Crie um programa que pergunte ao usu?rio o tamanho de um vetor, leia seus elementos e, em seguida, imprima-os

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, tamanho;
	
	printf("Digite a quantidade de elementos desejado para o vetor: ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	printf("Agora, digite os valores para o vetor: \n");
	for(i=0; i<tamanho; i++){
		printf("%d? valor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nVetor: \n");
	for(i=0; i<tamanho; i++){
		printf("%d \n", vetor[i]);
	}
	
	return 0;
}
