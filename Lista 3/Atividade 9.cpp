//Atividade 03
//Escreva um programa que substitua todos os valores negativos de um vetor de 12 elementos por zero.


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vetor[12];
	
	printf("Digite os 12 valores para o vetor: \n");
	for(i=0; i<12; i++){
		printf("Digite um valor: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("\n");
	
	for(i=0; i<12; i++){
		if(vetor[i]<0){
			printf("%d ? um n?mero negativo e passar? a ser zero \n", vetor[i]);
			vetor[i] = 0;
		}
	}
	
	printf("\n Valores atualizados: \n");
	for(i=0; i<12; i++){
		printf("%d \n", vetor[i]);
	}
	
	return 0;
}
