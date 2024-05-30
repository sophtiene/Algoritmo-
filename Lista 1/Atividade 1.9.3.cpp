//1.9. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
	//1.9.3 A comiss?o do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valor, desconto, total, comissao;
	
	printf("Digite o valor total da compra: \n");
	scanf("%f", &valor);
	
	desconto = valor * 0.10;
	total = valor - desconto;
	
	printf("O valor total da compra com desconto de 10%% ? igual ?: R\$%.2f \n", total);
	
	comissao = (total * 0.05) ;
	
	printf("\nO valor da comiss?o do vendedor respons?vel ? igual ?: R\$%.2f", comissao);
	
	return 0;
}
