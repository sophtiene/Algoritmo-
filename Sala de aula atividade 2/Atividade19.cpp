//Exemplo 19
//Algoritmo (Programa) que soma dois n?meros reais e mostra o resultado na tela


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float X, Y, SOMA;
	
	printf("Digite o n?mero X: \n");
	scanf("%f", &X);
	
	printf("Digite o n?mero Y: \n");
	scanf("%f", &Y);
	
	SOMA = X + Y;
	
	printf("\nA soma de %.2f com %.2f ? = %.2f", X, Y, SOMA);
	
	return 0;
}
