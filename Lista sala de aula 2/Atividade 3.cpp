//LISTA 01
//EXERCICIO 3
//Este exemplo pede ao usu?rio que informe um n?mero inteiro. Logo ap?s, exibe uma mensagem indicando se o n?mero informado ? positivo, negativo ou igual a zero.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um n?mero inteiro: \n");
	scanf("%d", &num);
	
	if(num<0){
		printf("O n?mero ? NEGATIVO");
	}
	else{
		if(num==0){
			printf("O n?mero ? ZERO");
		}
		else{
			printf("O n?mero ? POSITIVO");
		}
	}
	
	return 0;
}
