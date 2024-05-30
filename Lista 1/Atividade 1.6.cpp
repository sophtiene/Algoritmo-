//1.6. Leia um valor em real e a cota??o do d?lar. Em seguida, imprima o valor correspondente em d?lares.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float real, dolar, conversao;
	
	printf("Digite um valor em real: \n");
	scanf("%f", &real);
	
	printf("Agora, digite a atual cota??o do d?lar: \n");
	scanf("%f", &dolar);
	
	conversao = real / dolar;
	
	printf("O valor %.2f em real ? igual ? %.2f d?lares.", real, conversao);
	
	return 0;
}
