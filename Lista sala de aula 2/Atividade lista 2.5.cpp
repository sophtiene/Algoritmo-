//LISTA 02
//EXERCICIO 5
//Fa?a um programa que solicite ao usu?rio para digitar tr?s valores. Logo ap?s, calcular e exibir:
//a) A soma entre os n?meros
//b) A subtra??o entre os n?meros
//c) A multiplica??o entre os n?meros
//d) A divis?o entre os n?meros

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, soma, sub, mult, div;
	
	printf("Digite o primeiro n?mero: \n");
	scanf("%f", &num1);
	
	printf("Digite o segundo n?mero: \n");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	
	printf("--> %.2f + %.2f = %.2f \n", num1, num2, soma);
	printf("--> %.2f - %.2f = %.2f \n", num1, num2, sub);
	printf("--> %.2f * %.2f = %.2f \n", num1, num2, mult);
	printf("--> %.2f / %.2f = %.2f \n", num1, num2, div);
	
	return 0;
}
