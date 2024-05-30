//Simulado
//Exercicio 3

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int s = 1234;
	int n;
	
	printf("Digite a senha: \n");
	scanf("%d", &n);
	
	if(n == s){
		printf("senha est? correta");
	}
	else{
		printf("senha incorreta");
	}
	
	return 0;
}
