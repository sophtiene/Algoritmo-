//2.1. Fa?a um programa que receba dois n?meros e mostre qual deles ? o maior.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	
	printf("Digite um n?mero: \n");
	scanf("%f", &num1);
	
	printf("Digite um outro n?mero: \n");
	scanf("%f", &num2);
	
	if(num1>num2){
		printf("Entre os dois valores, o n?mero maior ? %.2f", num1);
	}
	
	else{
		printf("Entre os dois valores, o n?mero maior ? %.2f", num2);
	}
	
	return 0;
}
