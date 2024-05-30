//Simulado
//Exercicio 6


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tabuada, i, result;
	
	printf("Digite qual a tabuada desejada: \n");
	scanf("%d", &tabuada);
	
	for(i=1; i<=10; i++){
		result = i * tabuada;
		printf("%d x %d = %d \n", i, tabuada, result);
	}
	
	return 0;
}
