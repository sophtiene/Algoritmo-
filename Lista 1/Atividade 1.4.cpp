//Leia um n?mero real e imprima o resultado do quadrado desse n?mero.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, quadrado;
	
	printf("Digite um n?mero real: \n");
	scanf("%f", &num);
	
	quadrado = num * num;
	
	printf("O quadrado de %.2f ? = %.2f", num, quadrado);
	
	return 0;
}
