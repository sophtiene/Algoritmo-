//Leia o sal?rio de um trabalhador e o valor da presta??o de um empr?stimo. Se a presta??o for maior que 20% do sal?rio imprima: Empr?stimo n?o concedido, caso contr?rio imprima: Empr?stimo concedido.


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, emprestimo;
	
	printf("Digite o valor do sal?rio: \n");
	scanf("%f", &salario);
	
	printf("Digite o valor do empr?stimo desejado: \n");
	scanf("%f", &emprestimo);
	
	if(emprestimo>salario*0.20){
		printf("Empr?stimo N?O concedido.");
	}
	
	else{
		printf("Empr?stimo CONCEDIDO!");
	}
	
	return 0;
}
