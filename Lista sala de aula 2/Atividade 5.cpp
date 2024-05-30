//LISTA 01
//EXERCICIO 5
//Este exemplo pede ao usu?rio que informa a sua idade. Logo ap?s exibe uma mensagem informando se ele ? maior ou menor de idade.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	
	if(idade<18){
		printf("Voc? ? MENOR DE IDADE.");
	}
	else{
		printf("Voc? ? MAIOR DE IDADE.");
	}
	
	return 0;
}
