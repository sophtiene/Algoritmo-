//Atividade 03
//Escreva um programa que calcule e exiba a m?dia dos valores armazenados em um vetor com 20 n?meros reais

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float numeros[20], soma=0, media=0;
	int i;
	
	for(i=0; i<20; i++){
		printf("Digite um n?mero: \n");
		scanf("%f", &numeros[i]);
		soma += numeros[i];
	}
	
	media = soma / 20.0;
	
	printf("A m?dia dos 20 valores do vetor ? igual a %.2f", media);
	

	return 0;
}
