//Fa?a um programa que construa e imprima um vetor de tamanho 10, coloque em cada posi??o o valor de i^2


#include <stdio.h>
#include <math.h>

int main(){
	int vetor[10], i;
	
	for(i=0; i<10; i++){
		vetor[i] = pow(i, 2);
		printf("%d \n", vetor[i]);
	}
	
	return 0;
}
