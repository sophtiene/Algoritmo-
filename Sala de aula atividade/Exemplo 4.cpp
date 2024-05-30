//Exemplo 4 - Multiplica??o de dois valores 

#include <stdio.h>
int main(void){
	int a,b,mult;
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	
	mult = a * b;
	
	printf("\n A multiplicação dos dois valores fica = %d", mult);
	
	return 0;
	
}
