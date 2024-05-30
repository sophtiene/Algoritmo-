//1.9. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
	//1.9.2 O valor de cada parcela, no parcelamento de 3% sem juros;

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valor, parcela;
	
	printf("Digite o valor total da compra: ");
	scanf("%f", &valor);
	
	parcela = (valor / 3);
	
	printf("O valor de cada parcela, ? igual ?: R\$%.2f", parcela);
	
	return 0;
}
