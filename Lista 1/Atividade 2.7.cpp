//2.7 Fa?a um programa que receba dois n?meros e mostre o maior. Se por acaso, os dois n?meros forem iguais, imprima a mensagem N?meros iguais.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, diferenca;
	
	printf("Digite um n?mero: \n");
	scanf("%d", &num1);
	
	printf("Digite um outro n?mero: \n");
	scanf("%d", &num2);
	
	if(num1==num2){
		printf("N?meros iguais.");
	}
	
	else{
		if(num1>num2){
			diferenca = num1 - num2 ;
			printf("O n?mero maior ?: %d \n", num1);
			printf("A diferen?a entre os dois n?meros ? de: %d \n", diferenca);
		}
	
		else{
			diferenca = num2 - num1 ;
			printf("O n?mero maior ?: %d \n", num2);
			printf("A diferen?a entre os dois n?meros ? de: %d \n", diferenca);
		}
	}

	return 0;
}