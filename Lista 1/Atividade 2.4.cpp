//2.4. Fa?a um programa que leia um n?mero e, caso ele seja positivo, calcule e mostre:
		//2.4.1 O n?mero digitado ao quadrado
		//2.4.2 A raiz quadrada do n?mero digitado

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, quadrado, raiz;
	
	printf("Digite um n?mero: \n");
	scanf("%f", &num);
	
	if(num>0){
		quadrado = num * num;
		raiz = sqrt(num);
		printf("Este valor ao quadrado ? %.2f", quadrado);
		printf("\nA raiz quadrada do valor ? %.2f", raiz);
	}
	
	else{
		printf("N?mero inv?lido.");
	}
	
	return 0;
}
