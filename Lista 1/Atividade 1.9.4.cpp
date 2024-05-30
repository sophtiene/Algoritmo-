//1.9. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
	//1.9.4 A comiss?o do vendedor, no caso da venda ser parcelada (5% sobre o valor total)


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valor, parcela, comissao;
	
	printf("Digite o valor total da compra: \n");
	scanf("%f", &valor);
	
	parcela = (valor / 3);
	
	printf("O valor de cada uma das 3 parcelas é igual á: R\$%.2f \n", parcela);
	
	comissao = (valor * 0.05) ;
	
	printf("\nO valor da comissão do vendedor responsavel e igual a: R\$%.2f", comissao);
	
	return 0;
}
