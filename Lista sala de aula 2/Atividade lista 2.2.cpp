//LISTA 02
//EXERCICIO 2
//Fa?a um programa que solicite ao usu?rio para digitar seu nome. Logo ap?s, exibir o nome digitado.


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[30];
	
	printf("Digite seu nome: \n");
	gets(nome);
	
	printf("Bom dia, %s!", nome);
	
	return 0;
}
