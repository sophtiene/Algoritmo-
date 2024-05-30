//Fa?a um programa que leia um n?mero real e o imprima.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num;
	
	printf("Digite um n?mero real \n");
	scanf("%f", &num);
	
	printf("O n?mero ? %.2f", num);
	
	return 0;
}
