//LISTA 02
//EXERCICIO 7
//Fa?a um programa que solicite ao usu?rio para digitar dois valores inteiros e os armazene em duas vari?veis, exibe esses dois da seguinte forma
//A = n?mero 1, B = n?mero 2. Logo ap?s, o programa deve trocar os valores contidos nas vari?veis entre si e os exibe ao usu?rio da mesma forma anterior.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, aux;
	
	printf("Digite um valor para A: \n");
	scanf("%d", &a);
	
	printf("Digite um valor para B: \n");
	scanf("%d", &b);
	
	printf("A = %d \n", a);
	printf("B = %d \n", b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("------------------\n");
	printf("A = %d \n", a);
	printf("B = %d \n", b);
	
	return 0;
}
