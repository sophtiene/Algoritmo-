//LISTA 02
//EXERCICIO 6
//Fa?a um programa que solicite ao usu?rio para digitar um valor. Logo ap?s, utilize a biblioteca Matem?tica para calcular e exibir:
//a) O n?mero elevado ao cubo
//b) O n?mero elevado ao quadrado
//c) A raiz c?bica do n?mero

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, cubo, quadrado, raiz;
	
	printf("Digite um n?mero: \n");
	scanf("%f", &num);
	
	cubo = pow(num, 3);
	quadrado = pow(num, 2);
	raiz = cbrt(num); //cbrt calcula raiz cubica
	
	printf("--> %.2f elevado ao cubo ? %.2f  \n", num, cubo );
	printf("--> %.2f elevado ao quadrado ? %.2f  \n", num, quadrado );
	printf("--> %.2f tem como raiz cubica %.2f  \n", num, raiz );
	
	return 0;
}
