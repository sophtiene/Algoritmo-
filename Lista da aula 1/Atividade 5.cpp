//Lista 1 - Exerc?cios

//Escreva uma ?nica instru??o C para executar cada uma das seguintes alternativas:
//a)Imprimir a mensagem ?Este ? um programa em C.? em duas linhas, de modo que a primeira linha termine em C.
//b)Imprimir a mensagem ?Este ? um programa em C.? com cada palavra em uma linha

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	printf("Este ? um programa em C. \n");
	printf("\n Este \n ? \n um \n programa \n em \n C");
	
	return 0;
}
