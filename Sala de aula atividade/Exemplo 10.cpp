//Exemplo 10 - Multiplica dois numeros e exibe resultado na tela

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale (LC_ALL, "Portuguese");
	int a,b, mult;
	printf("Digite o primeiro n?mero: ");
	scanf("%d", &a);
	
	printf("Digite o segundo n?mero: ");
	scanf("%d", &b);
	
	mult = a * b;
	
	printf("\n A multiplica??o dos n?meros ? igual a %d" , mult);
	
	return 0;
}
