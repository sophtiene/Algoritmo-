//Pe?a ao usu?rio para digitar tr?s valores inteiros e imprima a soma deles.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, soma;
	
	printf("Digite tr?s n?meros inteiros: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	soma = num1 + num2 + num3;
	
	printf("A soma dos valores ?: %d", soma);
	
	return 0;
}
