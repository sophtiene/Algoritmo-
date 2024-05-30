//Atividade 03
//Fa?a um programa que leia um vetor de 8 elementos e o imprima na ordem inversa

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[8], i;
	
	for(i=0; i<8; i++){
		printf("Digite um n?mero: \n");
		scanf("%d", &numeros[i]);
	}
	
	printf("Impress?o inversa do vetor: \n");
	for(i=7; i>=0; i--){
		printf("%d \n", numeros[i]);
	}
	
	return 0;
}
