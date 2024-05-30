//LISTA 02
//EXERCICIO 3
//Fa?a um programa que solicite ao usu?rio para digitar um valor. Logo ap?s, calcular o dobro deste n?mero e exibir:

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, dobro;
	
	printf("Digite um n?mero: \n");
	scanf("%f", &num);
	
	dobro = num*2;
	
	printf("O dobro de %.2f ? igual a %.2f", num, dobro);
	
	return 0;
}

