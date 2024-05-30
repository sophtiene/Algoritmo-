//Exemplo 10
//Exemplo com texto MANIPULANDO STRING

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[30]; //a string (variavel de texto) ter? limite de 29 caracteres
	
	printf("Digite seu nome: \n");
	scanf("%30[^\n]%*c", nome);
	
	//scanf("%30[^\n]%*c", nome), ONDE %30 DECLARA QUE -->		pega 29 caracteres 
	//scanf("%30[^\n]%*c", nome), ONDE [^\n] DECLARA QUE -->	Ignora NewLine
	//scanf("%30[^\n]%*c", nome), ONDE %*c DECLARA QUE -->		Caractere de controle
	//SUPER DICA ---> Quando trabalhamos com strings n?o precisamos colocar o s?mbolo &, antes da vari?vel
	
	printf("\n SEU NOME ?: %s", nome);
	
	return 0;
}
