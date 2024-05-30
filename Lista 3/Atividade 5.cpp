//Atividade 03
//Elabore um programa que conte quantos n?meros pares existem em um vetor de 10 elementos

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[10], pares[10], i, contagem=0;
	
	for(i=0; i<10; i++){
		printf("Digite um n?mero: \n");
		scanf("%d", &numeros[i]);
		
		if(numeros[i] % 2 == 0){
			printf("%d ? um n?mero par \n\n", numeros[i]);
			pares[i] = numeros[i];
			contagem++;
		}
	}
	
	printf("Existem %d n?meros pares no vetor", contagem);
	
	return 0;
}
