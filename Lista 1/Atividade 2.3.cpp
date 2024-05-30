//2.3. Leia um n?mero real. Se o n?mero for positivo imprima a raiz quadrada. Do contr?rio, imprima o n?mero ao quadrado.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num, raiz;
	
	printf("Digite um n?mero: \n");
	scanf("%f", &num);
	
	if(num>0){
		raiz = sqrt(num);
		printf("A raiz do n?mero digitado ? %.2f", raiz);
	}
	
	else{
		raiz = num * num;
		printf("O n?mero digitado ? negativo, mas seu valor ao quadrado ? %.2f", raiz);
	}
	
	return 0;
}
