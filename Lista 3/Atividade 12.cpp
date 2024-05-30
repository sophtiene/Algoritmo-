//Atividade 03
//Fa?a um programa que pergunte o tamanho de um vetor, leia seus elementos e encontre o maior e o menor valor, imprimindo ambos


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, tamanho, soma=0, maior=0, menor=0;
	
	printf("Digite a quantidade de elementos desejado para o vetor: ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	printf("Agora, digite os valores para o vetor: \n");
	for(i=0; i<tamanho; i++){
		printf("%d? valor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<tamanho; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	
	menor = maior;
	
	for(i=0; i<tamanho; i++){
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	
	printf("O MAIOR n?mero do vetor ? %d \n", maior);
	printf("O menor n?mero do vetor ? %d \n", menor);
	
	return 0;
}
