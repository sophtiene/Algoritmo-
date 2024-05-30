//1.8. Receba o sal?rio-base de um funcion?rio. Calcule e imprima o sal?rio a receber, sabendo se que esse funcion?rio tem uma gratifica??o de 5% sobre o sal?rio-base.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario,aumento, total;
	
	printf("Digite o valor atual do sal?rio-base do funcion?rio: \n");
	scanf("%f", &salario);
	
	aumento = salario * 0.05;
	aumento += salario;
	
	printf("Agora, o valor atual do sal?rio-base do funcion?rio, ser? de: %.2f", aumento);
	
	return 0;
	
}
