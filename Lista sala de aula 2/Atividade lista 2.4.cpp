//LISTA 02
//EXERCICIO 4
//Fa?a um programa que solicite ao usu?rio para digitar dois valores, neste caso o primeiro valor ? o lado X de um ret?ngulo e o segundo valor o lado Y. Logo ap?s, calcular a ?rea deste ret?ngulo e exibir:

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float X, Y, area;
	
	printf("Digite o valor do lado X do ret?ngulo: \n");
	scanf("%f", &X);
	
	printf("Digite o valor do lado Y do ret?ngulo: \n");
	scanf("%f", &Y);
	
	area = X * Y;
	
	printf("A ?rea desse ret?ngulo ? igual a: %.2f", area);
	
	return 0;
}
