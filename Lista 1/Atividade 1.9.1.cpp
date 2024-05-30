//1.9. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
	//1.9.1 O total a pagar com desconto de 10%;

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valor, desconto, total;
	
	printf("Digite o valor total do produto: \n");
	scanf("%f", &valor);
	
	desconto = valor * 0.10;
	total =  valor - desconto ;
	
	printf("O total a pagar, com 10%% de desconto, é igual à %.2f", total );
	
	return 0;
}
