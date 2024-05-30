//Exemplo 5
//Programa que multiplica dois n?meros e exibe o resultado na tela.


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, b, mult;
	printf("Digite o primeiro n?mero: ");
	scanf("%d", &a);
	
	printf("Digite o segundo n?mero: ");
	scanf("%d", &b);
	
	mult = a * b;
	
	printf("\nA multiplica??o dos n?meros ? = %d", mult);
	
	return 0;
}
